import requests
from bs4 import BeautifulSoup
from tkinter import *
from tkinter import messagebox

def lotto_win():
    try:
        num = int(entry.get())  # 입력된 회차

        # 최신 회차 가져오기
        latest_url = "https://dhlottery.co.kr/gameResult.do?method=byWin"
        try:
            res_latest = requests.get(latest_url)
            res_latest.raise_for_status()
            soup_latest = BeautifulSoup(res_latest.text, 'html.parser')
            latest_text = soup_latest.select_one("div.win_result h4 strong").text
            latest_round = int(latest_text.replace("회", "").strip())
        except Exception:
            messagebox.showerror("오류", "최신 회차 정보를 불러올 수 없습니다.")
            return

        # 회차 유효성 검사
        if num <= 0 or num > latest_round:
            messagebox.showerror("오류", f"1회부터 {latest_round}회까지만 조회 가능합니다.")
            entry.delete(0, END)
            output.delete(0.0, END)
            return

        # 해당 회차 당첨번호 크롤링
        url = f"https://dhlottery.co.kr/gameResult.do?method=byWin&drwNo={num}"
        response = requests.get(url)
        response.raise_for_status()
        soup = BeautifulSoup(response.text, 'html.parser')
        win_nums = soup.select('div.nums span')

        if not win_nums or len(win_nums) < 7:
            messagebox.showerror("오류", "당첨 번호 정보를 불러올 수 없습니다.")
            return

        win_num_list = [n.text for n in win_nums]

        output.delete(0.0, END)
        output.insert(END, f"[{num}회차]\n당첨번호: {', '.join(win_num_list[:-1])} \
                        \n\n보너스번호: {win_num_list[-1]}")
    except ValueError:
        messagebox.showerror("오류", "유효한 숫자를 입력하세요")
        entry.delete(0, END)
        output.delete(0.0, END)
        output.insert(END, "오류")

# GUI
window = Tk()
window.title("로또 당첨 확인")

Label(window, text="당첨 회차 입력: ").grid(row=0, column=0, sticky=W)

entry = Entry(window, bg="yellow")
entry.grid(row=1, column=0, sticky=W)
entry.bind('<Return>', lambda event: lotto_win())

Button(window, text="당첨 번호 확인", command=lotto_win).grid(row=2, column=0, sticky=W)

output = Text(window, bg="lightgreen", width=50, height=5)
output.grid(row=3, column=0, sticky=W)

window.mainloop()
