# 환율 정보 크롤링하기
import requests
from bs4 import BeautifulSoup

# 환율정보
url = "https://finance.naver.com/marketindex/"
resp = requests.get(url)
# print(resp.text)

soup = BeautifulSoup(resp.text, "html.parser")
# select() 함수 사용
all_li = soup.select("div.market1 ul li") 
# all_li = soup.select("ul.data_lst li") #차이 비교
# print(all_li)

# 환율 종류 - select_one() : 1개 선택
exchange = soup.select_one("span.blind")
# print(exchange.text) #미국 USD

# 환율 지수
value = soup.select_one("span.value")
# print(value.text) #1,388.80

# 환율 전체 출력
for li in all_li:
  exchange = li.select_one("span.blind")
  value = li.select_one("span.value")
  # 공백문자로 텍스트 분리 - 리스트 반환
  # text 대신 string 가능
  print(exchange.string.split(' ')[-1], value.string)










