# 파일 쓰기
'''
# 파일 열기
f = open("C:/pyfile/file.txt", "w")

# 파일 쓰기
f.write("하늘\n")
f.write("cloud\n")
f.write("學生\n")
f.write("30\n")
f.write("3.14\n")

# 숫자 쓰기 불가
# f.write(200)  

# 변수를 사용하여 쓰기
num = 200 * 3
f.write(f"{num}\n")

# 파일 종료
f.close()

# 파일 읽기
# 파일 열기
f = open("C:/pyfile/file.txt", "r")

# 파일 읽기
data = f.read()
print(data)

# 파일 닫기
f.close()

# 파일에 추가 쓰기
f = open("C:/pyfile/file.txt", "a")

f.write("Good Luck!\n")
f.write("행운을 빌어요!\n")

f.close()
'''

# 리스트를 파일에 쓰기
seasons = ["봄", "여름", "가을", "겨울"]

with open("season.txt", "w", encoding='utf-8') as f1:
    for season in seasons:
        f1.write(season)
        f1.write("\n")

# 파일에서 리스트 읽기
with open("season.txt", "r", encoding='utf-8') as f2:
    data = f2.read()
    print(data)
    
# 장바구니 리스트 쓰기
try:
    f = open("cartlist.txt", "w")

    cartlist = ["계란", "우유", "바나나", "라면"]

    for cart in cartlist:
        f.write(cart + " ")

    f.close()
except FileNotFoundError:
    print("파일을 찾을 수 없습니다.")

# 리스트형 자료 랜덤 출력
import random

try:
    f = open("cartlist.txt", "r")

    # cartlist = f.read()
    # print(cartlist)

    cartlist = f.read().split()
    print(cartlist)
    
    cart = random.choice(cartlist)
    print("품목: ", cart)

    f.close()
except FileNotFoundError:
    print("파일을 찾을 수 없습니다.")
