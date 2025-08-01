# 날짜와 시간 관련 모듈
import datetime

# datetime.datetime - 날짜와 시간을 사용
now = datetime.datetime.today() #오늘 날짜
print(now) # 2025-05-18 11:16:33.750807
# 년, 월, 일 출력
print(now.year)
print(now.month)
print(now.day)

# 현재 날짜 표기
print(f"{now.year}. {now.month}. {now.day}.")

# 시, 분, 초 출력
print(now.hour)
print(now.minute)
print(now.second)

# 현재 시간 표기
print(f"{now.hour} : {now.minute} : {now.second}")

# 특정한 날짜 설정
# datetime.date - 날짜만 사용 가능
the_day = datetime.date(2025, 8, 15)
print(the_day)

today = datetime.date.today()
print(today)

# DDay 계산
print("광복절까지 몇일 남았었요(DDay)?")

remain_day = the_day - today
print(f"광복절까지 {remain_day.days}일 남았습니다.")


# 달력 출력
import calendar

# 전체 출력
# calendar.prcal(2025)

# 5월 출력
calendar.prmonth(2025, 8)

# 요일 출력(0-월, 1-화, 2-수, 3-목, 4-금, 5-토, 6-일)
day_idx = calendar.weekday(2025, 8, 1)
print(day_idx) # 4

days = ['월', '화', '수', '목', '금', '토', '일']
print("2025, 8, 1은 "  + days[day_idx] + "요일 입니다.")

