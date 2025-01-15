# 변수
one = 1; two = 2
three = 3

# print(one)
total = one + \
          two + \
          three

print("전체 합은", total)

# 리스트
days = ['월', '화', '수']
print('월' in days)
print('일' in days)

for day in days:
    print(day)
    
# 문자열
str = "Hello Pico~"

print(str[:6])
print((str + ' ') * 2)

for i in range(len(str)):
    print(i)
    
# 비트 연산
a = 0b0011
b = 0x0F  #0b1111

print("a =", a)
print("b =", b)
print(a & b)
print(a | b)
print(a ^ b)
print("~a =", ~a)
print("a << 2 =", a << 2)

# if ~ if
value = -5

if value > - 10 and value < 10:
    print('-10에서 10 사이값입니다.')
    
if -10 < value < 10:
    print('-10에서 10 사이값입니다.')
    
# sequence
number_tuple = (1, )
print(number_tuple)

my_list = [1, 2, 3, 1, 2]
print(my_list)

my_set = {1, 2, 3, 1, 2}
print(my_set)

for x in my_set:
    print(x)
    
my_dict = {1: '사과', 2: '바나나', 3: '귤'}
print(3 in my_dict)    # 키의 맴버쉽 검사는 가능
print('귤' in my_dict) # 값의 맴버쉽 검사는 불가능

for key in my_dict:
    print(key, ':', end=' ')
    print(my_dict[key])







