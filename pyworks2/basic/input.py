 # 입력 처리
# input() 사용
"""
print("문자 입력: ")
ch = input()  #키보드로 입력한 값을 저장할 변수

print(ch)

ch = input("문자 입력:")
print(ch)
"""

'''
# 정수에 1 더하기 
num = input("정수 입력: ")
num = int(num)  #문자를 정수로 변환 
print(type(num))

print(num + 1)

# 몸무게의 2배 계산 
weight = input("몸무게 입력: ")
weight = float(weight) #문자를 실수로 변환
print(type(weight))

print(weight * 2);

# 이름과 나이 입력받기
name = input("이름 입력: ")
print(name + "님 반가워요.")

age = input("나이 입력: ")
print(type(age))  #str
age = int(age) #문자를 숫자로 변환 
#print("당신의 나이는 ", age, "세 이군요")
# 문자열끼리 더할수 있도록 age를 str로 형변환해줌
print("당신의 나이는 " + str(age) + "세 이군요")
'''

# 나이를 계산하는 프로그램
birth_year = input("태어난 연도를 입력하세요: ")

# 나이 = 현재년도 - 태어난년도
age = 2025 - int(birth_year) + 1 #문자를 정수로 변환 
#print(birth_year, "년에 태어난 사람의 나이는", age, "세 입니다.")

# 출력할때는 숫자를 문자로 변환함 
print(str(birth_year) + "년에 태어난 사람의 나이는 " +
              str(age) + "세 입니다.")

# f포맷 방식 - f다음에 쌍따옴표로 감싸고, 변수는 중괄호({})로 감싼다.
print(f"{birth_year}년에 태어난 사람의 나이는 {age}세 입니다.")


# 사각형의 넓이
width = int(input("가로의 길이 : "))
height = int(input("세로의 길이 : "))

area = width * height

print("가로 길이 : " + str(width) + "cm")
print("세로 길이 : " + str(height) + "cm")
print("면적 : " + str(area) + "cm") 



















