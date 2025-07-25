# 출생연도 끝자리로 민생쿠폰 신청하기
birth_year = input("출생연도 입력: ")

length = len(birth_year)
# print(length)

if len(birth_year) != 4:
  print("입력 오류: 출생연도는 4자리여야 합니다.")
else:
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

# 백신 접종자 분류하기
# 접종대상 - 20세 ~ 65세, 비대상 - "하반기 일정 확인"
'''
백신 접종 대상인 경우 - 출생연도 끝자리
 1 or 6 - 월요일
 2 or 7 - 화요일
 3 or 8 - 수요일
 4 or 9 - 목요일
 5 or 0 - 금요일
'''

"""
birth_year = input("출생연도 입력: ")  #출생연도 - 문자열
age = 2022 - int(birth_year) + 1

if age >= 20 and age <= 65:
    print("백신 접종 대상")
    if birth_year[-1] == '1' or birth_year[-1] == '6':
        print("월요일 접종")
    elif birth_year[-1] == '2' or birth_year[-1] == '7':
        print("화요일 접종")
    elif birth_year[-1] == '3' or birth_year[-1] == '8':
        print("수요일 접종")
    elif birth_year[-1] == '4' or birth_year[-1] == '9':
        print("목요일 접종")
    elif birth_year[-1] == '5' or birth_year[-1] == '0':
        print("금요일 접종")
else:
    print("하반기 일정")
"""
