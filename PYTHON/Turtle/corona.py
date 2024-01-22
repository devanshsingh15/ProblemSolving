'''import random
#@python.coder_
import pyautogui as pg
import time
animal=('monkey','donkey','dog')
time.sleep(8)
for i in range(200):
    a=random.choice(animal)
    pg.write("you are a "+a)
    pg.press('enter')'''


from turtle import *
color('green')
bgcolor('black')
speed(20)
hideturtle()
b=0
while b<200:
    right(b)
    forward(b*3)
    b=b+1
