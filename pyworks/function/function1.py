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

# 리스트를 매개변수로 전달
def times(a):
    a2 = []
    for i in a:
        a2.append(i * 4)
    return a2

v = [1, 2, 3, 4]
v2 = times(v)
print(v2)
'''

# 동명이인 찾기
# 리스트로 구현하기
def find_same_name(a):
    same_name = []
    n = len(a)
    for i in range(0, n-1):
        for j in range(i + 1, n):
            if a[i] == a[j]:
                same_name.append(a[i])
    return same_name

name = ['콩쥐', '흥부', '팥쥐', '흥부']
result = find_same_name(name)
print(result)

"""
  i=0, 
       j=1, a[0] == a[1], False
       j=2, a[0] == a[2], False
       j=3, a[0] == a[3], False
  i=1, 
       j=2, a[1] == a[2], False 
       j=3, a[1] == a[3], True, 중복
  i=2, 
       j=3, a[2] == a[3], False, 
  i=3, 반복 종료
"""



# set(집합)으로 구현하기
def find_same_name(a):
    same_name = set()
    n = len(a)
    for i in range(0, n-1):
        for j in range(i + 1, n):
            if a[i] == a[j]:
                same_name.add(a[i])
    return same_name

name = ['콩쥐', '흥부', '팥쥐', '흥부']
result2 = find_same_name(name)
print(result2)

'''
# 전역 변수
def get_price():
    price = 1000 * quantity
    print(f"{quantity}개에 {price}원 입니다.")

quantity = 2 #전역 변수
get_price()  #함수 호출

# 지역 변수
def one_up():
    x = 1   #지역 변수 
    x += 1
    return x

print(one_up())
print(one_up())
print(one_up())
# print(x)  # 오류 발생
print("--------------")

# 정적 변수
def one_up2():
    global x  # 정적변수(전역 변수화 함)
    x += 1
    return x

x = 1  # 전역 변수
print(one_up2())
print(one_up2())
print(one_up2())

# 배송비 계산하기
def get_price(unit_price, quantity):
    delivery_fee = 3000  # 배송비
    price = unit_price * quantity # 가격 = 단위당 가격 * 수량
    if price < 40000:
        price += delivery_fee
    else:
        price
    return price

# 메인 영역 - 함수 호출
price1 = get_price(25000, 2)
price2 = get_price(30000, 1)

print("상품1 가격 : " + str(price1) + "원")
print(f"상품1 가격 : {price1}원")
print("상품2 가격 : " + str(price2) + "원")
print(f"상품2 가격 : {price2}원")
'''

# 실습 문제1
def my_func(x, y):
    if x == y:
        return x + y
    else:
        return x - y
    
result1 = my_func(8, 8)
print("result1 =", result1)

result2 = my_func(8, 9)
print("result2 =", result2)

