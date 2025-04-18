# 대입 연산자
# 변수값 교환
x = 1
y = 2

print("===== 교환전 =====")
print("x =", x, ", y =", y)

# 교환
"""
temp = x
x = y
y = temp
"""

# 직접 교환
x, y = y, x

print("===== 교환후 =====")
print("x =", x, ", y =", y)

# 산술 연산자
n1 = 10
n2 = 4

print("n1 + n2 =", n1 + n2)
print("n1 - n2 =", n1 - n2)
print("n1 * n2 =", n1 * n2)
print("n1 / n2 =", n1 / n2)   # 나누기
print("n1 // n2 =", n1 // n2) # 몫
print("n1 % n2 =", n1 % n2)   # 나머지
print("n1 ** n2 =", n1 ** n2) # 거듭제곱

# 복합대입 연산자
val = 20

val += 10  # val = val + 10
print(val)

val -= 10  # val = val - 10
print(val)

val *= 10  # val = val * 10
print(val)

val /= 10  # val = val / 10
print(val)

val %= 10  # val = val % 10
print(val)

# 비교, 논리 연산자
x = 10
y = -10

print(x > 0)
print(y > 0)
print()

print(x > y)
print(x < y)
print()

print(x == 10)
print(x == y)
print(x != y)
print(x is y)
print(x is not y)
print()

print(x > 0 and y > 0)
print(x > 0 or y > 0)
print(not x > 0)

# 비트 이동 연산자
num = 5  #00000101
val_1 = (num << 2) #00010100
print(val_1) 

val_2 = (num >> 1) #00000010
print(val_2) 

# 비트 논리 연산자
num1 = 10    # 00001010
num2 = 13    # 00001101

val_3 = num1 & num2 # 00001000
print(val_3)

val_4 = num1 | num2 # 00001111
print(val_4)

# 문자열 연산
head = "Good"
tail = " Job!"
print(head + tail)
print(head * 3)

print('=' * 10)
print(head + tail)
print('=' * 10)





















