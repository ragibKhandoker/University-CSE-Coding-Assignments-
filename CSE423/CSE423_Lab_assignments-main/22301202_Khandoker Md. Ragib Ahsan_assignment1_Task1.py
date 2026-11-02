import random
import sys
import time

from OpenGL.GL import (GL_COLOR_BUFFER_BIT, GL_DEPTH_BUFFER_BIT, GL_LINES,
                       GL_MODELVIEW, GL_POINTS, GL_PROJECTION, GL_QUADS,
                       GL_TRIANGLES, glBegin, glClear, glClearColor, glColor3f,
                       glEnd, glLoadIdentity, glMatrixMode, glPointSize,
                       glVertex2f, glViewport)
from OpenGL.GLU import gluOrtho2D
from OpenGL.GLUT import (GLUT_DEPTH, GLUT_DOUBLE, GLUT_ELAPSED_TIME,
                         GLUT_KEY_LEFT, GLUT_KEY_RIGHT, GLUT_RGB,
                         glutCreateWindow, glutDisplayFunc, glutGet, glutInit,
                         glutInitDisplayMode, glutInitWindowPosition,
                         glutInitWindowSize, glutKeyboardFunc, glutMainLoop,
                         glutPostRedisplay, glutReshapeFunc, glutSpecialFunc,
                         glutSwapBuffers, glutTimerFunc)

window_width = 900
window_height = 600
rain_dx = 0.0
sky_color = [0.4,0.7,1.0]
trees = []
last_change_time = 0
change_interval = 3000
rain_direction_left = True
rain_speed = 0.5
rain_dx = -rain_speed
rain_dy = -1.0

# Raindrops
num_of_raindrops = 130
raindrops = []
def raindrops_init():
    global raindrops
    raindrops = []
    for _ in range(num_of_raindrops):
        x = random.uniform(0,window_width)
        y = random.uniform(0,window_height)
        raindrops.append([x,y])

def draw_ground():
    glColor3f(0.4,0.26,0.13)
    glBegin(GL_QUADS)
    glVertex2f(0,0)
    glVertex2f(window_width,0)
    glVertex2f(window_width,window_height * 0.4)
    glVertex2f(0,window_height * 0.4)
    glEnd()

def change_sky_color_randomly():
    global sky_color
    if random.choice([True,False]):
        sky_color = [0.0,0.0,0.0]
    else:
        sky_color = [1.0,1.0,1.0]
def toggle_rain_direction():
    global rain_dx,rain_direction_left,rain_speed
    if rain_direction_left:
        rain_dx = -rain_speed
    else:
        rain_dx = rain_speed
    rain_direction_left = not rain_direction_left
def change_rain_direction_randomly():
    global rain_dx
    rain_dx = random.choice([-1,1])*random.uniform(0.3,0.7)
def timer(value):
    global last_change_time
    update_raindrops()
    current_time = glutGet(GLUT_ELAPSED_TIME)
    if current_time - last_change_time > change_interval:
        change_sky_color_randomly()
        toggle_rain_direction()
        change_rain_direction_randomly()
        last_change_time = current_time
    glutPostRedisplay()
    glutTimerFunc(100,timer,0)

def draw_sky():
    # glColor3f(0,0,0)
    glColor3f(*sky_color)
    glBegin(GL_QUADS)
    glVertex2f(0,window_height*0.4)
    glVertex2f(window_width,window_height * 0.4)
    glVertex2f(window_width,window_height)
    glVertex2f(0,window_height)
    glEnd()

def trees_init():
    global trees
    trees = []
    # for _ in range(15):
    #     base_x1 = random.uniform(0,window_width)
    #     base_y1 = window_height * 0.4
    #     trees.append((base_x1,base_y1))
    #left side
    x3 = window_width * 0.05
    while x3 < window_width * 0.35:
        y3 = window_height * 0.4
        trees.append((x3,y3))
        x3 += window_width * 0.05
    #right side
    x3 = window_width * 0.65
    while x3 < window_width * 0.95:
        y3 = window_height * 0.4
        trees.append((x3,y3))
        x3 += window_width * 0.05

def draw_trees():
    for (base_x1,base_y1) in trees:
        trunk_width = window_width * 0.008
        trunk_height = window_width * 0.05





        glColor3f(0,0.8,0.3)
        glBegin(GL_TRIANGLES)
        glVertex2f(base_x1,base_y1 + trunk_height + window_height * 0.08)
        glVertex2f(base_x1-window_width * 0.02,base_y1)
        glVertex2f(base_x1+window_width * 0.02,base_y1)

        # glVertex2f(base_x1 + window_width * 0.02,base_y1 + window_height*0.08)
        glEnd()

def draw_raindrops():
    glColor3f(0.3,0.6,1)
    glBegin(GL_LINES)
    for drop in raindrops:
        glVertex2f(drop[0],drop[1])
        glVertex2f(drop[0],drop[1]-20)
        if drop[1] < 0:
            drop[1] = window_height
            drop[0] = random.uniform(0,window_width)
    glEnd()

def update_raindrops():
    for drop in raindrops:
        # drop[1] = drop[1] - random.uniform(10,20)
        drop[0] += rain_dx
        drop[1] -= random.uniform(50,80)
        if drop[1] < 0:
            drop[1] = window_height
            drop[0] = random.uniform(0,window_width)

def draw_house():
    house_left_part = window_width * 0.4
    house_right_part = window_width * 0.6
    house_bottom_part = window_height * 0.4
    house_top_part = window_height * 0.6
    # House base
    glColor3f(1.0,0.95,0.9)
    glBegin(GL_QUADS)
    glVertex2f(house_left_part,house_bottom_part)
    glVertex2f(house_right_part,house_bottom_part)
    glVertex2f(house_right_part,house_top_part)
    glVertex2f(house_left_part,house_top_part)
    glEnd()
    #Roof
    glColor3f(0.5,0.0,1.0)
    glBegin(GL_TRIANGLES)
    glVertex2f(house_left_part-window_width * 0.05,house_top_part)
    glVertex2f(house_right_part+window_width * 0.05,house_top_part)
    glVertex2f((house_left_part + house_right_part)/2, house_top_part + window_height * 0.1)
    glEnd()
    #Door
    door_width = window_width * 0.025
    door_height = window_height * 0.1
    door_left_part = (house_left_part + house_right_part) / 2 - door_width / 2
    door_bottom_part = house_bottom_part
    glColor3f(0.2,0.6,1.0)
    glBegin(GL_QUADS)
    glVertex2f(door_left_part,door_bottom_part)
    glVertex2f(door_left_part + door_width,door_bottom_part)
    glVertex2f(door_left_part + door_width,door_bottom_part + door_height)
    glVertex2f(door_left_part,door_bottom_part + door_height)
    glEnd()
    #Door Knob
    glColor3f(0,0,0)
    glPointSize(5)
    glBegin(GL_POINTS)
    glVertex2f(door_left_part + door_width * 0.7, door_bottom_part + door_height * 0.5)
    glEnd()
    #House windows
    window_width_size = window_width * 0.04
    window_height_size = window_height * 0.06


    for x in [-1,1]:
        win_left_part = (house_left_part + house_right_part) / 2 + x * window_width * 0.07
        win_bottom_part = house_top_part - window_height_size * 1.5
        glColor3f(0.2,0.6,1.0)
        glBegin(GL_QUADS)
        glVertex2f(win_left_part,win_bottom_part)
        glVertex2f(win_left_part + window_width_size,win_bottom_part)
        glVertex2f(win_left_part + window_width_size,win_bottom_part + window_height_size)
        glVertex2f(win_left_part,win_bottom_part + window_height_size)
        glEnd()

        #window cross lines
        glColor3f(0,0,0)
        glBegin(GL_LINES)
        glVertex2f(win_left_part + window_width_size / 2 ,win_bottom_part)
        glVertex2f(win_left_part + window_width_size / 2 ,win_bottom_part+window_height_size)
        glVertex2f(win_left_part,win_bottom_part + window_height_size / 2)
        glVertex2f(win_left_part + window_width_size,win_bottom_part + window_height_size / 2)
        glEnd()

# def timer(value):
#     update_raindrops()
#     glutPostRedisplay()
#     glutTimerFunc(100,timer,0)


def display():
    # glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glClear(GL_COLOR_BUFFER_BIT)
    glLoadIdentity()
    draw_sky()
    draw_ground()
    draw_trees()
    draw_house()
    draw_raindrops()
    glutSwapBuffers()
window_width = 900
window_height = 600
def reshape(width,height):
    global window_width,window_height
    window_width = width
    window_height = height
    glViewport(0,0,width,height)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    gluOrtho2D(0,width,0,height)
    glMatrixMode(GL_MODELVIEW)
    glLoadIdentity()
    trees_init()

def special_keys(key,x,y):
    global rain_dx
    if key == GLUT_KEY_LEFT:
        rain_dx -= 0.5
    elif key == GLUT_KEY_RIGHT:
        rain_dx += 0.5
# def keyboard(key,x,y):
#     global sky_color
#     if key == b'd':
#        sky_color[0] = min(sky_color[0] + 0.05,1.0)
#        sky_color[1] = min(sky_color[1] + 0.05,1.0)
#        sky_color[2] = min(sky_color[2] + 0.05,1.0)
#     elif key == b'n':
#         sky_color[0] = max(sky_color[0]-0.05,0.0)
#         sky_color[1] = max(sky_color[1]-0.05,0.0)
#         sky_color[2] = max(sky_color[2]-0.05,0.0)


def main():
    glutInit(sys.argv)
    # glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH)
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB)
    glutInitWindowSize(window_width,window_height)
    glutInitWindowPosition(100,100)
    glutCreateWindow(b"Raindrops Simulation")
    glClearColor(0.5,0.5,0.5,1.0)
    glutDisplayFunc(display)
    glutReshapeFunc(reshape)
    glutTimerFunc(100,timer,0)
    # glutKeyboardFunc(keyboard)
    glutSpecialFunc(special_keys)
    trees_init()

    raindrops_init()
    glutMainLoop()
if __name__ == "__main__":
    main()