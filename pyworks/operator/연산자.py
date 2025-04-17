# 연산자 - 대입, 산술, 비교, 복합대입

id = 'cloud100'
print(id)

print("*** 교환전 ***")
x = 0
y = 1

print('x =', x, ', y =', y)

# 값을 서로 바꿈(스와핑 - 교환)
# 방법1
'''
z = x
x = y
y = z

print("*** 교환후 ***")
print('x =', x, ', y =', y)
'''

# 방법 2
x, y = y, x

print("*** 교환후 ***")
print('x =', x, ', y =', y)

# 산술 연산자
'''
n1 = 5
n2 = 2

print(n1 + n2)
print(n1 - n2)
print(n1 * n2)
print(n1 / n2)
print(n1 // n2)  #몫
print(n1 % n2)  #나머지
'''


# 실습문제

# 복합 대입 연산자
'''
val = 10
#val = val + 2
# print(val)
val += 2
print(val)
val -= 2
print(val)
val *= 2
print(val)
val /= 2
print(val)
'''

# 비교 연산자 - >, <, ==, !=
num1 = 10
num2 = 20

print(num1 > num2)
print(num1 < num2)
print(num1 == num2)
print(num1 != num2)

# 논리연산자 - and, or, not
print((num1 < num2) and (num1 == num2))
print((num1 < num2) or (num1 == num2))
print(not(num1 != num2))































