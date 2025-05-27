
from my_lib.calculator import add, sub, mul, div
from my_lib.food import name, cook, eat

# calculator 모듈 사용하기
# add() 호출
addition = add(10, 4)
print(addition)

# sub() 호출
subtraction = sub(10, 4)
print(subtraction)

# mul() 호출
multiple = mul(10, 4)
print(multiple)

# div() 호출
division = div(10, 4)

# 분모가 0인 경우
division = div(10, 0)
print(division)

# food 모듈 사용하기
print(f'이름: {name}')

cook()

eat()
