from machine import Pin
from time import sleep

led1 = Pin(27, Pin.OUT)

while True:
    led1.high()
    sleep(0.5)
    led1.low()
    sleep(0.5)