# 위젯(컴포넌트)
from tkinter import *

# 컴퓨터 용어 사전
'''
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
'''

# 체크 버튼 동작
import tkinter as tk

def btn_check():
    if ck_val.get() == True:
        print("체크")
    else:
        print("해제")

window = tk.Tk()
window.title("체크 버튼 생성")
window.geometry("300x100")

# 체크 속성(체크/해제)
ck_val = tk.BooleanVar() #True/False
ck_val.set(False) #기본값

# 체크 버튼
ck_btn = tk.Checkbutton(text="체크 버튼", font=("System", 14), 
                variable=ck_val, command=btn_check)
ck_btn.pack()

window.mainloop()

"""
class App:
    def __init__(self, master):
        frame = Frame(master)   
        frame.pack()
        Label(frame, text="제목").grid(row=0, column=0)
        Entry(frame, width=20).grid(row=0, column=1)
        Button(frame, text="확인").grid(row=0, column=2)
        
        # 체크버튼
        check_var = StringVar()
        check = Checkbutton(frame, text="체크 버튼", variable=check_var,
                        onvalue='Y', offvalue='N')
        check.grid(row=1, column=0)
        
        # 리스트 목록
        listbox = Listbox(frame, height=3, selectmode=SINGLE)
        for item in ['red', 'green', 'blue', 'yellow']:
            listbox.insert(END, item)
        listbox.grid(row=1, column=1)  
        # radio 버튼
        radio_frame = Frame(frame)
        radio_selection = StringVar()
        b1 = Radiobutton(radio_frame, text="left",
                    variable=radio_selection, value='L')
        b1.pack(side=LEFT)
        b2 = Radiobutton(radio_frame, text="right",
                    variable=radio_selection, value='R')
        b2.pack(side=LEFT)
        radio_frame.grid(row=1, column=2)
        
root = Tk()
root.title("UI 구성")
app = App(root)  #App 클래스의 객체 생성

root.mainloop()
"""
