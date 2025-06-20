import random
import time
import os

word = ["sky", "earth", "sun", "moon", "flower",
    "tree", "mountain", "strawberry", "garlic", "potato"]
n = 1 #문제 번호

print("[타자 게임] 준비되면 엔터!")
input()

start = time.time()  #시작 시잔
while n < 11:
    print("\n문제", n)
    question = random.choice(word)
    print(question)

    you = input()  # 사용자 입력
    if question == you:
        print("통과!")
        n += 1  #다음 문제
    else:
        print("오타! 다시 도전!")

end = time.time()    #종료 시간
et = end - start
print(f"타자 시간: {et:.2f}초")

os.system("pause") # exe파일 - 콘솔창 유지