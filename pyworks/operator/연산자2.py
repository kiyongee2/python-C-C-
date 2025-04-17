# 연산자 - 대입, 산술, 복합대입, 비교
# 대입연산자 - '='
userid = "cloud123"
print(userid)

# x = 0, y = 1 -> x = 1, y = 0
x = 0
y = 1
print('=== 교환전 ===')
print('x =', x, ', y =', y)

'''
# 방법1 - 임시 변수를 생성('z')
z = x
x = y
y = z

print('=== 교환후 ===')
print('x =', x, ', y =', y)
'''

# 방법 2 - 구조 할당
x, y = y, x

print('=== 교환후 ===')
print('x =', x, ', y =', y)

# 산술 연산 - '+', '-', '*', '/'
"""
n1, n2 = 5, 2
print('n1 =', n1, ', n2 =', n2)

print("n1 + n2=", n1 + n2)
print("n1 - n2=", n1 - n2)
print("n1 * n2=", n1 * n2)
print("n1 / n2=", n1 / n2)
print("n1 // n2=", n1 // n2)  #몫
print("n1 % n2=", n1 % n2)   #나머지
"""

# 실습 문제

# 복합 대입 연산자
"""
val = 10
# val = val + 2
val += 2
print(val)
# val = val -2
val -= 2
print(val)
val *= 2
print(val)
val /= 2
print(val)
"""

# 비교 연산자 - '>', '>=','<', '<=', '==', '!='
result1 = (4 > 5)   #False
print(result1)
print(type(result1))

result2 = (4 == 5)
print(result2)

result2 = (4 != 5)
print(result2)


























