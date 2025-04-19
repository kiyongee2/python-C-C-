'''
for ~ in range(시작값, 종료값, 증감값):
    실행문

'''
print(range(1, 10, 1))
print(list(range(1, 10, 1)))
print(list(range(1, 11)))


# 리스트 - 여러 개의 연속적인 값을 저장할 때 사용하는 자료구조
# 리스트 이름 = [값1, 값2, 값3...]
seasons = ['봄', '여름', '가을', '겨울']
print(seasons)
print(type(seasons))
print(seasons[0])
print(seasons[3])
print(seasons[-1])

# 1부터 10까지 출력하기
for i in range(1, 11):
    print(i)

# 1부터 10까지 더하기
sum_val = 0
for i in range(1, 11):
    print("i =", i, ", sum = ", sum_val)
    sum_val += i

print("sum =", sum_val)

'''
for ~ in list:
    실행문

'''
for season in seasons:
    print(season)
    

# 구구단
'''
dan = 4
for i in range(1, 10):
    print(f'{dan} x {i} = {dan * i}')
'''

# 이중 for문
'''
for i in range(0, 5):
    for j in range(0, 5):
        print('*', end='')
    print()

for i in range(0, 5):
    for j in range(0, i+1):
        print('*', end='')
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
'''
# 실습문제
# 구구단 가로로 출력 
