# 사용자 정의 함수
#챗봇(chatbot) 프로그램
# 단어가 포함되어 있으면 문장을 완성해주는 프로그램
"""
def my_chatbot():
    print("안녕하세요! 저는 간단한 챗봇입니다.(종료: exit)")
    while True:
        user_input = input("사용자: ")

        if user_input == "exit":
            print("챗봇: 대화를 종료합니다. 안녕히 가세요.")
            break
        else:
            if "안녕" in user_input:
                print("챗봇: 안녕하세요! 방가와요!")
            elif "이름" in user_input:
                print("챗봇: 저는 Python 챗봇입니다.")
            elif "날씨" in user_input:
                print("챗봇: 날씨앱을 이용해 주세요")
            else:
                print("챗봇: 죄송해요. 잘 이해하지 못했어요")

print("*** 간단한 규칙 기반 챗봇 ***")
my_chatbot()  #호출
"""

# 매개 변수로 리스트를 전달
# 리스트의 평균을 계산하는 함수
def calc(a):  # a = [1, 2, 3, 4]
    total = 0
    for i in a:
        total += i
    # 평균 = 합계 / 개수
    return total / len(a)

v = [1, 2, 3, 4]
result = calc(v)

print("평균:", result)

# 리스트를 매개변수로 새로운 변수 만들기
# 함수 정의
def times(a):
    a2 = []  #복사할 빈 리스트 생성
    for i in a:
        a2.append(4 * i)
    return a2

# 리스트를 4의 배수로 저장
arr = [1, 2, 3, 4]
# 함수 호출
arr2 = times(arr)
print(arr2)

# 1 ~ n까지 합계 계산하기
'''
   - 계산 복잡도 비교
   sum_n(n) - 덧셈 n번 -> O(n) : Big O 표기
   sum_n2(n) - 덧셈, 곱셈, 나눗셈(총 3번) -> O(1)
'''
def sum_n(n):
    total = 0
    for i in range(1, n+1):
        total = total + i
    return total

def sum_n2(n):
    total = (n * (n + 1)) / 2
    return int(total)

# 호출
print("합계1:", sum_n(10)) #55
print("합계2:", sum_n2(10)) #55

# 내장 함수 - sum()
v = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print("합계3:", sum(v)) #55


