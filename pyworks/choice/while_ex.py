# 반복문
"""
초기값
while 조건식:
    실행문
    증감값 

a = 1
print(a)

a += 1
print(a)

a += 1
print(a)
"""
# "안녕~"을 10번 반복하기
"""
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
print("합계 : ", total, ", n =", n)
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
# 챗봇
animal = "cat dog horse"
print("cat" in animal)
print("dog" in animal)
print("horse" not in animal)

while True:
    user_input = input("사용자: ")

    if user_input == "exit":
        print("챗봇: 대화를 종료합니다. 안녕히 가세요!")
        break

    elif "안녕" in user_input:
        print("챗봇: 안녕하세요!. 방가와요")

    elif "이름" in user_input:
        print("챗봇: 저는 Python 챗봇입니다.")

    elif "날씨" in user_input:
        print("챗봇: 날씨는 날씨앱이나 검색 기능을 이용하세요")

    else:
        print("챗봇: 죄송해요, 잘 이해하지 못했어요.")























