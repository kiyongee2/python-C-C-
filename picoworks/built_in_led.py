from machine import Pin
import utime

led = Pin(25, Pin.OUT)

while True:
    led.value()
    utime.sleep(0.5)
    led.value()
    utime.sleep_ms(500)