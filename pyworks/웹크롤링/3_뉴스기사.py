import requests
from bs4 import BeautifulSoup

# KBS 뉴스 기사
'''
# 메인 기사 스크랩
url = "https://news.kbs.co.kr/news/pc/view/view.do?ncd=8287486"
response = requests.get(url)
html = BeautifulSoup(response.text, 'html.parser')

# 제목 스크랩
title = html.select_one("h4.headline-title")
print(title)
print(title.text)

# 내용 스크랩
content = html.select_one('div.detail-body')
print(content.text.strip())
'''

# 국립중앙박물관 관람 정보
url = "https://www.museum.go.kr/MUSEUM/contents/M0101000000.do?menuId=tour-guidance"
response = requests.get(url)
html = BeautifulSoup(response.text, 'html.parser')

# 관람시간
contents = html.select('ul.display-content-area > li > ul')
# print(contents)

# for content in contents:
#     print(content.text)

# 관람시간
print(contents[0].text)

# 관람료
print(contents[2].text)