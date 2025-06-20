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

t.down()  #펜 내리기

time.sleep(1) 
t.goto(0, 100)

time.sleep(1)
t.goto(100, 100)

time.sleep(1)
t.goto(100, 0)

time.sleep(1)
t.goto(0, 0)
'''

# 랜덤 위치로 이동
'''
t.shape("turtle")
t.speed(0)

t.up()
# -250부터 250까지 무작위 수
x = random.randint(-250, 250)
y = random.randint(-250, 250)
t.goto(x, y)

n = 300
for x in range(n):
    angle = random.randint(1, 360) #랜덤한 각도값
    t.setheading(angle) #머리의 방향
    t.forward(10)
'''

# 거북이 대포 게임
"""
1.키보드 방향키로 발사 각도 조절
2.스페이스바로 발사,
3.화살촉 모양의 포탄이 하늘로 날아감
"""
def turn_up():
    t.left(2)
    
def turn_down():
    t.right(2)
    
def fire():
    angle = t.heading() #거북이가 바라보는 현재 각도
    while t.ycor() > 0: #포탄이 땅위에 있는동안
        t.forward(15)
        t.right(5)
        
    d = t.distance(target, 0)  #거북이와 목표 지점과의 거리
    # t.write(d)
    t.sety(random.randint(10, 100)) #성공, 실패를 표시할 위치
    if d < 25:  #목표 지점에 닿음 
        t.color('blue')
        t.write('Good!', False, 'center', ('', 15))
    else:
        t.color('red')
        t.write('Bad!', False, 'center', ('', 15))
        t.color('black')
        t.goto(-200, 10)  #거북이의 위치를 처음 발사했던 곳으로 되돌림
        t.setheading(angle) #처음 기억해둔 각도로 되돌림

# 땅 그리기
t.goto(-300, 0)
t.goto(300, 0)

# 목표 지점 설정
target = random.randint(50, 150) 
t.color('green')
t.pensize(2)
t.up()  #펜 올리기

# 목표 지점의 길이 - 50px
t.goto(target-25, 1)
t.down()
t.goto(target+25, 1)

# 포탄의 처음 위치
t.color('black')
t.up()
t.goto(-200, 10)
t.setheading(20)

# 거북이 대포 동작 설정
t.onkeypress(turn_up, "Up")
t.onkeypress(turn_down, "Down")
#스페이스 키를 누르면 발사됨
t.onkeypress(fire, "space")  
t.listen() #동작 실행

t.mainloop()

