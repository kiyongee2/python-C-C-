import turtle as t

# 다각형 그리기
'''
def polygon(n):
    for x in range(n):
        t.forward(50)
        t.left(360/n)  #내각
        
def polygon2(n, d):
    for x in range(n):
        t.forward(d)
        t.left(360/n)
        
polygon(3)  #삼각형
polygon(5)  #오각형

t.up()   #펜 올리기
t.forward(100) 
t.down() #펜 내리기

polygon2(3, 100)
polygon2(5  , 100)
'''

# 키보드로 거북이 조종하기
# 오른쪽으로 회전후 이동
def turn_right():
    t.setheading(0)   
    t.forward(10)

# 위쪽으로 회전후 이동
def turn_up():
    t.setheading(90)
    t.forward(10)

# 왼쪽으로 회전후 이동
def turn_left():
    t.setheading(180)
    t.forward(10)
  
# 아래쪽으로 회전후 이동  
def turn_down():
    t.setheading(270)
    t.forward(10)
    
t.shape("turtle")
#상수 - Right(오른쪽), 첫글자 대문자
t.onkeypress(turn_right, "Right")
t.onkeypress(turn_up, "Up")
t.onkeypress(turn_left, "Left")
t.onkeypress(turn_down, "Down")
t.listen() #동작 실행

t.mainloop()