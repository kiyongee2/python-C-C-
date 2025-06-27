from tkinter import *

# 짝수/홀수 판정
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