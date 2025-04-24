
# 학점 계산 프로그램 
score = int(input("점수를 입력하세요: "))

if score >= 90 and score <=100:
    grade = 'A'
elif score >= 80:
    grade = 'B'
elif score >= 70:
    grade = 'C'
elif score >= 60:
    grade = 'D'
else:
    grade = 'F'
print(f"학점은 {grade}입니다.")


# 놀이 공원 입장료
'''
print("♣ 놀이 공원 입장료 계산 ♣")

age = int(input("나이 입력 : "))
admission_fee = 0  #입장료

if age < 8:
    print("미취학 아동입니다.")
    admission_fee = 1000
elif age >= 8 and age < 14:
    print("초등 학생입니다.")
    admission_fee = 2000
elif age >= 14 and age < 20:
    print("중,고등 학생입니다.")
    admission_fee = 2500
else:
    print("일반인입니다.")
    admission_fee = 3000

#print("입장료는 " + str(admission_fee) + "원입니다.")
print(f"입장료는 {admission_fee}원 입니다.")
'''

# 오류 처리
'''
if age < 0 or age > 100:
    print("범위를 초과했습니다. 다시 입력해주세요.")
else:
    if age < 8:
        print("미취학 아동입니다.")
        admission_fee = 1000
    elif age >= 8 and age < 14:
        print("초등 학생입니다.")
        admission_fee = 2000
    elif age >= 14 and age < 20:
        print("중,고등 학생입니다.")
        admission_fee = 2500
    else:
        print("일반인입니다.")
        admission_fee = 3000

    #print("입장료는 " + str(admission_fee) + "원입니다.")
    print(f"입장료는 {admission_fee}원 입니다.")
'''
