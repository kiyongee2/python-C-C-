from tkinter import *

# 확인을 클릭하여 콘솔에 메시지 출력하기
# 확인 버튼을 클릭하여 레이블에 메시지 출력하기
'''
def click():
    # print("안녕~ 파이썬!")
    demo.config(text="안녕~ 파이썬!")

root = Tk()
root.title("첫 윈도우")
root.geometry("250x100+200+100")

# 라벨과 버튼
frame = Frame(root)
frame.pack()

Label(frame, text="Hello Python!!").grid(row=0, column=0)
Button(frame, text="확인", command=click).grid(row=1, column=0)

demo = Label(frame)
demo.grid(row=2, column=0)
'''

# 이름을 입력받아 화면에 출력하기
'''
def click():  
    text = entry.get()
    output.delete(0.0, END)
    output.insert(END, text)
    
root = Tk()
root.title("입력과 출력")
root.geometry("200x100+200+100")

Label(root, text="이름: ").grid(row=0, column=0)
entry = Entry(root, width=15)
entry.grid(row=0, column=1)

Button(root, text="확인", command=click).grid(row=1, columnspan=2)
output = Text(root, width=20, height=5)
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
        word = entry.get()
        definition = dic[word]
        output.delete(0.0, END)
        output.insert(END, definition)
    except:
        output.insert(END, "단어의 정의를 찾을 수 없습니다.")

root = Tk()
root.title("컴퓨터 용어 사전")

lbl = Label(root, text="검색할 단어를 입력하세요").grid(row=0, column=0, sticky=W)
# 입력 상자
entry = Entry(root, width=20, bg="skyblue")
entry.grid(row=1, column=0, sticky=W)

Button(root, command=select, text="제출").grid(row=2, column=0, sticky=W)
Label(root, text="정의").grid(row=3, column=0, sticky=W)
# 출력상자
output = Text(root, width=60, height=10, bg="skyblue")
output.grid(row=4, column=0, sticky=W)

root.mainloop()

