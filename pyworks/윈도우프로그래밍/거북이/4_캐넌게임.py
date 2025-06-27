import turtle as t
import random

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
# t.down()
t.goto(300, 0)

# 목표 지점 설정
target = random.randint(50, 150) 
t.color('green')
t.pensize(2)
t.up()  #펜 올리기
t.goto(target-25, 1) # 목표 지점의 길이 - 50px
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
