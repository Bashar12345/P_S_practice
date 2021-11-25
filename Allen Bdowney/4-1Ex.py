#interface Design

import turtle
t=turtle.Turtle()
t.fd(100)
t.lt(90)
# print(t)

#code reuse call refactoring

#encapsulation 
# wrapping a piece of code up in a function is called encapsulation 

def sequre(t):
    for i in range(0,4):
     t.fd(100)
     t.lt(90)

#generalization
# adding a perameter into function called generalization
def sequre(length,t):
    for i in range(0,4):
     t.fd(length)
     t.lt(90)

def polygon(t,n,length):
    angle=360/n
    for i in range(n):
        t.fd(length)
        t.lt(angle)

#50-sided polygon
def circle(t,r):
    poridhi=2*3.1416*r
    n=50
    n=int(poridhi/3)+1
    length=poridhi/n
    polygon(t,n,length)

def arc(t,r,angle):
    arc_length=2*3.1416*r*angle/360
    n=int(arc_length/3)+1
    step_length=arc_length/n
    step_angle=angle/n
    for i in range(n):
        t.fd(step_length)
        t.lt(step_angle)
def polyline(t,n,length,angle):
    for i in range(n):
        t.fd(length)
        t.lt(angle)

def arc(t, r, angle):
    """Draws an arc with the given radius and angle.
    t: Turtle
    r: radius
    angle: angle subtended by the arc, in degrees
    """
    arc_length = 2 * math.pi * r * abs(angle) / 360
    n = int(arc_length / 4) + 3
    step_length = arc_length / n
    step_angle = float(angle) / n

    # making a slight left turn before starting reduces
    # the error caused by the linear approximation of the arc
    t.lt(step_angle/2)
    polyline(t, n, step_length, step_angle)
    t.rt(step_angle/2)
#polygon(t,7,70)
#circle(t,90)
arc(t,7,7)
