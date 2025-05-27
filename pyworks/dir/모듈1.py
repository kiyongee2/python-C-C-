"""
# 내장 모듈
import math

# 올림
print(math.ceil(2.54))

# 반올림 - math 모듈이 아님
print(round(2.54))

# 내림(버림)
print(math.floor(2.54))

# 제곱근 - 실수로 반환
print(math.sqrt(2))
print(math.sqrt(25))

# 원주율
print(math.pi)

# 원의 넓이 = math.pi * 반지름 * 반지름
radius = 4
area = math.pi * radius * radius
print(f"원의 넓이: {area:.2f}")
"""
# datetime 모듈
import datetime

now = datetime.datetime.today()
#now = datetime.date.today() #날짜만 출력

print(now)

print(f'{now.year}년')
print(f'{now.month}월')
print(f'{now.day}일')
print(f'{now.hour}시')
print(f'{now.minute}분')
print(f'{now.second}초')

# 날짜 표시
print(f"{now.year}년 {now.month}월 {now.day}일")

# 시간 표시
print(f"{now.hour}시 {now.minute}분 {now.second}초")

# 100세가 되는 해의 연도 계산하기
# age = int(input("나이 입력 : "))

# result = now.year + (100 - age)
# print(f'100세 되는 해는 {result}년 입니다.')

print("지금까지 몇 일?")
#특정한 날짜 설정
the_day = datetime.date(2025, 4, 19) 
# print(the_day)
today = datetime.date.today()

passedtime = today - the_day
print(f'개강 이후 : {passedtime.days}일 지났습니다.')

print("대통령 선거일까지  DDay?")
the_day = datetime.date(2025, 6, 3)
# print(the_day)

today = datetime.date.today()
# print(today)

remain_day = the_day - today
print(f"대통령 선거일까지 {remain_day.days}일 남았습니다.")

# calendar 모듈
import calendar

# calendar.prcal(2025) #전체 출력

calendar.prmonth(2025, 5) #5월 출력

idx = calendar.weekday(2025, 5, 18) # 요일
print(idx)

days = ['월', '화', '수', '목', '금', '토', '일']
print(days[idx])

# weekday = datetime.date(2025, 5, 18).weekday()
# print(weekday)
# print(days[weekday])

def get_weekday(yyyy, mm, dd):
    days = ['월', '화', '수', '목', '금', '토', '일']
    idx = datetime.date(yyyy, mm, dd).weekday()
    print("{}년 {}월 {}일 {}요일".format(yyyy, mm, dd, days[idx]))

get_weekday(2023, 4, 5)

"""
# time 모듈
import time

print(time.time())
print(time.localtime())
print(time.ctime())

# 년과 일로 환산
year = round(time.time()/(365*24*60*60))
day = round(time.time()/(24*60*60))
print(f'{year}년')
print(f'{day}일')

# 수행 시간 측정
start = time.time() # 시작 시간

# 1초 간격으로 1 ~ 10 출력
for i in range(1, 11):
    print(i)
    time.sleep(1)  # 1 - 1초
    
end = time.time() # 종료 시간
print(f'수행시간 : {end-start:.3f}초')

# 속으로 20초를 세어 맞히는 프로그램

input("엔터를 누르고 20초를 셉니다.")
start = time.time()

input("20초 후에 다시 엔터를 누릅니다.")
end = time.time()

et = end - start
print(f'실제 시간 : {et:.2f}초')
"""
# random 모듈
'''
import random
# 0.0 ~ 1.0 사이의 난수 값
print(random.random())

# 1 ~ 10 사위의 무작위 수
print(random.randint(1, 10))

# 주사위 눈(1 ~ 6)
print(random.randint(1, 6))

# 리스트에서 무작위 선택
fruits = ["딸기", "수박", "참외", "사과"]
print(random.choice(fruits))

# 동전 던지기
coin = random.randint(0, 1)
print(coin)
if coin == 0:
    print("앞면")
else:
    print("뒷면")

# 주사위 10번 던지기
for i in range(10):
    dice = random.randint(1, 6)
    print(dice)

# up and down 게임
import random

# version 1
com = random.randint(1, 30) #컴퓨터의 난수
# print(com)

while True:
    x = input("맞혀보세요(입력: 1 ~ 30): ")
    guess = int(x) # 사용자가 추측한 수

    if guess < 0 or guess > 30:
        print("범위를 초과했어요. 다시 입력하세요")
    elif guess == com:
        print("정답!")
        break
    elif guess > com:
        print("너무 커요")
    else:
        print("너무 작아요")
'''
'''
# version 2
com = random.randint(1, 100)
# print(com)
min_v = 1
max_v = 100
for i in range(10):
    try:
        guess = int(input(f'맞혀보세요([{i+1}회] {min_v} ~ {max_v})? '))
        if guess == com:
            print("정답!")
            break
        elif guess > com:
            print("너무 커요")
            max_v = guess
        else:
            print("너무 작아요")
            min_v = guess
    except ValueError:
        print("숫자로 입력해 주세요.")

print(f'정답 : {guess}')
print(f'점수 : {(10 - i) * 10}점')
'''