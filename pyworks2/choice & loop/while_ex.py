# 반복문(while)
# 증가, 감소 예제
"""
a = 1
print(a)

a += 1 #a = a + 1
print(a)

a += 1
print(a)

a -= 1 # a = a - 1
print(a)

a -= 1
print(a)
"""

# "안녕~ " 10번 출력하기
'''
n = 1  #초기값 
while n < 11: #조건식(종료)
    print("안녕~", n)
    n += 1  #1 증가 
print()

n = 10
while n > 0:
    print("안녕~", n)
    n -= 1  #1 감소 
'''

# 1 ~ 10까지 더하기

x = 1
total = 0  #합계를 저장할 변수 선언 및 초기화 
while x <= 10:
    total += x  #total = total + x
    print("x =", x, ", total =", total)
    x += 1

print("x =", x, ", 합계 : ", total)


# 1 ~ 5까지 곱하기
# 5! = 5 x 4 x 3 x 2 x 1
x = 1
gob = 1
while x <= 5:
    gob *= x
    x += 1

print(f"x={x}, gob={gob}")





























