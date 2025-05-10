# 기본 매개 변수
def print_string(text, count=1):
    for i in range(count):
        print(text)

print_string("Hello")
print_string("Hello", 3)

# 가변 매개 변수
def calc_avg(*numbers):
    sum_v = 0
    avg = 0.0
    for i in numbers:
        sum_v += i
    avg = sum_v / len(numbers)
    return avg

avg1 = calc_avg(1, 2)
print(avg1)

# 내장 함수
a = [1, 2, 3, 4]
print(sum(a))
print(max(a))
print(min(a))

# 반올림
print(round(2.74))
print(round(2.24))



print(all([1, 2, 3]))