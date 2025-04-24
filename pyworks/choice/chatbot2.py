# 딕셔너리 
responses = {
    "안녕": "안녕하세요!",
    "날씨": "오늘의 날씨는 맑고 화창해요!",
    "이름": "저는 Python 챗봇이에요!",
    "시간": "현재 시간을 확인하려면 시계를 봐 주세요"
}

while True:
    user_input = input("사용자: ")

    if user_input == "exit":
        print("챗봇: 대화를 종료합니다. 안녕히 가세요!")
        break

    response = None
    for key in responses:
        if key in user_input:
            response = responses[key]
            break

    if response:
        print(f"챗봇: {response}")
    else:
        print("챗봇: 죄송해요, 이해하지 못했어요.")
