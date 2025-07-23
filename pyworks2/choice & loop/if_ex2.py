# 다중 조건문(if ~ elif ~ else)
"""
 나이    구분    입장료
3 ~ 7    미취학  1000
8 ~ 13   초등    2000
14 ~ 19  중,고등 2500
20 ~ 100 일반인  3000
"""

print("♣ 놀이공원 입장료 계산 ♣")
age = int(input("나이를 입력하세요: "))   #나이

if age >= 3 and age < 8:
    print("미취학아동입니다.")
    admission_fee = 1000 #입장료 
elif age >= 8 and age < 14:
    print("초등학생 입니다.")
    admission_fee = 2000
elif age >= 14 and age < 20:
    print("중.고등학생 입니다.")
    admission_fee = 2500
else:
    print("일반인 입니다.")
    admission_fee = 3000

print("입장료는 " + str(admission_fee) + "원 입니다.")
print(f'입장료는 {admission_fee}원 입니다.')

# 학점 계산
'''
    90 ~ 100   A
    80 ~ 89    B
    70 ~ 79    C
    70 미만    D
'''
score = 87

if score >= 90 and score <= 100:
    grade = 'A'
elif score >= 80 and score < 90:
    grade = 'B'
elif score >= 70 and score < 80:
    grade = 'C'
else:
    grade = 'D'

print(f"점수는 {score}점이고, 학점은 {grade}")


















    
