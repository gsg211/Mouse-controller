# Importing Libraries
import serial
import time
import pyautogui as auto

arduino = serial.Serial(port='COM8', baudrate=9600, timeout=0.1)

scrollspeed = 150
sensitivity = 1/10
step=0

def move(data):
    xstring, ystring = data.split(" ")
    x = (int(xstring) ) * sensitivity
    y = (int(ystring)) * sensitivity *-1
    print(auto.position())
    print(x,y)
    auto.move(x,y,0.1)


def comp():
    global scrollspeed

    data = arduino.readline()
    try:
        data = arduino.readline().decode('utf-8')
    except:
        print("empty string")
    # print(data)
    if data == "left\n":
        auto.click(auto.position())
        print("left clicked")
    elif data == "right\n":
        auto.rightClick(auto.position())
        print("right clicked")
    elif data == "up\n":
        auto.hscroll(clicks=scrollspeed)
        print("scrolled up")
    elif data == "down\n":
        auto.hscroll(clicks=-scrollspeed)
        print("scrolled down ")
    elif data == "sens\n":
        print("sensitivity")
    elif data == "":
        print("no command")
    else:
        move(data)
        print("controller")


while True:
    comp()
    # print(value)  # printing the value
