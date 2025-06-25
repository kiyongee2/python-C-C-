
from bs4 import BeautifulSoup
import requests

'''
html_str = """
<!DOCTYPE html> 
<html>
<body>
    <ul class="item">
        <li>인공지능</li>
        <li>빅데이터</li>
        <li>로봇공학</li>
    </ul>
    <ul class="lang">
        <li>Python</li>
        <li>C/C++</li>
        <li>Java</li>
    </ul>
</body>
</html>
"""

soup = BeautifulSoup(html_str, "html.parser")
# print(soup)
#find('ul') - 처음 나오는 ul 태그 찾음
first_ul = soup.find('ul') 
print(first_ul) 
print(first_ul.text)

# findAll('li') - 결과를 리스트로 반환함
all_li = first_ul.find_all('li')
print(all_li)
print(all_li[2])
print(all_li[2].text)

# 두번째로 나오는 ul 태그 찾기
# attrs 속성의 클래스(class) 선택자로 찾음
second_ul = soup.find('ul', attrs={'class': 'lang'})
print(second_ul)
all_li = second_ul.find_all('li')
print(all_li)
print(all_li[0])
print(all_li[0].text)
'''

# 서울시청 메뉴 가져오기
url = "https://www.seoul.go.kr/main/index.jsp"
response = requests.get(url)
html = BeautifulSoup(response.text, 'html.parser')

# 첫번째 메뉴 찾기
first_li = html.select_one('li.public')
print(first_li)
print(first_li.text)

# 모든 항목 찾기
all_li = html.select('div.m_service > ul > li')
print(all_li)

# 메뉴 텍스트 출력
for li in all_li:
    print(li.text)
    
# 인덱싱
print(all_li[1].text)
print(all_li[-1].text)
    
