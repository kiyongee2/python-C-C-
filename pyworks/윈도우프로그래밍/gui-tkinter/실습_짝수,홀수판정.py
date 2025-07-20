from tkinter import *

# 짝수/홀수 판정
'''
def click():
    try:
        #숫자가 아닌 문자가 입력되면 - ValueError
        num = int(entry.get()) 
        result.delete(0.0, END) #입력된 숫자 지움
        if num % 2 == 0:
            result.insert(END, "짝수")
        else:
            result.insert(END, "홀수")
    except ValueError:
        result.delete(0.0, END)
        result.insert(END, '오류')

root = Tk()
root.title("짝수/홀수 판정")
root.geometry("300x80+200+200")
frame = Frame(root)
frame.pack() #가운데 배치

Label(frame, text="숫자 입력").grid(row=0, column=0)
entry = Entry(frame, width=15) #입력
entry.grid(row=0, column=1)

Label(frame, text="결과").grid(row=1, column=0)
result = Text(frame, width=15, height=1) #출력
result.grid(row=1, column=1)

Button(frame, text="판정", command=click) \
    .grid(row=2, columnspan=2)

root.mainloop()
'''

# pack() 사용

def click():
    try:
        #숫자가 아닌 문자가 입력되면 - ValueError
        num = int(entry.get()) 
        result.delete(0.0, END) #입력된 숫자 지움
        if num % 2 == 0:
            result.insert(END, "짝수")
        else:
            result.insert(END, "홀수")
    except ValueError:
        #Text는 여러줄(1- 첫째줄, 0- 첫째 열)
        result.delete(1.0, END)  
        result.insert(END, '오류')
        
def reset():
    entry.delete(0, END)  #한 줄-0번줄
    result.delete(0.0, END) #여러줄 - 첫줄, 첫칼럼

root = Tk()
root.title("짝수/홀수 판정")
root.geometry("300x150+200+200")

# 입력, 출력 프레임
io_frame = Frame(root)
io_frame.pack(pady=10) #가운데 배치

# 입력
Label(io_frame, text="숫자 입력").grid(row=0, column=0)
entry = Entry(io_frame, width=15) #입력
entry.grid(row=0, column=1)

# 출력
Label(io_frame, text="결과").grid(row=1, column=0)
result = Text(io_frame, width=15, height=1) #출력
result.grid(row=1, column=1)

# 버튼 프레임
btn_frame = Frame(root)
btn_frame.pack(pady=5)
Button(btn_frame, text="판정", command=click).pack(side=LEFT, padx=5)
Button(btn_frame, text="초기화", command=reset).pack(side=LEFT, padx=5)

root.mainloop()

