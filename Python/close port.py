# Importing Libraries
import serial
import time
import pyautogui as auto

arduino = serial.Serial(port='COM8', baudrate=9600, timeout=0.1)
arduino.close()
    # print(value)  # printing the value
