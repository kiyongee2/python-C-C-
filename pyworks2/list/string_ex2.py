
birth_year = input("출생년도 입력: ")

if birth_year[-1] == '1' or birth_year[-1] == '6':
  print("신청일은 월요일입니다.")
elif birth_year[-1] == '2' or birth_year[-1] == '7':
  print("신청일은 화요일입니다.")
elif birth_year[-1] == '3' or birth_year[-1] == '8':
  print("신청일은 수요일입니다.")
elif birth_year[-1] == '4' or birth_year[-1] == '9':
  print("신청일은 목요일입니다.")
elif birth_year[-1] == '5' or birth_year[-1] == '0':
  print("신청일은 금요일입니다.")
else:
  print("신청요일이 아닙니다.")
