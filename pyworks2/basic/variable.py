# 자료형과 변수
'''
# 상수 - 변하지 않는 수 
print(4 + 5)
print(4 * 5)

# 변수 선언과 초기화
n1 = 4  #정수형 변수 n1에 4를 저장(기억)
n2 = 5

n1 = 10  #값을 변경(수정)

print("n1 + n2 =", n1 + n2)
print("n1 - n2 =", n1 - n2)
print("n1 * n2 =", n1 * n2)
print("n1 / n2 =", n1 / n2) #나누기는 소수로 출력됨

season = "여름"  #문자형 변수 season에 "여름" 저장 
print("계절 :", season)

# 변수이름 - 스네이크 표기법 
name_of_fruit = "사과"
rate_of_birth = 0.75

print(name_of_fruit)
print(rate_of_birth)

# 변수 이름 작명시 오류
"""
3n = 100  #숫자로 시작 불가
sea son = "봄" #공백(문자)을 넣을 수 없다.
class = 3  #예약어(이미 지정된 명령어)는 사용 불가
"""

# 자료형 확인 - type()
# 숫자형
print(type(n1))  #int
print(type(1.609)) #float

# 문자형
print(type('B')) #str
print(type(season)) #str

# 논리형 자료형 - 결과값이 True / False임
print(4 > 5)  # False
print(4 < 5)  # True
print(type(4 > 5))  # bool

# 진수 표기하기
num = 10
b_num = 0b1010   #2진수표기 - 앞에 0b를 붙임
h_num = 0xA      #16진수 표기 - 앞에 0x를 붙임

print(num)
print(b_num)
print(h_num)

print(bin(10)) #0b1010
print(bin(65)) #0b1000001
print(hex(10)) #0xa
print(hex(65)) #0x41

# ord(문자) - 문자를 유니코드(아스키) 값으로 변환 
# chr(코드값) - 유니코드 값을 문자로 변환
print(ord('0'))  #48
print(ord('A'))  #65
print(ord('a'))  #97

print(chr(48))  #'0'
print(chr(65))  #'A'
print(chr(97))  #'a'
'''

# 문자열 다루기
say1 = "'힘내세요!' \n라고 말했다."
print(say1)

say2 = "No, it doesn't"
print(say2)

say3 = 'No, it doesn\'t'
print(say3)

say4 = "문자 \"12\"를 숫자 12로 변환하세요"
print(say4)

# 문자열을 여러줄에 입력 
table = """
상품명\t가격\t수량
키보드\t20000\t100
마우스\t25000\t100
모니터\t80000\t50
"""
print(table)

# 형변환(Type Conversion)
# int(문자) - 문자를 정수로 변환
val_1 = "123"
val_1 = int(val_1)
print(val_1 + 10)

# 실수를 정수로 변환
val_2 = 3.1
val_2 = int(val_2)
print(val_2)

# str(숫자) - 숫자를 문자로 변환
val_3 = 123
#val_3 = str(val_3)
print(str(val_3))

# 정수를 실수로 변환
val_4 = 21
val_4 = float(val_4)
print(val_4)










































