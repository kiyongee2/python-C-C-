"""
# 인덱싱과 슬라이싱
alpha = ['a', 'b', 'c', 'd']

# 인덱싱
print(alpha[2])
print(alpha[-1])

# 슬라이싱(범위로 검색 - ':' 사용)
print(alpha[0:3]) # 종료값 = 종료인덱스-1
print(alpha[0:-1])
print(alpha[0:])  # 마지막 값까지 추출
print(alpha[:])   # 마지막 값까지 추출

# 문자열은 특별한 1차원 리스트이다.
f = "apple"
print(f[0])
print(f[2])
print(f[-1])
print(f[:])

s = "20250510Rainy"
# 연도 추출
year = s[:4]  #끝 -> 끝인덱스-1
print(year) #2025

# 월일 추출
day = s[4:8]
print(day) #0510

# 날씨 추출
weather = s[8:] #Rainy
print(weather)

print(year + '. ' + day + '. ' + weather)

#단어가 포함되어 있으면 출력하는 프로그램
animal = "dog"

# in 명령어 - 있다/없다를 확인하는 명령어임 
print('d' in animal) #True
print('c' in animal) #False
print('g' not in animal) #False

animals = "dog cat horse"
print('cat' in animals) #True
print('cow' in animals) #False
"""
#챗봇(chatbot) 프로그램
# 단어가 포함되어 있으면 문장을 완성해주는 프로그램
while True:
    user_input = input("사용자(exit 입력시 종료): ")

    if user_input == "exit":
        print("챗봇: 대화를 종료합니다. 안녕히 가세요.")
        break
    else:
        if "안녕" in user_input:
            print("챗봇: 안녕하세요! 방가와요!")
        elif "이름" in user_input:
            print("챗봇: 저는 Python 챗봇입니다.")
        elif "날씨" in user_input:
            print("챗봇: 날씨앱을 이용해 주세요")
        else:
            print("챗봇: 죄송해요. 잘 이해하지 못했어요")

# 문자열 함수(메서드)
fruit = "banana,grape,kiwi"
print(fruit)
print(type(fruit)) # 자료형 - str

# split(구분기호) - 문자열을 리스트로 변환해 줌
fruit = fruit.split(',')
print(fruit)   # ['banana', 'grape', 'kiwi']
print(type(fruit))  # 자료형 - list

# 인덱싱과 슬라이싱
print(fruit[0])
print(fruit[2])
print(fruit[-1])

print(fruit[0:2]) #끝인덱스-1, banana, grape
print(fruit[0:3]) #banana, grape, kiwi
print(fruit[:])   #banana, grape, kiwi

# replace("변경전문자", "변경후문자")
s = "Hello, World"
s = s.replace("World", "Korea")
print(s) # Hello, Korea

# find(문자) - 문자의 인덱스(위치) 반환
print(s.find('H')) # 0
print(s.find('World')) # 7
print(s.find('k')) # -1

# 공백 문자 제거 - strip()
str = "  Hi~ han."
print(str.strip())   #양쪽 공백 제거
print(str.lstrip())  #왼쪽 공백 제거

str2 = "Hi~ han.  "
print(str2.rstrip()) #오른쪽 공백 제거

# 실습 - 문자열 처리
x = input("Happy Birthday!를 입력하세요: ")
x = x.capitalize()   #문자열의 맨 앞글자를 대문자로 변경해줌
print(x) # Happy birthday!
y = x.split() # 공백문자로 구분 - (' ') or () 사용
print(y) # ['Happy', 'birthday!']

print(y[0][-1]) #y
print(y[1][:5]) #birth

print(y[0][::1], end='*')
print(y[1][5:8])

# 입력 - python-programming, 10
'''
arr_str = input("Input string: ").split('-')
arr_len = int(input("Input number: "))
arr_val = list(range(0, arr_len, 2))
arr_val.remove(4)

print(arr_str)  # ['python', 'programming']
# print(arr_val) # range(0, 10, 2) -> [0, 2, 4, 6, 8]
print(arr_val) #[0, 2, 6, 8]

print(arr_str[1].find('e')) # -1
print(arr_val[2]) # 6
'''