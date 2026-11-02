import random
import sys
import time

from OpenGL.GL import *
from OpenGL.GLU import *
from OpenGL.GLUT import *

window_width = 800
window_height = 500


catcher_width = 200
catcher_height = 10
catcher_y = 30


diamond_size = 30

# Game state variables
catcher_x = window_width // 2
diamond_x = random.randint(diamond_size, window_width - diamond_size)
diamond_y = window_height - diamond_size
diamond_fall_speed = 150.0  # pixels per second (initial speed)
score = 0
game_over = False
paused = False

last_time = 0.0

# Button dimensions and positions
BtN_size = 50
BtN_padding = 20
BtN_Y = window_height - BtN_size - BtN_padding
BTN_restart_X = BtN_padding
BTN_pause_X = (window_width - BtN_size) // 2
BTN_exit_X = window_width - BtN_size - BtN_padding

# Colors
color_WHITE = (1.0, 1.0, 1.0)
color_RED = (1.0, 0.0, 0.0)
color_TEAL = (0.0, 0.5, 0.5)
color_AMBER = (1.0, 0.75, 0.0)


def midpoint_line_zone0(x_1, y_1, x_2, y_2):
    points = []
    dx = x_2 - x_1
    dy = y_2 - y_1
    d = 2 * dy - dx
    inc_E = 2 * dy
    inc_NE = 2 * (dy - dx)
    x, y = x_1, y_1

    points.append((x, y))
    while x < x_2:
        if d > 0:
            y += 1
            d += inc_NE
        else:
            d += inc_E
        x += 1
        points.append((x, y))
    return points


def find_zone(x_1, y_1, x_2, y_2):
    dx = x_2 - x_1
    dy = y_2 - y_1
    abs_dx = abs(dx)
    abs_dy = abs(dy)
    if abs_dx >= abs_dy:
        if dx >= 0 and dy >= 0:
            return 0
        elif dx >= 0 and dy < 0:
            return 7
        elif dx < 0 and dy >= 0:
            return 3
        else:
            return 4
    else:
        if dx >= 0 and dy >= 0:
            return 1
        elif dx >= 0 and dy < 0:
            return 6
        elif dx < 0 and dy >= 0:
            return 2
        else:
            return 5


def convert_to_zone0(x1, y1, zone):
    if zone == 0:
        return (x1, y1)
    elif zone == 1:
        return (y1, x1)
    elif zone == 2:
        return (y1, -x1)
    elif zone == 3:
        return (-x1, y1)
    elif zone == 4:
        return (-x1, -y1)
    elif zone == 5:
        return (-y1, -x1)
    elif zone == 6:
        return (-y1, x1)
    elif zone == 7:
        return (x1, -y1)


def convert_from_zone0(x1, y1, zone):
    if zone == 0:
        return (x1, y1)
    elif zone == 1:
        return (y1, x1)
    elif zone == 2:
        return (-y1, x1)
    elif zone == 3:
        return (-x1, y1)
    elif zone == 4:
        return (-x1, -y1)
    elif zone == 5:
        return (-y1, -x1)
    elif zone == 6:
        return (y1, -x1)
    elif zone == 7:
        return (x1, -y1)


def draw_line(x_1, y_1, x_2, y_2):
    zone1 = find_zone(x_1, y_1, x_2, y_2)
    # Convert to zone 0
    x1_z, y1_z = convert_to_zone0(x_1, y_1, zone1)
    x2_z, y2_z = convert_to_zone0(x_2, y_2, zone1)
    # Ensure x1z < x2z for loop
    if x2_z < x1_z:
        x1_z, x2_z = x2_z, x1_z
        y1_z, y2_z = y2_z, y1_z
    points_zone0 = midpoint_line_zone0(x1_z, y1_z, x2_z, y2_z)

    glBegin(GL_POINTS)
    for (x1, y1) in points_zone0:
        orig_x, orig_y = convert_from_zone0(x1, y1, zone1)
        glVertex2i(orig_x, orig_y)
    glEnd()


def draw_diamond(c_x, c_y, size, color):
    half = size // 2
    glColor3f(*color)
    # Diamond vertices
    draw_line(c_x, c_y + half, c_x + half, c_y)
    draw_line(c_x + half, c_y, c_x, c_y - half)
    draw_line(c_x, c_y - half, c_x - half, c_y)
    draw_line(c_x - half, c_y, c_x, c_y + half)


def draw_catcher(c_x, c_y, width, height, color):
    glColor3f(*color)
    w2 = width // 2
    h2 = height // 2
    # four edges
    draw_line(c_x - w2, c_y + h2, c_x + w2, c_y + h2)
    draw_line(c_x + w2, c_y + h2, c_x + w2, c_y - h2)
    draw_line(c_x + w2, c_y - h2, c_x - w2, c_y - h2)
    draw_line(c_x - w2, c_y - h2, c_x - w2, c_y + h2)


def draw_button(x1, y1, size, color, shape):
    glColor3f(*color)
    half = size // 2
    quarter = size // 4

    if shape == 'left_arrow':
        # Left arrow using three lines
        draw_line(x1 + quarter, y1 + half, x1 - quarter, y1)
        draw_line(x1 - quarter, y1, x1 + quarter, y1 - half)
        draw_line(x1 + quarter, y1 + half, x1 + quarter, y1 - half)
    elif shape == 'pause':
        gap = quarter // 2
        # left bar
        bar_left_start = x1 - quarter - gap
        bar_left_end = x1 - gap
        draw_line(bar_left_start, y1 + half, bar_left_start, y1 - half)
        draw_line(bar_left_end, y1 + half, bar_left_end, y1 - half)
        draw_line(bar_left_start, y1 + half, bar_left_end, y1 + half)
        draw_line(bar_left_start, y1 - half, bar_left_end, y1 - half)
        # right bar
        bar_right_start = x1 + gap
        bar_right_end = x1 + quarter + gap
        draw_line(bar_right_start, y1 + half, bar_right_start, y1 - half)
        draw_line(bar_right_end, y1 + half, bar_right_end, y1 - half)
        draw_line(bar_right_start, y1 + half, bar_right_end, y1 + half)
        draw_line(bar_right_start, y1 - half, bar_right_end, y1 - half)
    elif shape == 'play':
        # Triangle pointing right
        p1 = (x1 - quarter, y1 + half)
        p2 = (x1 + quarter, y1)
        p3 = (x1 - quarter, y1 - half)
        draw_line(*p1, *p2)
        draw_line(*p2, *p3)
        draw_line(*p3, *p1)
    elif shape == 'cross':
        # Cross shape (X)
        draw_line(x1 - half, y1 - half, x1 + half, y1 + half)
        draw_line(x1 - half, y1 + half, x1 + half, y1 - half)


def has_collided(b1, b2):
    return (b1['x'] < b2['x'] + b2['width'] and
            b1['x'] + b1['width'] > b2['x'] and
            b1['y'] < b2['y'] + b2['height'] and
            b1['y'] + b1['height'] > b2['y'])


def reset_game():
    global score, game_over, diamond_x, diamond_y, diamond_fall_speed, paused, catcher_x
    score = 0
    game_over = False
    paused = False
    diamond_fall_speed = 150.0
    diamond_x = random.randint(diamond_size, window_width - diamond_size)
    diamond_y = window_height - diamond_size
    catcher_x = window_width // 2
    print("Starting Over")


def toggle_pause():
    global paused
    paused = not paused
    if paused:
        print("Game Paused")
    else:
        print("Game Resumed")


def terminate_game():
    print(f"Goodbye. The Final Score: {score}")
    glutLeaveMainLoop()


def update_game(delta_time):
    global diamond_y, score, game_over, diamond_fall_speed

    if game_over or paused:
        return

    diamond_y -= diamond_fall_speed * delta_time
    diamond_fall_speed += 5 * delta_time  # slowly ramp up speed

    d_box = {
        'x': diamond_x - diamond_size // 2,
        'y': diamond_y - diamond_size // 2,
        'width': diamond_size,
        'height': diamond_size,
    }
    c_box = {
        'x': catcher_x - catcher_width // 2,
        'y': catcher_y - catcher_height // 2,
        'width': catcher_width,
        'height': catcher_height,
    }

    if has_collided(d_box, c_box):
        score_increment()
    elif diamond_y <= diamond_size // 2:
        end_game()


def score_increment():
    global score, diamond_x, diamond_y
    score += 1
    print(f"Score: {score}")
    diamond_x = random.randint(diamond_size, window_width - diamond_size)
    diamond_y = window_height - diamond_size


def end_game():
    global game_over
    game_over = True
    print(f"Game Over. Final Score: {score}")


def display():
    glClear(GL_COLOR_BUFFER_BIT)
    # Draw diamond if game is not over
    if not game_over:
        diamond_color = [random.uniform(0.7, 1.0) for _ in range(3)]
        draw_diamond(diamond_x, int(diamond_y), diamond_size, diamond_color)
    # Draw catcher (red if game over else white)
    catcher_color = color_RED if game_over else color_WHITE
    draw_catcher(catcher_x, catcher_y, catcher_width, catcher_height, catcher_color)

    # Draw buttons
    draw_button(BTN_restart_X + BtN_size // 2, BtN_Y + BtN_size // 2, BtN_size, color_TEAL, 'left_arrow')
    if paused:
        draw_button(BTN_pause_X + BtN_size // 2, BtN_Y + BtN_size // 2, BtN_size, color_AMBER, 'play')
    else:
        draw_button(BTN_pause_X + BtN_size // 2, BtN_Y + BtN_size // 2, BtN_size, color_AMBER, 'pause')
    draw_button(BTN_exit_X + BtN_size // 2, BtN_Y + BtN_size // 2, BtN_size, color_RED, 'cross')

    glutSwapBuffers()


def reshape(width, height):
    global window_width, window_height
    window_width, window_height = width, height
    glViewport(0, 0, width, height)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    gluOrtho2D(0, width, 0, height)
    glMatrixMode(GL_MODELVIEW)


def keyboard_special(key, x, y):
    global catcher_x
    if game_over or paused:
        return

    step = 20
    if key == GLUT_KEY_LEFT:
        catcher_x = max(catcher_width // 2, catcher_x - step)
    elif key == GLUT_KEY_RIGHT:
        catcher_x = min(window_width - catcher_width // 2, catcher_x + step)


def mouse_click(button, state, x, y):
    global last_time
    # Convert to OpenGL coordinate system (y increases from bottom)
    y = window_height - y

    if state != GLUT_DOWN:
        return

    if BTN_restart_X <= x <= BTN_restart_X + BtN_size and BtN_Y <= y <= BtN_Y + BtN_size:
        reset_game()
        glutPostRedisplay()
        return

    if BTN_pause_X <= x <= BTN_pause_X + BtN_size and BtN_Y <= y <= BtN_Y + BtN_size:
        toggle_pause()
        glutPostRedisplay()
        return

    if BTN_exit_X <= x <= BTN_exit_X + BtN_size and BtN_Y <= y <= BtN_Y + BtN_size:
        terminate_game()


def idle():
    global last_time
    current_time = time.time()
    if last_time == 0:
        last_time = current_time
    delta_time = current_time - last_time
    last_time = current_time

    update_game(delta_time)
    glutPostRedisplay()


if __name__ == '__main__':
    glutInit(sys.argv)
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA)
    glutInitWindowSize(window_width, window_height)
    glutCreateWindow(b"Catch the Diamonds!")
    glClearColor(0, 0, 0, 1)

    glutDisplayFunc(display)
    glutReshapeFunc(reshape)
    glutSpecialFunc(keyboard_special)
    glutMouseFunc(mouse_click)
    glutIdleFunc(idle)

    reset_game()
    glutMainLoop()
