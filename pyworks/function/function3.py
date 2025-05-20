
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
