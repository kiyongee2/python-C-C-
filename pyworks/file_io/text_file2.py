# 입력받아 쓰기

'''
# 텍스트 파일 한글 깨짐 방지 - encoding='utf-8'
with open("input.txt", 'a', encoding='utf-8') as f:
    text = input("저장할 내용을 입력해 주세요: ")
    f.write(text)
    f.write('\n')

# vs code 텍스트 파일 한글 깨짐 - encoding='utf-8'
with open('score.txt', 'a', encoding='utf-8') as f:
    name = input("이름 입력: ")
    kor = input("국어 점수: ")
    math = input("수학 점수: ")

    f.write(name + ' ')
    f.write(kor + ' ')
    f.write(math + '\n')

try:
    with open('scorelist.txt', 'a', encoding='utf-8') as f:
        while True:
            key = input("성적을 저장할까요?(y/n): ")
            if key == 'n' or key == 'N':
                break
            elif key == 'y' or key == 'Y':
                name = input("이름 입력: ")
                kor = input("국어 점수: ")
                math = input("수학 점수: ")

                f.write(name + ' ')
                f.write(kor + ' ')
                f.write(math + '\n')
            else:
                print("잘못된 입력입니다. 다시 입력하세요")
        print("입력을 종료합니다.")
except FileNotFoundError:
    print("파일을 찾을 수 없습니다.")
'''

import pickle

try:
    with open("object.dat", "wb") as f:
        lis = ['강아지', '고양이', '닭']
        dic = {1: '강아지', 2: '고양이', 3: '닭'}
        pickle.dump(lis, f)
        pickle.dump(dic, f)
except FileNotFoundError:
    print("파일을 찾을 수 없습니다.")


try:
    with open("object.dat", "rb") as f:
        lis = pickle.load(f)
        dic = pickle.load(f)
        print(lis)
        print(dic)
except FileNotFoundError:
    print("파일을 찾을 수 없습니다.")

    