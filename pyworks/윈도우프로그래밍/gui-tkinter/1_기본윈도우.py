from tkinter import *

# 확인을 클릭하여 콘솔에 메시지 출력하기
# 확인 버튼을 클릭하여 레이블에 메시지 출력하기
'''
def click():
    # print("안녕~ 파이썬!")
    demo.config(text="안녕~ 파이썬!")

root = Tk()
root.title("첫 윈도우")
root.geometry("250x100+200+100") #너비x높이+x좌표+y좌표

frame = Frame(root) #프레임 생성
frame.pack()        #가운데 배치

# 라벨과 버튼 클래스
Label(frame, text="Hello Python!!").grid(row=0, column=0) #1행 1열
Button(frame, text="확인", command=click) \
        .grid(row=1, column=0) #2행 1열

demo = Label(frame)
demo.grid(row=2, column=0)
'''

# 이름을 입력받아 화면에 출력하기
'''
def click():  
    text = entry.get()
    output.delete(0.0, END) 
    output.insert(END, text)

#delete(): 0-1행, 0-시작문자, END-끝까지 삭제
#insert(): 끝까지 삭제후 문자 삽입
    
root = Tk()
root.title("입력과 출력")
root.geometry("250x100+200+100")

frame = Frame(root) #프레임 생성
frame.pack()        #가운데 배치

Label(frame, text="이름: ").grid(row=0, column=0)
entry = Entry(frame, width=10) #Entry - 입력 상자 클래스
entry.grid(row=0, column=1)

Button(frame, text="확인", command=click).grid(row=1, columnspan=2)
output = Text(frame, width=20, height=3) #Text - 출력상자 클래스
output.grid(row=2, columnspan=2)
'''

# 컴퓨터 용어 사전
dic = {
    "이진수": "2진법으로 나타낸 숫자, 0과 1로 구성함",
    "버그": "프로그램이 적절하게 동작하는데 실패하거나 또는 전혀 동작하지 않는 \
원인을 제공하는 코드 조각",
    "함수": "특정한 기능을 수행하는 프로그램으로 재사용 가능한 코드",
    "알고리즘": "컴퓨터로 작업을 수행하기 위해 컴퓨터가 이해할 수 있도록 \
단계별로 설명해 놓은 것"
}

def select():
    try:
        word = entry.get()  #입력된 단어 가져오기
        definition = dic[word] #딕셔너리에서 검색
        output.delete(0.0, END) #초기화
        output.insert(END, definition) #단어 삽입
    except:
        output.delete(0.0, END) #초기화
        output.insert(END, "단어의 정의를 찾을 수 없습니다.")

root = Tk()
root.title("컴퓨터 용어 사전")

lbl = Label(root, text="검색할 단어를 입력하세요") \
        .grid(row=0, column=0, sticky=W) #sticky=W - 왼쪽에 고정

entry = Entry(root, width=20, bg="skyblue")
entry.grid(row=1, column=0, sticky=W)

Button(root, command=select, text="제출") \
        .grid(row=2, column=0, sticky=W)
Label(root, text="정의").grid(row=3, column=0, sticky=W)

output = Text(root, width=60, height=10, bg="skyblue")
output.grid(row=4, column=0, sticky=W)

root.mainloop()

