# 처음 만드는 윈도우
from tkinter import *  #'*'-모든 클래스, 함수

"""
# 레이 아웃(배치) - pack() 함수
def click():
  # print("안녕~ 파이썬!")
  lbl_result.config(text="안녕~ 파이썬!")

root = Tk() #Tk 클래스의 인스턴스 생성
root.title("첫 윈도우")
#너비-100pixel, 높이-50p, x좌표-200, y좌표-100
root.geometry("250x80+200+100")  

# 라벨 생성
# pack() - 가운데 배치(한 줄을 차지함)
Label(root, text="Hello~ Python!!").pack()

# 버튼 생성
# command - 함수에 명령을 내림
Button(root, text="확인", command=click).pack()

# 출력 레이블 생성
lbl_result = Label(root)
lbl_result.pack()

root.mainloop()
"""
# 레이 아웃(배치) - pack() 함수
"""
window = Tk()
window.title('pack')
window.geometry('300x200')

Label(window, text="안녕하세요").pack()
btn = Button(window)
btn.config(text="확인")
# btn.pack()
btn.pack(side='top')

# btn.place(x = 130, y = 100)

window.mainloop()
"""

# 버튼 2개 만들기
window = Tk()
window.title('pack')
window.geometry('300x200')
window.option_add("*font", "System 12")

frame = Frame(window)
frame.pack()

Label(frame, text="안녕하세요").pack(pady=20) #side="top"
Button(frame, text="변환", width=10).pack(side="left", padx=5)
Button(frame, text="초기화", width=10).pack(side="left", padx=5)

window.mainloop()

# 레이 아웃(배치) - grid() 함수
"""
window = Tk()
window.title('배치-grid')
window.geometry("300x200")

# grid(행, 열)
# sticky=E(동쪽), W(서쪽)
Label(window, text="오늘도 좋은 하루 되세요!", font=("돋움", 13)).grid(row=0, column=0)
Button(window, text="동", width=5, height=2).grid(row=1, column=0, sticky=E)
Button(window, text="서", width=5, height=2).grid(row=1, column=0, sticky=W)
Button(window, text="북", width=5, height=2).grid(row=2, column=0, sticky=N)
Button(window, text="남", width=5, height=2).grid(row=3, column=0, sticky=S)

window.mainloop()
"""



