# 진수 표기
num = 10
b_num = 0b1010
h_num = 0xA

print(num, b_num, h_num)

# 진수 표현 함수
print(bin(10))
print(bin(65))
print(hex(10))
print(hex(65))

# 아스키 코드값과 문자
print(ord('0'))
print(ord('A'))
print(chr(48))
print(chr(65))

# 문자열 및 이스케이프 문자 
say1 = "'힘내세요!' \n라고 말했습니다."
print(say1)

say2 = "No, it doesn't"
print(say2)

say3 = "문자 \"12\"를 정수 12로 변환하세요"
print(say3)

table = """
상품명\t가격\t수량
키보드\t20000\t100
마우스\t25000\t100
모니터\t80000\t50
"""
print(table)

# 도형의 넓이
# 정사각형의 넓이 
size = 5
rec_area = size * size
print("정사각형의 넓이:", rec_area, "cm")

# 삼각형의 넓이
width = 5
height =7
tri_area = (width * height) / 2

print("삼각형의 넓이:", tri_area, "cm")














