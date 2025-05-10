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

# 윤년(2월이 29일인 해) 판정하기
"""
- 4의 배수(4년에 한 번 온다)
- 100의 배수는 아니다(100년 단위는 윤년이 아님)
- 400의 배수이다.(400년 단위는 윤년임)

-> 4의 배수이고, 100의 배수는 아니나(또는), 400의 배수이다.

#year = 1900
year = int(input("연도를 입력하세요: "))

if ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0):
    print(f"{year}년은 윤년입니다.")
else:
    print(f"{year}년은 윤년이 아닙니다.")
"""






















