# 재귀 호출
# sos 보내기
"""
def sos(n):
  if n <= 0:
    return ''
  else:
    print("Help me!")
    return sos(n - 1)
  
  '''
  print("Help me!")
  n -= 1
  if n > 0:
    sos(n)
  '''

sos(1)
sos(4)
"""

# 팩토리알 계산
'''
# 1부터 5까지 곱하기
  1 x 2 x 3 x4 x 5 = 5!
'''
def facto(n):
  gob = 1
  for i in range(1, n + 1):
    gob *= i
  return gob

def factorial(n):
  if n <= 1:
    return 1
  else:
    return n * facto(n - 1)
'''
  n=4, 4 * facto(3) - 4 * 6
  n=3, 3 * facto(2) - 3 * 2
  n=2, 2 * facto(1) - 2 * 1
  n=1, 1 * facto(0) - 1 * 1

'''

# facto() 호출
print(facto(1))
print(facto(4))  

# factorial() 호출
print(factorial(1))
print(factorial(4))

# 피보나치 수열
'''
   1, 1, 2, 3, 5, 8
   세째항 = 첫째항 + 둘째항
'''
def fibo(n):
  if n <= 2:
    return 1
  else:
    return fibo(n-2) + fibo(n-1)
  
'''
   n=4, fibo(4) = fibo(2) + fibo(3) = 3
   n=3, fibo(3) = fibo(1) + fibo(2) = 2
   n=2, fibo(2) = 1
   n=1, fibo(1) = 1
'''
  
print(fibo(1))
print(fibo(2))
print(fibo(3))
print(fibo(4))
