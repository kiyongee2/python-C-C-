# 위젯(컴포넌트)
from tkinter import *

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

