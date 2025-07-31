# 기본 매개변수(디폴트 매개변수)
# 함수 호출시 매개변수를 생략하면 기본값으로 실행됨
def take(bus_number, fee = 1500):
    print(f"{bus_number}번 버스 요금: {fee}원")

# take() 호출
take(101)  
take(500, 1500)
take(600, 1800)

def print_string(text, count=1):
    for i in range(count):
        print(text)

# print_string() 호출
print_string("apple", 4)
print_string("banana")

# 가변 매개변수
# 매개변수의 입력값이 정해지지 않고 변경해야 할때 사용하는 변수
# 변수앞에 '*'을 넣음
# 평균을 계산하는 함수 정의
def calc_avg(*number):
    total = 0 #합계
    for i in number: #number(iterable-리스트, 튜플)
        total += i;  #total = total + i
    avg = total / len(number) # 평균 = 합계 / 개수
    return avg  

print(calc_avg(1, 2)) #1.5

average = calc_avg(1, 2, 3, 4)
print(average) #2.5

# 실습 문제
def my_func(x, y):
    if x == y:
        return x + y
    else: # x != y
        return x - y

# 호출
result1 = my_func(8, 8)
print("result1 =", result1) #16

result2 = my_func(8, 9)
print("result2 =", result2) #-1
