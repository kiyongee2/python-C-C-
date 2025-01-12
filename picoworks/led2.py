from machine import Pin
import utime

led1 = Pin(26, Pin.OUT)
led2 = Pin(27, Pin.OUT)

INTERVAL1 = 300
INTERVAL2 = 500

time_previous1 = utime.ticks_ms()
time_previous2 = time_previous1

while True:
    time_current = utime.ticks_ms()
    
    # 경과 시간 계산
    time_elapsed1 = utime.ticks_diff(time_current, time_previous1)
    time_elapsed2 = utime.ticks_diff(time_current, time_previous2)
    
    if time_elapsed1 >= INTERVAL1:
        time_previous1 = time_current
        led1.toggle()
    if time_elapsed2 >= INTERVAL2:
        time_previous2 = time_current
        led2.toggle()
    
    
    
    
    
