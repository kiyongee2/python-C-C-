# 반복 조건문
# 1 ~ 10 까지 출력
"""
n = 1
while True:
    if n > 10:
        break  #n = 11일때 빠져나옴 
    print(n)
    n += 1
"""
# 1 ~ 10 까지 합계 출력
'''
n = 1
hap = 0  #합계 변수 
while True:
    if n > 10:
        break
    hap += n #hap = hap + n
    print("n =", n, ", hap=", hap)
    n += 1

print("합계 : ", hap)
'''

# 키 반복 
'''
 'y'키 입력 -> "계속 반복"
 'n'키 입력 -> "반복 중단"
  y/n 이외의 키 -> "키를 잘못눌렀습니다."
'''

"""
while True:
    answer = input("반복을 계속 할까요?(y or n 입력): ")
    if answer == 'y' or answer == 'Y':
        print("계속 반복")
    elif answer == 'n' or answer == 'N':
        print("반복 중단")
        break
    else:
        print("키를 잘못눌렀습니다. 다시 입력하세요")
        
print("프로그램 종료!")
"""


































