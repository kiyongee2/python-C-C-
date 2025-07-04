import requests
from bs4 import BeautifulSoup
from tkinter import *
from tkinter import messagebox

'''
num = 1178 # 회차 
url = f"https://dhlottery.co.kr/gameResult.do?method=byWin&drwNo={num}"
response = requests.get(url)

soup = BeautifulSoup(response.text, 'html.parser')

win_nums = soup.select('div.nums span')
print(win_nums)

win_num_list = []  #당첨 번호 리스트
for num in win_nums:
  print(num.text)
  win_num_list.append(num.text)

print("당첨 번호")
print(win_num_list[:-1]) 

print("보너스 번호")
print(win_num_list[-1])
'''

# 로또 당첨 번호 확인 앱

def lotto_win():
  try:
    num = int(entry.get()) #입력된 회차 
    if num <= 0:
      messagebox.showerror("오류", "회차가 없습니다.")
      entry.delete(0, END)
      return
      
    # 동행 복권 사이트 - 크롤링
    url = f"https://dhlottery.co.kr/gameResult.do?method=byWin&drwNo={num}"
    response = requests.get(url)

    soup = BeautifulSoup(response.text, 'html.parser')
    win_nums = soup.select('div.nums span')

    win_num_list = []  #당첨 번호 리스트
    for num in win_nums:
      win_num_list.append(num.text)

    # 출력
    output.delete(0.0, END)
    output.insert(END, f"당첨번호: {win_num_list[:-1]} \
                  \n\n보너스번호: {win_num_list[-1]}")
  except ValueError:
    messagebox.showerror("오류", "유효한 숫자를 입력하세요")
    entry.delete(0, END)
    output.insert(END, "오류")
  
window = Tk()
window.title("로또 당첨 확인")

Label(window, text="당첨 회차 입력: ") \
  .grid(row=0, column=0, sticky=W)
entry = Entry(window, bg="yellow")
entry.grid(row=1, column=0, sticky=W)

Button(window, text="당첨 번호 확인", command=lotto_win) \
  .grid(row=2, column=0, sticky=W)
output = Text(window, bg="lightgreen", width=50, height=5)
output.grid(row=3, column=0, sticky=W)

window.mainloop()

