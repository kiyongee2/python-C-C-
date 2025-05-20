# lotto 복권
import random
lotto = []
"""
# 중복된 경우 5개만 저장됨
for i in range(6):
    n = random.randint(1, 45)
    if n not in lotto:
        lotto.append(n)
"""
while len(lotto) < 6:
    print(len(lotto))
    n = random.randint(1, 45)
    if n not in lotto:
        lotto.append(n)

print(lotto)

# random 모듈
"""
days = ['월', '화', '수', '목', '금', '토', '일']
print(random.choice(days))

print(random.randint(1, 10))

dice = random.randint(1, 6)
print(dice)

for x in range(1, 11):
    dice = random.randint(1, 6)
    print(dice, end=' ')

for i in range(10):
    dice1 = random.randint(1, 6)
    dice2 = random.randint(1, 6)
    total = dice1 + dice2
    print(total)
    if total == 7:
        print("Seven Thrown!!")
    if total == 11:
        print("Eleven Thrown!!")
    if dice1 == dice2:
        print("Double Thrown!!")
"""

# 모듈(클래스) 사용하기
"""
from my_module import Student

# 인스턴스 2개 생성
s1 = Student("이순신", 1)
print(s1)
s1.learn()

s2 = Student("권율", 3)
print(s2)
s2.learn()
"""

# 객체 배열(리스트) 생성
"""
student = [
    Student("김하나", 1),
    Student("이둘", 2),
    Student("박셋", 3)
]

print("***** 학생 명단 *****")
for s in student:
    print(s)
"""

# mylib 패키지 사용하기
"""
from mylib import food

print('이름 : ', food.name)
food.cook()
"""

# from mylib.food import cook, eat
# cook()
# eat()