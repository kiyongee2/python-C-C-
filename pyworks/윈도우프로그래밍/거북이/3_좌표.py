import turtle as t
import time
import random

# 1초 간격으로 사각형 그리기
'''
t.shape('turtle')
t.speed(0) #스피드(0이 가장 빠름, 1~10)

t.goto(0, 0)  #출발점
# t.up()  #펜 올리기

time.sleep(1) #1초 대기
t.goto(-100, 0)

time.sleep(1)
t.goto(-100, -100)

time.sleep(1)
t.goto(0, -100)

time.sleep(1)
t.goto(0, 0) #원래 위치

# t.down()  #펜 내리기

# time.sleep(1) 
# t.goto(0, 100)

# time.sleep(1)
# t.goto(100, 100)

# time.sleep(1)
# t.goto(100, 0)

# time.sleep(1)
# t.goto(0, 0)
'''

# 좌표 그리기
'''
t.goto(200, 0)
t.goto(-200, 0)
t.up()

t.goto(0, 200)
t.down()
t.goto(0, -200)

t.mainloop()
'''

# 랜덤 위치로 이동
t.shape("turtle")
t.speed(0)
'''
t.up()
# -250부터 250까지 무작위 수
x = random.randint(-250, 250)
y = random.randint(-250, 250)
t.goto(x, y)
'''

n = 300
for x in range(n):
    angle = random.randint(1, 360) #랜덤한 각도값
    t.setheading(angle) #머리의 방향
    t.forward(10)
    
t.mainloop()
