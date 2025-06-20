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

# pack()
window = Tk()
window.title('pack')
window.geometry("300x100")

Label(window, text="안녕하세요").pack()
btn = Button(window)
btn.config(text='확인')
btn.pack() #side='top'
# btn.pack(side='left')


window.mainloop()


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



