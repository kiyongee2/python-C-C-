# 목록 만들기
import tkinter as tk

def btn_check():
    result = "* 선택된 취미\n"
    for i in range(n):
        if ck_val[i].get():
            result += f"{hobby[i]}  "
    lbl_result.config(text=result)
    
window = tk.Tk()
window.title("취미 목록 선택")
window.geometry("300x300")

hobby = ["독서", "운동", "게임", "등산"]
n = len(hobby)
ck_val = [None, None, None, None] #리스트 초기화
ck_btn = [None]*4

for i in range(n): 
    ck_val[i] = tk.BooleanVar() #True/False
    ck_val[i].set(False) #기본값
    ck_btn[i] = tk.Checkbutton(text=hobby[i], font=("System", 14), 
                    variable=ck_val[i])
    # 배치
    ck_btn[i].place(x = 100, y = 20 + (30*i))
    
# 확인 버튼
btn_confirm = tk.Button(window, text="확인", command=btn_check)
btn_confirm.place(x=120, y=160)

# 결과 표시 레이블
lbl_result = tk.Label(window, text="", font=("System", 12))
lbl_result.place(x=40, y=200)
    
window.mainloop()
