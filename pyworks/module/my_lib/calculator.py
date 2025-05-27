# 모듈 만들기 - calculator.py
def add(x, y):
    return x + y

def sub(x, y):
    return x - y

def mul(x, y):
    return x * y 

def div(x, y):
    if y != 0:
        return x / y
    else:
        print("0으로 나눌 수 없습니다.")

# mul() 호출
multiple = mul(10, 4)
print(multiple)

# div() 호출
division = div(10, 0)
print(division)

'''
def div(x, y):
    if y == 0:
        raise ValueError("0으로 나눌 수 없습니다.")
    return x / y

try:
    result = div(10, 0)
except ValueError as e:
    print(f"오류 발생: {e}")
    result = None  # 또는 기본값 설정

print("계산 결과:", result)
'''