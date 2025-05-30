
# 1부터 n까지의 합
def sum_n(n):
    total = 0  # 합계
    for i in range(1, n + 1):
        total += i
    return total

def sum_n2(n):
    total = (n * (n + 1)) // 2
    return total

print(sum_n(10))
print(sum_n2(10))

"""
  계산 복잡도
  - 첫번째 알고리즘 : 덧셈 n번
  - 두번째 알고리즘 : 덧셈, 곱셈, 나눗셈(총 3번)

  결론: 두번째 방법이 계산 속도가 빠름

"""

# 재귀 호출 - 피보나치 수열
# 1, 1, 2, 3, 5, 8...
# 세째항 = 첫째항 + 둘째항
def fibo(n):
    if n <= 2:
        return 1
    else:
        return fibo(n - 2) + fibo(n - 1)
    
'''
  n = 1  fibo(1) = 1
  n = 2  fibo(2) = 1
  n = 3  fibo(3) = fibo(1) + fibo(2) = 1 + 1 = 2
  n = 4  fibo(4) = fibo(2) + fibo(3) = 1 + 2 = 3
'''

print(fibo(1))
print(fibo(2))
print(fibo(3))
print(fibo(4))

# 방법2
# 1, 1, 2, 3, 5, 8...
a, b = 1, 1
y = a + b

print("정수 입력(5 ~ 10): ")
n = int(input())

for k in range(3, n + 1):
    c = a + b
    y = y + c
    a = b
    b = c
print(y)