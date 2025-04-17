# 정수 - 상수(변하지 않는 수)
"""
print(4 + 5)
print(4 - 5)
print(4 * 5)
print(4 / 5)
"""

# 변수 - 자료를 저장하기 위한 메모리 공간 
n1 = 4  # n1이라는 변수에 4를 저장(기억)
n2 = 5

print("n1 + n2 =", n1 + n2)
print("n1 - n2 =", n1 - n2)

season = "여름" # season이라는 변수에 '여름'을 저장

print(season)

"""
변수 이름 만들때 오류
1. 숫자로 시작하면 오류
2. 공백이 있으면 오류
3. 예약어(if, class, def)

"""

'''
# 변수 이름 만들때 오류의 예

1n = 4  # 숫자로 시작 불가

season 2 = "봄"  # 공백 불가

class = 100  # 예약어 불가 
'''

# 자료형 반환 - type() 함수
# 숫자형
print(type(n1))
print(type(3.14))

# 문자형 
print(type(season))
print(type('K'))

# 논리형
print(4 > 5)
print(4 < 5)

print(type(4 > 5))
print(type(4 < 5))










