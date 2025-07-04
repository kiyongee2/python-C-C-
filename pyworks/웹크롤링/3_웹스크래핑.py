import requests
from bs4 import BeautifulSoup

'''
# 국립중앙박물관 관람 정보
url = "https://www.museum.go.kr/MUSEUM/contents/M0101000000.do?menuId=tour-guidance"
response = requests.get(url)
html = BeautifulSoup(response.text, 'html.parser')

# 관람안내 
# select_one()
first_ul = html.select_one('ul.display-content')
print(first_ul)
print(first_ul.text)

# select()로 찾기
contents = html.select('ul.display-content-area > li > ul')
print(contents)

for content in contents:
    print(content.text)

# 관람시간
print(contents[0].text)

# 휴관일 및 휴실일
print(contents[1].text)

# 관람료
print(contents[2].text)
'''

# KBS 뉴스 기사
'''
# 메인 기사 스크랩
url = "https://news.kbs.co.kr/news/pc/view/view.do?ncd=8295309"
response = requests.get(url)
html = BeautifulSoup(response.text, 'html.parser')

# 제목 스크랩
title = html.select_one("h4.headline-title")
print(title)
print(title.text)

# 입력일, 수정일
# date = html.select_one("em.input-date")
# print(date)
# print(date.text)

# edit = html.select_one("em.edit-date")
# print(edit)
# print(edit.text)

# 내용 스크랩
content = html.select_one('div.detail-body')
print(content.text.strip())
'''

# 환율 정보
import requests
from bs4 import BeautifulSoup

resp = requests.get("https://finance.naver.com/marketindex/")
soup = BeautifulSoup(resp.text, "html.parser")

# find()
first_ul = soup.find('ul', attrs={'class': 'data_lst'})
# print(first_ul)
first_li = first_ul.find('li')
print(first_li)

# 환율 종류
exchange = first_ul.find('span', attrs={'class': 'blind'})
print(exchange.text)
print(exchange.text.split(" ")[1]) #미국 USD

# 환율 지수
value = first_ul.find('span', attrs={'class': 'value'})
print(value.text) #1,366.60
print(exchange.text, value.text)

# find_all() - 전체 환율 찾기
all_li = first_ul.find_all('li')
# print(all_li)

for li in all_li:
  exchange = li.find('span', attrs={'class': 'blind'})
  value = li.find('span', attrs={'class': 'value'})
  print(exchange.text.split(" ")[-1], value.text)
  
# select() 사용
all_li = soup.select("div.market1 ul li")
# print(all_li)

exchange = soup.select_one("span.blind")
print(exchange.string)

value = soup.select_one("span.value")
print(value.string)

for li in all_li:
  exchange = li.select_one("span.blind")
  value = li.select_one("span.value")
  print(exchange.string.split(" ")[-1], value.string)
  
# 주식 1 종목
def getcontent():
    url = 'https://finance.naver.com/item/main.naver?code=086520'
    response = requests.get(url)
    content = BeautifulSoup(response.text, 'html.parser')
    return content

content = getcontent()
today = content.find('div', attrs={'class':'today'})
# print(today)
price = today.find('span', attrs={'class':'blind'})
print(price.text)
print(f'에코프로 주가 : {price.text}원')

# 주식 여러 종목
def getcontent(item_code):
    url = 'https://finance.naver.com/item/main.naver?code=' + item_code
    response = requests.get(url)
    content = BeautifulSoup(response.text, 'html.parser')
    return content

def getprice(item_code):
    content = getcontent(item_code)
    today = content.find('div', attrs={'class': 'today'})
    price = today.find('span', attrs={'class': 'blind'})
    return price

에코프로 = getprice('086520')
네이버 = getprice('035420')
NCSOFT = getprice('036570')

print(f'에코프로 주가 : {에코프로.text}원')
print(f'네이버 주가 : {네이버.text}원')
print(f'NCSOFT 주가 : {NCSOFT.text}원')
  