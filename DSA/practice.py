import turtle

import random

from random import randint

from turtle import Turtle

HEIGHT, WIDTH = 500, 500


screen = turtle.Screen()

screen.screensize(HEIGHT, WIDTH)

COLORS = 'white', 'green', 'cyan', 'orange', 'skyblue'

screen.bgcolor(random.choice(COLORS))

screen.title("Bounce a ball")

CURSOR_SIZE = 20


def tDirection(direct):


t.setheading(direct)

# make arena


def rectangle():


t.pendown()

for i in range(2):

t.forward(800)

t.left(90)

t.forward(800)

t.left(90)

t.penup()

# defines new turtle

pen = turtle.Turtle()

# right and left keys


def move_left():


pen.penup()

pen.setheading(0)

pen.bk(100)


def move_right():


pen.penup()

pen.setheading(0)

pen.fd(100)

#plaform###########################

pen.penup()

pen.goto(0, -350)

pen.shape("square")

pen.color("black")

pen.shapesize(1, 5)

screen.listen()

screen.onkey(move_right, "Right")

screen.onkey(move_left, "Left")

#####################################


#circle######################################

t = Turtle("circle", visible=False)

t.speed('fastest')

t.pensize(5)

t.penup()

t.goto(-400, -400)

###########################################

rectangle()

index = 0

#####################################

t.color('black')

t.home()

t.showturtle()

#####################################

direct = randint(1, 600)

tDirection(direct)

while True:

t.forward(2)

ty = t.ycor()

# breaking out top or bottom

if not CURSOR_SIZE - 400 <= ty <= 400 - CURSOR_SIZE:

index += 1

t.color('orange')

angleCurr = t.heading()

if 0 < angleCurr < 180:

tDirection(0 - angleCurr)

else:

tDirection(360 - angleCurr)

t.forward(2)

tx = t.xcor()

# breaking out left or right

if not CURSOR_SIZE - 400 <= tx <= 400 - CURSOR_SIZE:

index += 1

t.color('blue')

angleCurr = t.heading()

if 0 < angleCurr < 180:

tDirection(180 - angleCurr)

else:

tDirection(540 - angleCurr)

t.forward(2)

if t.pos() == pen.pos():
