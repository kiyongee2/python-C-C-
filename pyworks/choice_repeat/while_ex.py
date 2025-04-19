# 반복문
"""
초기값
while 조건식:
    실행문
    증감값 

"""
"""
# "안녕~"을 10번 반복하기
n = 1 # 초기값
while n <= 10:
    print("안녕~", n)
    n += 1 #증가값
print()

n = 10 # 초기값
while n > 0:
    print("안녕~", n)
    n -= 1 #감소값

# 1부터 10까지 더하기
n = 1
total = 0  #합계 
while n <= 10:
    total += n;
    print("n =", n, ", total =", total)
    n += 1
print("합계 : ", total)
"""

# 반복 조건문(While True: if break)
'''
n = 1
while True:
    if n > 10:
        break
    print(n, end=" ")
    n += 1
print()

n = 1
total = 0
while True:
    if n > 10:
        break
    total += n
    n += 1
print("합계 : ", total)
'''























