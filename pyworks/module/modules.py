"""
# 로또 복권 추첨
import random

lotto = []

for i in range(6):
    n = random.randint(1, 45)
    if n not in lotto:
        lotto.append(n)
'''
  중복될 경우 5개만 저장됨
  [44, 7, 10, 8, 31]
'''
print(lotto)

while len(lotto) < 6:
    n = random.randint(1, 45)
    if n not in lotto:
        lotto.append(n)
# 6개가 될때까지 저장됨
print(lotto)

# 영어 타자 게임
import random
import time

word = ["sky", "earth", "sun", "moon", "flower",
    "tree", "mountain", "strawberry", "garlic", "potato"]
n = 1 #문제 번호

print("[타자 게임] 준비되면 엔터!")
input()

start = time.time()  #시작 시잔
while n < 11:
    print("\n문제", n)
    question = random.choice(word)
    print(question)

    you = input()  # 사용자 입력
    if question == you:
        print("통과!")
        n += 1  #다음 문제
    else:
        print("오타! 다시 도전!")

end = time.time()    #종료 시간
et = end - start
print(f"타자 시간: {et:.2f}초")
"""

# 운영체제 제어
import os

os.chdir('c:/pyworks')  # pyworks 디렉터리로 이동
dir = os.popen('dir')   # dir 명령 실행
print(dir.read())       # dir 결과 출력

# 모듈 가져오는 방법
from datetime import datetime, date

# 현재 날짜와 시간 
now = datetime.now()
print(now)

# 오늘 날짜 출력
today = date.today()
print(today)

'''
import datetime

# 현재 날짜와 시간 출력
now = datetime.datetime.now()
print(now)

# 특정한 날짜 설정
the_day = datetime.date(2025, 6, 3)
print(the_day)
'''
