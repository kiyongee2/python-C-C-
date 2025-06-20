# 쿠폰 추첨기
from tkinter import *
import random

def click():
    namelist = ['강감찬', '고담덕', '이순신', '장영실',
                '이도', '김구', '신사임당', '유관순',
                '서희', '이산']
    winners = [] #당첨자
    while len(winners) < 3:
       winner = random.choice(namelist) #1명 랜덤 선택
       if winner not in winners:  #중복되지 않은 이름
           winners.append(winner) #당첨자 추가
           
    output.delete(0.0, END)
    output.insert(END, winners)

window = Tk()
window.title("쿠폰 추첨기")
window.option_add('*font', '맑은고딕 13')

# 이미지 삽입
lbl_img = Label(window)
img = PhotoImage(file = "bronx.png") #파일 경로
lbl_img.config(image = img)
lbl_img.grid(row=0, column=0, sticky=W)

# 추첨 버튼
Button(window, text='추첨', command=click) \
        .grid(row=1, column=0, sticky=W)
        
# 이름 출력
output = Text(window, width=41, height=4, bg='orange')
output.grid(row=2, column=0, sticky=W)

window.mainloop()
