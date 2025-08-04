# random 모듈
import random

"""
0.0 <= random.random() < 1
print(random.random())

# random.randint(a, b) : a ~b 까지 정수 범위

# 1 ~ 10중 무작위수(난수) 발생
print(random.randint(1, 10))  

# 주사위 눈
dice = random.randint(1, 6) # 1 ~ 6
# print(dice)

# 주사위 10번 던지기
for i in range(10): 
    dice = random.randint(1, 6)
    print(dice)

# 동전 던지기
coin = random.randint(1, 2)
print(coin)
if(coin == 1):
    print("앞면")
else:
    print("뒷면")
    
# 리스트에서 무작위 추출 - random.choice(리스트)
fruits =["딸기", "참외", "수박", "바나나"]
fruit = random.choice(fruits)
print(fruit)
"""

# 숫자 추측 게임
"""
com = random.randint(1, 30) #컴퓨터 난수
# print(com)

while True:
    x = input("맞혀보세요(입력: 1 ~ 30): ")
    guess = int(x)  # 유저가 추측한 수 
    #print(guess + 10)

    if guess < 1 or guess > 30:
        print("범위를 초과했어요. 다시 입력하세요")
    elif guess == com:
        print("정답!")
        break
    elif guess > com:
        print("너무 커요!")
    else:
        print("너무 작아요")

print("게임을 종료합니다.")
"""

# 로또 복권 추첨 - 45개의 숫자중에 6개 추출
lotto = []  # 당첨 번호를 저장할 리스트 생성
'''
for i in range(6):
    num = random.randint(1, 45) #당첨 번호
    if num not in lotto:  # 리스트에 추첨되지 않은 번호
        lotto.append(num) # 번호 추가
print(lotto)
# for문은 중복이 발생해도 카운트가 되므로 4, 5개가 될 수 있음
# [10, 30, 22, 12, 42] 만약 2번 인덱스에서 10이 중복되면 삭제됨
'''

# 반드시 6개 저장하고 반복 종료
lotto = [] 
while len(lotto) < 6:
    num = random.randint(1, 45) 
    if num not in lotto:  
        lotto.append(num)
print(lotto) #[40, 15, 25, 28, 18, 22]
print(sorted(lotto)) #[15, 18, 22, 25, 28, 40]

# [40, 15, 25, 28, 18, 22] 
# 만약 2번 인덱스에서 10이 중복되면 삭제되고 또 추첨

# 인덱싱과 슬라이싱
"""
print(word[0]) #sky
print(word[4]) #flower
print(word[-1]) #potato
print(word[-2]) #garlic
print(word[0:4]) #['sky', 'earth', 'sun', 'moon']
print(word[:4]) #['sky', 'earth', 'sun', 'moon']
print(word[4:]) #['flower', 'tree', 'mountain', 'strawberry', 'garlic', 'potato']

# 무작위로(랜덤하게) 단어 추출
str = random.choice(word)
print(str)
"""