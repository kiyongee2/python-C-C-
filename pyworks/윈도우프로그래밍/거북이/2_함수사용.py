import turtle as t

# 다각형 그리기
def polygon(n):
    for x in range(n):
        t.forward(50)
        t.left(360/n)
        
def polygon2(n, d):
    for x in range(n):
        t.forward(d)
        t.left(360/n)
        
polygon(3)
polygon(5)

t.up()   #펜 올리기
t.forward(100) 
t.down() #펜 내리기

polygon2(3, 100)
polygon2(5  , 100)

t.mainloop()