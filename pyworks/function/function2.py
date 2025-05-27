"""
# 기본 매개 변수
def print_string(text, count=1):
    for i in range(count):
        print(text)

print_string("Hello")
print_string("Hello", 3)

# 가변 매개 변수
def calc_avg(*numbers):
    sum_v = 0
    for i in numbers:
        sum_v += i
    avg = sum_v / len(numbers)
    return avg

avg1 = calc_avg(1, 2) #1.5
avg2 = calc_avg(1, 2, 3, 4) #2.5
print(avg1)
print(avg2)

# 내장 함수
a = [1, 2, 3, 4]  # 리스트 생성
b = (1, 2, 3, 4)  # 튜플 생성

print(sum(a))  # 합계
print(sum(b))

print(max(a))  # 최대값
print(max(b))

print(min(a))  # 최소값
print(min(b))

# 반올림
print(round(2.74))
print(round(2.24))

# 문자열 표현식 -> 숫자로 변환
# print('1 + 2')
print(eval('1 + 2'))

# 리스트로 변환
print(list('korea'))

# 거듭제곱
def my_pow(x, y):
    num = 1
    for i in range(0, y):
        num = num * x
    return num
'''
  x=2, y=4 일때
  반복
  i=0, num = 1 * 2
  i=1, num = 2 * 2
  i=2, num = 4 * 2
  i=3, num = 8 * 2 
  i=4, 반복 종료
'''

print(my_pow(2, 4)) #16
print(my_pow(3, 3)) #27

# 내장 함수 - pow()와 비교
print(pow(2, 4)) #16
print(pow(3, 3)) #27
"""

# 재귀 호출
# def sos(i):
#     print("Help me!")
#     if i <= 1:
#         return ''
#     else:
#         return sos(i - 1)
    
def sos(i):
    print("Help me!")
    i = i - 1
    if i > 0:
        sos(i)
'''
    i=4, Help me!, sos(3)
    i=3, Help me!, sos(2)
    i=2, Help me!, sos(1)
    i=1, Help me!, sos(0)
    i=0, 반복 종료
'''
sos(4)

# 팩토리알 재귀 호출
def facto(n):
    if n <= 1:
        return 1
    else:
        return n * facto(n-1)
    
'''
    n = 4, 4 * facto(3)
           4 * 3 * facto(2)
           4 * 3 * 2 * facto(1)
           4 * 3 * 2 * 1  <24>
''' 

print(facto(1)) # 1!
print(facto(2)) # 2!
print(facto(3)) # 3!
print(facto(4)) # 4!