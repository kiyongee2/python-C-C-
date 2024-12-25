# 조건문
"""
if 조건식:
    실행문

조건식의 결과가 True일때만 실행됨
"""

age = 16
if age >= 15:
    print("관람가")
print("나이는 ", age, "세입니다.")


"""
if 조건식:
    실행문1
else:
    실행문2

조건식의 결과가 True일때만 실행문1, False일때 실행문2 처리
"""
if age >= 15:
    print("관람가")
else:
    print("관람불가")
# print("나이는 ", age, "세입니다.")
print(f'나이는 {age}세입니다.')


"""
if 조건식A:
    실행문1
elif 조건식B:
    실행문2
else:
    실행문3

조건식A의 결과가 True일때 실행문1,
조건식B의 결과가 True일때 실행문2,
조건식A와 B의 결과가 모두 False일때 실행문3 처리 
"""

score = 85
if score >= 90 and score <=100:
    print('A학점')
elif score >= 80:
    print('B학점')
elif score >= 70:
    print('C학점')
else:
    print('D학점')

# 논리연산자 - and, or, not
# and - 두 조건이 모두 참인 경우만 참임,
# or - 두 조건중 하나만 참이어도 참임.
# not - 조건이 참이면 거짓, 거짓이면 참임 
num1 = 10
num2 = 20

print((num1 < num2) and (num1 == num2))
print((num1 < num2) or (num1 == num2))
print(not(num1 != num2))

# 실습 문제
# 윤년 판정하기 
























