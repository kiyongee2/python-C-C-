# 파일에 구구단 쓰기

with open("gugudan.txt", 'w') as f:
    # 한 개의 단 출력
    """
    dan = 5
    for i in range(1, 10):
        f.write(f"{dan} x {i} = {dan * i}\n")
    """
    
    # 구구단 전체
    for i in range(2, 10):
        for j in range(1, 10):
            gugudan = f"{i} x {j} = {i * j}\n"
            f.write(gugudan)
        f.write("\n") #단별 줄바꿈

# 구구단 파일 읽기
with open("gugudan.txt", "r") as f:
    gugudan = f.read()
    print(gugudan)
