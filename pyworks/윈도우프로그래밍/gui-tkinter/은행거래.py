from tkinter import *
from tkinter import messagebox

# 계정 딕셔너리(잔고)
account = {'balance': 10000}

def deposit():
    try:
        amount = int(ent_amount.get())
        if amount > 0:
            account['balance'] += amount
            messagebox.showinfo("알림", f"{amount}원이 입금되었습니다. 현재 잔액: {account['balance']}원")
            update_balance_label()
        else:
            messagebox.showerror("오류", "입금액은 0보다 커야합니다.")
    except ValueError:
        messagebox.showerror("오류", "유효한 숫자를 입력하세요.")
    ent_amount.delete(0, END) #입력된 내용 삭제(초기화)

def withdraw():
    try:
        amount = int(ent_amount.get())
        if amount > 0:
            if amount > account['balance']:
                messagebox.showerror("오류", "잔액이 부족합니다.")
            else:
                account['balance'] -= amount
                messagebox.showinfo("알림", f"{amount}원이 출금되었습니다. \n현재 잔액: {account['balance']}원")
                update_balance_label()
        else:
            messagebox.showerror("오류", "출금액은 0보다 커야합니다.")
    except ValueError:
        messagebox.showerror("오류", "유효한 숫자를 입력하세요.")
    ent_amount.delete(0, END)
        
def update_balance_label():
    lbl_balance.config(text=f"잔액: {account['balance']}원")

root = Tk()
root.title("은행 거래 앱")

lbl_amount = Label(root, text="금액")
lbl_amount.pack()

# 입력된 금액
ent_amount = Entry(root)
ent_amount.pack()

# 잔액 조회 레이블
lbl_balance = Label(root, text=f"잔액: {account['balance']}원")
lbl_balance.pack()

# 입금 버튼
btn_deposit = Button(root, text="입금", command=deposit)
btn_deposit.pack()

# 출금 버튼
btn_withdraw = Button(root, text="출금", command=withdraw)
btn_withdraw.pack()

root.mainloop()