import turtle as t

t.shape('turtle')  #거북이 모양
'''
# 사각형
t.forward(100) #100픽셀 직진
t.right(90)    #오른쪽으로 90도 회전
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)

# 삼각형
t.forward(100)
t.left(120)     #왼쪽으로 120도 회전
t.forward(100)
t.left(120)
t.forward(100)
t.left(120)

# 방향 전환
t.right(180)

# 삼각형
t.forward(100)
t.right(120)
t.forward(100)
t.right(120)
t.forward(100)
t.right(120)

# 방향 전환
t.left(90)

# 사각형
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)
'''

# 반복문 사용하기
'''
# 사각형
for i in range(4):
    t.forward(100)
    t.right(90)
  
# 삼각형  
for i in range(3):
    t.forward(100)
    t.left(120)
    
# 방향 전환
t.right(180)
    
# 삼각형 
for i in range(3):
    t.forward(100)
    t.right(120)
    
# 방향 전환
t.left(90)

# 사각형
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)
t.forward(100)
'''

# 변수 사용

# 사각형
d = 100
n = 4
for i in range(n):
    t.forward(d)
    t.right(360/n)
  
# 삼각형  
t.color("blue")
n = 3
for i in range(n):
    t.forward(d)
    t.left(360/n)
  
# 원  
t.color('red')
t.circle(50)  #반지름 50픽셀


t.mainloop()