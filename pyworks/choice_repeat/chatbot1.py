
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
        print("챗봇: 오늘의 날씨는 화창합니다.")

    else:
        print("챗봇: 죄송해요, 잘 이해하지 못했어요요.")