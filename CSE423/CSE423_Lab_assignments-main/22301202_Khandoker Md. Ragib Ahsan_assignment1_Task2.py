import random
import sys

import pygame
from pygame.locals import *

#initializing the game
pygame.init()
height = 600
width = 800
background_color = (0,0,0)
point_radius_val = 5
blink_interval = 500

#seting up screen
screen_type = pygame.display.set_mode((width,height))
pygame.display.set_caption("Point box")
clock = pygame.time.Clock()

#Point class
class Point:
    def __init__(self,x1,y1):
        self.x1 = x1
        self.y1 = y1
        self.dx = random.choice([-1,1])
        self.dy = random.choice([-1,1])
        self.color = (
            random.randint(50,255),
            random.randint(50,255),
            random.randint(50,255)
        )
        self.visible = True
    def move(self):
        self.x1 += self.dx * self.speed
        self.y1 += self.dy * self.speed
        #Bounce off walls
        if self.x1 <= 0 or self.x1 >= width:
            self.dx *= -1
        if self.y1 <= 0 or self.y1 >= height:
            self.dy *= -1
    def draw(self,surface):
        if self.visible:
            pygame.draw.circle(surface,self.color,(int(self.x1),int(self.y1)),point_radius_val)
#the variables
points = []
speed_multiplier = 1.0
blinking_part = False
frozen1 = False
last_blink_time = pygame.time.get_ticks()

#Main loop part
running = True
while running:
    screen_type.fill(background_color)
    current_time = pygame.time.get_ticks()
    for event_senerio in pygame.event.get():
        if event_senerio.type == pygame.QUIT:
            running = False
        if not frozen1:
            if event_senerio.type == pygame.KEYDOWN:
                if event_senerio.key == pygame.K_UP:
                    speed_multiplier *= 1.1
                elif event_senerio.key == pygame.K_DOWN:
                    speed_multiplier /= 1.1
        if event_senerio.type == pygame.MOUSEBUTTONDOWN:
            if event_senerio.button == 3:
                x2,y2 = event_senerio.pos
                new_point = Point(x2,y2)
                points.append(new_point)
            elif event_senerio.button == 1:
                blinking_part = not blinking_part
                if not blinking_part:
                    for i in points:
                        i.visible = True
    if not frozen1:
        if blinking_part and current_time - last_blink_time >= blink_interval:
            for j in points:
                j.visible = not j.visible
            last_blink_time = current_time
        for a in points:
            a.speed = speed_multiplier * 2
            a.move()
            a.draw(screen_type)
    else:
        for f in points:
            f.draw(screen_type)
    pygame.display.flip()
    clock.tick(60)
