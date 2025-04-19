# 형변환
# 문자를 숫자로 변환 
val_1 = "123"
val_1 = int(val_1)
print(val_1)
print(val_1 + 10)

# 실수를 정수로 변환
val_2 = 3.1
print(int(val_2))

# 정수를 문자로 변환
val_3 = 123
val_3 = str(val_3)
print(val_3)
# print(val_3 + 10) 문자는 더할 수 없음 

# 입력 처리
"""
print("문자 입력: ")
ch = input()
print(ch)

"""

# ch = input("문자 입력: ")
# print(ch)

# 숫자 입력
'''
num = input("숫자 입력: ")
print(type(num))

num = int(num) # 문자를 숫자로 변환
print(type(num))
print(num + 1)
'''

# 2개의 입력
'''
x = int(input("첫째 수 입력: "))
y = int(input("둘째 수 입력: "))
sum = x + y
print("두 수의 합: ", sum)
'''

# 나이 계산 프로그램
"""
current_year = 2025

birth_year = int(input("태어난 연도를 입력하세요: "))

age = current_year - birth_year
print(f"{birth_year}에 태어난 사람의 나이는 {age}세 입니다.")
"""

# 사각형을 계산 프로그램
width = int(input("가로의 길이: "))
height = int(input("세로의 길이: "))
# 면적 계산 
area = width * height

print("가로 길이: " + str(width) + "cm")
print("세로 길이: " + str(height) + "cm")
print("면적: " + str(area) + "cm")




















