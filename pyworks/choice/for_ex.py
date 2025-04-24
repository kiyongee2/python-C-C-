'''
for ~ in range(시작값, 종료값, 증감값):
    실행문

print(range(1, 10, 1))
print(list(range(1, 10, 1)))
print(list(range(1, 10)))
print(list(range(10)))
'''

# 1부터 10까지 출력하기
'''
for i in range(1, 11):
    print(i, end = ' ')
print()
'''

# 1부터 10까지 홀수 출력하기
"""
for i in range(1, 11, 2):
    print(i)

for i in range(1, 11, 1):
    if i % 2 == 1:
        print(i)

# 1부터 10까지 더하기
hap = 0
for i in range(1, 11):
    hap += i
    print("i =", i, ", hap = ", hap)
print("합계 :", hap)

# 1부터 10까지 짝수의 합계 
hap = 0
for i in range(1, 11):
    if i % 2 == 0:
        hap += i
    print("i =", i, ", hap = ", hap)
print("합계 :", hap)
"""

# 구구단
'''
dan = 4
for i in range(1, 10):
    print(f'{dan} x {i} = {dan * i}')
'''

#continue 문
'''
# 1 ~ 10 중 5, 7을 제외하고 출력 
for i in range(1, 11):
    if i == 5 or i == 7:
        continue
    print(i)

# 1 ~ 10 중 홀수의 합계
hap = 0
for i in range(1, 11):
    if i % 2 == 0:
        continue
    hap += i;
print("홀수의 합 :", hap)
'''

# 이중 for문
for i in range(1, 6):
    for j in range(1, 6):
        print('가', end='')
    print()
    
# 구구단
'''
for i in range(2, 10):
    print('[', i, '단]')
    for j in range(1, 10):
        print(f"{i} x {j} = {i * j}")
    print()

for i in range(2, 10):
    print('[', i, '단]')
    for j in range(1, 10):
        if i < j:
            break
        print(f"{i} x {j} = {i * j}")
    print()

'''
# 중첩 for
"""
for i in range(1, 6):
    for j in range(1, i+1):
        print('$', end='')
    print()
print()

for i in range(1, 6):
    for j in range(1, 7-i):
        print('$', end='')
    print()

for i in range(0, 5):
    for j in range(i, 5-1):
        print(' ', end='')
    for j in range(0, i+1):
        print('*', end='')
    print()

for i in range(0, 5):
    for j in range(1, 6):
        print(5*i+j, end=' ')
    print()
    
print()

for i in range(0, 5):
    for j in range(1, 6):
        num = 5*i+j
        if num > 23:
            break
        print(5*i+j, end=' ')
    print()
"""
# 자리배치도
print("**** 자리배ㅣ도 ****")



