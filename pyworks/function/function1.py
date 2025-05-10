# 사용자 정의 함수
'''
def say_hello():
    print("안녕~")

def say_hello2(name):
    print(name + "님 안녕~")

# 함수 호출
say_hello() 

say_hello2("민준")
say_hello2("Elsa")
'''

# return이 있는 함수
# 제곱수 구하는 함수
def square(x):
    return x * x;

# 절대값 구하는 함수
def my_abs(x):
    if x < 0:
        return -x
    else:
        return x
    
val1 = square(8)
print(val1)

val2 = my_abs(-5)
print(val2)

# 배송비 계산하기



# 리스트를 매개변수로 전달
def times(a):
    a2 = []
    for i in a:
        a2.append(i * 4)
    return a2

v = [1, 2, 3, 4]
v2 = times(v)
print(v2)

# 동명이인 찾기
def find_same_name(a):
    same_name = []
    n = len(a)
    for i in range(0, n-1):
        for j in range(i+1, n):
            if a[i] == a[j]:
                same_name.append(a[i])
    return same_name

name = ['콩쥐', '흥부', '팥쥐', '흥부']
result = find_same_name(name)
print(result)

# 지역 변수
def one_up():
    x = 1
    x += 1
    return x

print(one_up())
print(one_up())
print(one_up())

# 정적 변수
def one_up2():
    global x
    x += 1
    return x

x = 1
print(one_up2())
print(one_up2())
print(one_up2())