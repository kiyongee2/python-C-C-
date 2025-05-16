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

# 문자열 함수
"""
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
"""

# 백신 접종자 분류
'''
birth_year = input("출생년도 입력: ")
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
    print("하반기 일정 확인")

'''
    
# 실습1

print("Happy Birthday!!을 입력하세요.")
x = input()
x = x.capitalize()
print(x)
y = x.split()
print(y)

# print(y[0][::1], end='*')
print(y[0][::2], end='*')
print(y[1][5:8])

# 실습2
# input string : python-programming
# input number : 10

arr_str = input("Input string: ").split('-')
arr_len = int(input('Input number: '))
arr_val = list(range(0, arr_len, 2)) # 0 2 4 6 8
arr_val.remove(4) # 0 2 6 8

print(arr_str[1].find('e') + arr_val[2])
# -1 + 6 = 5

# 실습3
i = 20
f = 123456.789E-3
print('%d\n%d' % (i, i), end = '/')
print('%.3f' % f)