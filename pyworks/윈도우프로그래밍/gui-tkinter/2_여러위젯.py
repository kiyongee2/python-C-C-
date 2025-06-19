# 위젯(컴포넌트)
from tkinter import *
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

app = App(root)
root.mainloop()
"""

# 단위 변환기
"""
class App:
    def __init__(self, root):
        frame = Frame(root)
        frame.pack()
        
        Label(frame, text="byte MB").grid(row=0, column=0)
        Button(frame, text="변환", command=self.convert).grid(row=1, column=0)
        
    def convert(self):
        print("아직 구현안됨")
"""

from class_lib.converter import Converter
  
class App:
    def __init__(self, root):
        self.con = Converter('MB', 'KB', 1024)
        frame = Frame(root)
        frame.pack()
        
        Label(frame, text="byte MB").grid(row=0, column=0)
        self.mb = IntVar()
        Entry(frame, textvariable=self.mb).grid(row=0, column=1)
        
        Label(frame, text="byte KB").grid(row=1, column=0)
        self.kb = IntVar()
        Label(frame, textvariable=self.kb).grid(row=1, column=1)
        
        Button(frame, text="변환", command=self.convert).grid(row=2, columnspan=2)
        
    def convert(self):
        mb = self.mb.get()
        conv_kb = self.con.convert(mb)
        conv_kb = f'{self.con.convert(mb):,}'
        self.kb.set(conv_kb)
    
root = Tk()
root.title("단위 변환기")
root.geometry("250x80+200+200")
app = App(root)

root.mainloop()