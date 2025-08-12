# 단위 변환기 : MB -> KB로 변환

from tkinter import *

def convert():
  try:
    # 입력 상자의 자료형은 문자형 -> 숫자로 변환
    byte_mb = int(entry.get())
    output.delete(0.0, END)     #이전 입력문자 삭제
    byte_kb = byte_mb * 1024    #변환 상수 곱함 
    output.insert(END, byte_kb) #변환된 kb값 저장
  except ValueError: #숫자가 아닌 문자 입력된 경우 오류 처리
    output.delete(0.0, END)
    output.insert(END, "오류")

window = Tk()
window.title("단위 변환기")
window.geometry("250x100+200+200")
window.option_add("*font", "돋움 13")

frame = Frame(window)  #프레임 생성

Label(frame, text="byte MB").grid(row=0, column=0)
entry = Entry(frame, width=15)
entry.grid(row=0, column=1)

Label(frame, text="byte KB").grid(row=1, column=0)
output = Text(frame, width=15, height=1)
output.grid(row=1, column=1)

# 변환 버튼
Button(frame, text="변환", command=convert) \
  .grid(row=2, columnspan=2) 

window.mainloop()




