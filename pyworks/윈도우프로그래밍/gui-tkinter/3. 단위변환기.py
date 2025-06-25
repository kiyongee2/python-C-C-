from tkinter import *

# 단위 변환기
# 클래스로 구현(계산 미구현)
'''
class App:
    def __init__(self, root):
        frame = Frame(root)
        frame.pack()
        
        Label(frame, text="byte MB").grid(row=0, column=0)
        Button(frame, text="변환", command=self.convert) \
            .grid(row=1, column=0)
        
    def convert(self):
        print("아직 구현안됨")

root = Tk()
root.title("단위 변환기")
root.geometry("250x80+200+200")
app = App(root)

root.mainloop()   
'''    
        
# 클래스로 구현(계산 구현)
from class_lib.converter import Converter
from tkinter import messagebox
  
class App:
    def __init__(self, root):
        # con 객체 생성
        self.con = Converter('MB', 'KB', 1024)
        frame = Frame(root)
        frame.pack()
        
        Label(frame, text="byte MB").grid(row=0, column=0)
        self.mb = DoubleVar() #실수형 값
        Entry(frame, textvariable=self.mb).grid(row=0, column=1)
        
        Label(frame, text="byte KB").grid(row=1, column=0)
        self.kb = StringVar() #문자형 값
        Label(frame, textvariable=self.kb).grid(row=1, column=1)
        
        Button(frame, text="변환", command=self.convert) \
                .grid(row=2, columnspan=2)
        
    def convert(self): #변환 함수 정의
        try:
            mb = self.mb.get()
            if mb < 0:
                messagebox.showerror("오류", "양수를 입력해주세요")
                return
            conv_kb = self.con.convert(mb) #변환 결과값
            conv_kb = f'{self.con.convert(mb):,}' #천단위 구분기호 설정
            self.kb.set(conv_kb) #결과값 저장
        except TclError: #숫자가 아닌 문자가 입력된 경우 
            messagebox.showerror("오류", "유효한 숫자를 입력해주세요")
            self.kb.set("오류!")
   
root = Tk()
root.title("단위 변환기")
root.geometry("250x80+200+200")
app = App(root)

root.mainloop()

# 함수로 구현
'''
def convert():
    try:
        #숫자가 아닌 문자가 입력되면 - ValueError
        byte_mb = int(ent_mb.get()) 
        txt_kb.delete(0.0, END) #초기화
        byte_kb = byte_mb * 1024 #계산
        byte_kb = f'{byte_kb:,}' #문자열 형태 포맷
        txt_kb.insert(END, byte_kb)
    except ValueError:
        txt_kb.delete(0.0, END)
        txt_kb.insert(END, '오류')

root = Tk()
root.title("단위 변환기")
root.geometry("250x80+200+200")
frame = Frame(root)
frame.pack() #가운데 배치

Label(frame, text="byte MB").grid(row=0, column=0)
ent_mb = Entry(frame, width=15) #입력
ent_mb.grid(row=0, column=1)

Label(frame, text="byte KB").grid(row=1, column=0)
txt_kb = Text(frame, width=15, height=1) #출력
txt_kb.grid(row=1, column=1)

Button(frame, text="변환", command=convert) \
    .grid(row=2, columnspan=2)

root.mainloop()
'''