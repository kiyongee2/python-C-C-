# 변수의 유효 범위

g1 = 1 # 전역 변수
def funcA():
    g1 =100 ##global 선언 안 하면 지역변수(지역변수명 있으면, global g1 오류)
    global g2 #, 전역변수 사용 하겠다
    l_value=100; #지역
    print("g1:", g1) #100
    print("g2:", g2) #Python
    g1 = 200 #지역
    print("l_value:", l_value) #100
    global g3
    g3=2 #전역
    print("funcA() g1 : ", g1) #200
    
g2="python" #전역변수
funcA()
print("g1:", g1) # 1
#print("l_value:", l_value) #Error
print("g2:", g2) # python
print("g3:", g3) # 2