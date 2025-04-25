# 문자열 인덱싱과 슬라이싱
# 문자열은 1차원 리스트이다.
'''
say = "Have a nice day"

print(say[0])
print(say[-1])
print(say[0:4])
print(say[0])
print(say[7:])

s = "20240621Rainy"
year = s[:4]
print(year)

day = s[4:8]
print(day)

weather = s[8:]
print(weather)
'''

# split()
fruit = "banana, grape, apple"
fruit = fruit.split(',')
print(fruit)

# replace()
msg = "대한민국의 수도는 부산이다."
msg = msg.replace("부산", "서울")
print(msg)

# find() 
s1 = "smile"
print(s1.find('m'))
print(s1.find('k'))

# 대소문자 구분함
txt = "Welcome to my House!!"
x = txt.find("welcome")
print(x)

# strip() - 공백 문자 제거
s2 = "  Hi, han"
print(s2.lstrip())
print(s2.strip())

s3 = "Hi, han   "
print(s3.rstrip())
print(s3.strip())

