# 반복문(for)
# 1부터 10까지 출력
'''
n = 1  #초기값 
while n <= 10: #조건식(종료값)
    print(n)
    n += 1 #증가값
'''

# for문 사용 : for 반복변수 in range(초기값, 종료값, 증감값):
# range(초기값, 종료값, 증감값), 출력시 : 종료값 = 종료값-1
# range()의 마지막 증감값이 1일때는 생략 가능함
'''
print(range(1, 10, 1))
#print(range(1, 10, 2))
print(list(range(1, 11)))
print(list(range(1, 11, 2)))
'''

# 1부터 10까지 출력 및 합계 - for문 사용
'''
hap = 0 #합계를 0으로 초기화함(저장)
for i in range(1, 11):
    hap += i #hap = hap + i
    print("i =", i, ", hap =", hap)
print()
print("합계 :", hap)

# 1~ 10중 짝수의 합계 
hap = 0 
for i in range(1, 11):
    if i % 2 == 0: #짝수(2의 배수)인 경우 
        hap += i   #합계 계산 
        print("i =", i, ", hap =", hap)
print()
print("합계 :", hap)

hap = 0 
for i in range(2, 11, 2):
    hap += i   #합계 계산
    print("i =", i, ", hap =", hap)
print()
print("합계 :", hap)
'''

# 3의 배수의 출력 및 개수
count = 0
for i in range(1, 21):
    if i % 3 == 0:
        count += 1
        print(i, end=' ')

print(f'\n3의 배수의 개수: {count}')

# 구구단 출력하기 
'''
 2 x 1 = 2
 2 x 2 = 4
 2 x 3 = 6
 ...
 2 x 8 = 16
 2 x 9 = 18
 
'''
dan = int(input("단을 입력하세요: "))  #단을 저장하는 변수 
for i in range(1, 10):
    #print(dan, "x", i, "=", (dan * i))
    print(f"{dan} x {i} = {dan * i}")































