# with ~ as 구문
import random

# 파일 쓰기 - 파일 위치 : 상대 경로
with open("word.txt", "w") as f:
    words = ["sky", "earth", "moon", "flower", "tree",
            "strawberry", "grape", "garlic", "onion", "potato"]
    
    for word in words:
        f.write(word + ' ')

# 파일 읽기
with open("word.txt", "r") as f:
    words = f.read().split()
    word = random.choice(words)
    print(word)

# 영어 타자 게임
'''
import random
import time

try:
    # 파일 읽기
    with open("word.txt", "r") as f:
        word = f.read().split()
        #print(word)
    
    n = 1 #문제 번호

    print("[타자 게임] 준비되면 엔터")
    input()

    start = time.time()
    while n < 11:
        print("\n문제", n)
        q = random.choice(word)
        print(q)  #문제 출제
         
        u = input() #사용자 입력
        if q == u:
            print("통과!")
            n += 1
        else:
            print("오타! 다시 도전!")

    end = time.time()
    et = end - start
    print(f"게임 소요 시간: {et:.2f}")

except FileNotFoundError:
    print("파일을 찾을 수 업습니다.")
'''

