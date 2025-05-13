# 간단한 규칙 기반 챗봇
def my_chatbot():
    print("안녕하세요! 저는 간단한 챗봇입니다.(종료: exit)")

    while True:
        user_input = input("사용자: ")

        if user_input == "exit":
            print("챗봇: 대화를 종료합니다. 안녕히 가세요!")
            break

        elif "안녕" in user_input:
            print("챗봇: 안녕하세요!. 반가워요")

        elif "이름" in user_input:
            print("챗봇: 저는 Python 챗봇입니다.")

        elif "기분" in user_input:
            print("챗봇: 저는 항상 기분이 좋아요.")

        else:
            print("챗봇: 죄송해요, 잘 이해하지 못했어요.")
        
# 실행
my_chatbot()
