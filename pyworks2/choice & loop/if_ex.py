# 조건문
# 나이가 15세 이상이면 "관람가" 출력
"""
age = input("나이를 입력하세요: ")
age = int(age) #int("문자")문자를 정수로 변환함 


if age >= 15: #조건식 True이면 실행됨 
    print("관람가")  #들여쓰기(indent)
print("나이는 " + str(age) + "세 입니다.")

# 나이가 15세 이상이면 "관람가", 아니면 "관람불가" 출력
if age >= 15:
    print("관람가")
else:
    print("관람불가")
print("나이는 " + str(age) + "세 입니다.")
"""

# 어떤수를 입력받아서 짝수인지 홀수인지 판별하는 프로그램
'''
# 4 % 2 == 0, 5 % 2 == 1 # 2의 배수 

#num=12 -> num이라는 변수에 12를 저장(기억)

num = input("숫자를 입력하세요: ")
num = int(num) #입력된 문자를 숫자로 변환

if num > 10:
    if num % 2 == 0:
        print(str(num) + "는 10보다 큰 짝수입니다")
    else:
        print(str(num) + "는 10보다 큰 홀수입니다.")
else:
    if num % 2 == 0:
        print(str(num) + "는 10보다 작은 짝수입니다")
    else:
        print(str(num) + "는 10보다 작은 홀수입니다.")
'''

"""
 - 입장객수와 좌석 열수를 입력받아 줄 수 계산하기
 - 좌석열(column), 줄(행)수(row)
 - 입장객수가 좌석열에 나누어떨어지는 경우,
   나누어 떨어지지 않는 경우
   예) 20 / 5 => 4줄,   21 / 5 => 5(줄)

customer = int(input("입장객수 입력: ")) #입력된 문자를 정수로 변환
column = int(input("좌석열 수 입력: "))

if customer % column == 0:
    #row = int(customer / column) #실수를 정수로 변환
    row = customer // column
else: # customer % column != 0:
    row = int(customer / column) + 1

print(str(row) + "개의 줄이 필요합니다.")
print(f"{row}개의 줄이 필요합니다.")
"""

# 윤년을 판정하는 프로그램
year = int(input("연도 입력: "))

if ((year % 4 == 0 and year % 100 != 0)) or (year % 400 == 0):
    print("윤년")
else:
    print("윤년 아님")




























