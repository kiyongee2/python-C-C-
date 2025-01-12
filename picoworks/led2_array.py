from machine import Pin
import utime

leds = [Pin(26, Pin.OUT), Pin(27, Pin.OUT)]
INTERVAL = [300, 500]
time_previous = [utime.ticks_ms()] * 2

while True:
    time_current = utime.ticks_ms()
    
    for i, led in enumerate(leds):
        time_elapsed = utime.ticks_diff(time_current, time_previous[i])
        
        if time_elapsed >= INTERVAL[i]:
            time_previous[i] = time_current
            led.toggle()