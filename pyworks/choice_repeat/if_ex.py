# 조건문
# 나이가 15세 이상이면 "관람가" 출력
'''
age = 16
if age >= 15:
    print("관람가")
    
#print("나이는", age, "세입니다.")
print("나이는 " + str(age) + "세입니다")

# 나이가 15세 이상이면 "관람가", 아니면 "관람불가" 출력 
if age >= 15:
    print("관람가")
else:
    print("관람불가")
# print("나이는 ", age, "세입니다.")
print(f'나이는 {age}세입니다.')
'''

# 짝수/홀수 판정 프로그램
"""
num = int(input("수를 입력하세요: "))

if num > 10:
    if num % 2 == 0:
        print(str(num) + "는(은) 10보다 큰 짝수입니다.")
    else:
        print(str(num) + "는(은) 10보다 큰 홀수입니다.")
else:
    if num % 2 == 0:
        print(str(num) + "는(은) 10보다 작은 짝수입니다.")
    else:
        print(str(num) + "는(은) 10보다 작은 홀수입니다.")
"""

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

# 실습 문제
# 윤년 판정하기

# 좌석의 줄 수 계산
"""
customer = int(input("입장객 수: "))
column = int(input("좌석 열 수: "));
row = 0

if customer % column == 0:
    #row = customer // column
    row = int(customer / column)
else:
    row = int(customer / column) + 1

print(str(row) + "개의 줄이 필요합니다.")
"""

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

# 챗봇
"""
while True:
    user_input = input("사용자: ")

    if user_input == "exit":
        print("챗봇: 대화를 종료합니다. 안녕히 가세요!")
        break

    elif "안녕" in user_input:
        print("챗봇: 안녕하세요!. 방가와요")

    elif "이름" in user_input:
        print("챗봇: 저는 Python 챗봇입니다.")

    elif "날씨" in user_input:
        print("챗봇: 오늘의 날씨는 화창합니다.")

    else:
        print("챗봇: 죄송해요, 잘 이해하지 못했어요.")

"""
        






















