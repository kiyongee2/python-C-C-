
import requests
from bs4 import BeautifulSoup
import pandas as pd

# KBS 뉴스 기사
'''
# 메인 기사 스크랩
url = "https://news.kbs.co.kr/news/pc/view/view.do?ncd=8295309"
response = requests.get(url)
html = BeautifulSoup(response.text, 'html.parser')

# 제목 스크랩
title = html.select_one("h4.headline-title")
print(title)
# print(title.text)

# 입력일, 수정일
# date = html.select_one("em.input-date")
# print(date)
# print(date.text)

# edit = html.select_one("em.edit-date")
# print(edit)
# print(edit.text)

# 내용 스크랩
content = html.select_one('div.detail-body')
# print(content.text.strip())

# 데이터 프레임 만들기

data = {
  '뉴스url': [url],
  '제목': [title.text],
  '내용': [content.text]
}

df = pd.DataFrame(data)
# print(df)

# csv 파일로 만들기
df.to_csv('kbs_news.csv', index=False)

# csv 파일 읽기
news = pd.read_csv('kbs_news.csv')
print(news)
'''

# 전자 신문 메인 기사

url = "https://m.etnews.com/20250705000013"

response = requests.get(url)
html = BeautifulSoup(response.text, "html.parser")

# 헤드라인
title = html.select_one('div.article_header > h2')
print(title.text)

# 발행일
# date = html.select_one('div.time')
# print(date.time)
# print(date.time.text)

dates = html.select('div.time > time')
print(dates[0].text)

# 본문 
article = html.select_one('div.article_body')
print(article.text)