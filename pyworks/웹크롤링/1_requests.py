import requests

url = "https://www.python.org/3"
response = requests.get(url)
print(response)
print(response.status_code) #200
# print(response.text)

# robots.txt 파일 경로
urls = ["https://www.python.org/", "https://www.naver.com/"]
filename = "robots.txt"

for url in urls:
    url_path = url + filename
    print(url_path)
    response = requests.get(url_path)
    print(response)
