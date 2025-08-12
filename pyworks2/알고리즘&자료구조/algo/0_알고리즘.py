# 최대 공약수(GCD) - Great Common Divisior
# 입력: a, b
# 출력: a와 b의 최대공약수

def gcd(a, b):
  i = min(a, b) 
  while True:
    if a % i == 0 and b % i == 0:
      return i 
    i = i - 1  #i를 1감소 시킴
    
print(gcd(1, 5))
print(gcd(3, 6))
print(gcd(60, 24))
print(gcd(81, 27))

# 유클리드 알고리즘
# 재귀 호출
def gcd(a, b):
  if b == 0:   #종료 조건
    return a  
  return gcd(b, a % b)

print(gcd(1, 5))
print(gcd(3, 6))
print(gcd(60, 24))
print(gcd(81, 27))

# 하노이의 탑
# 입력: 옮기려는 원반의 개수 n
#       옮길 원반이 현재 있는 출발점 기둥 from_pos
#       원반을 옮길 도착점 기둥 to_pos
#       옮기는 과정에서 사용할 보조 기둥 aux_pos
# 출력: 원반을 옮기는 순서

def hanoi(n, from_pos, to_pos, aux_pos):
  if n == 1: #원반 한 개를 옮기는 문제면 그냥 옮기면 됨
    print(from_pos, "->", to_pos)
    return
  
  # 원반 n-1개를 aux_pos로 이동(to_pox를 보조 기둥으로)
  hanoi(n-1, from_pos, aux_pos, to_pos)
  # 가장 큰 원반을 목적지로 이동
  print(from_pos, "->", to_pos)
  # aux_pos에 있는 원반 n-1개를 목적지로 이동(from_pos를 보조 기둥으로)
  hanoi(n-1, aux_pos, to_pos, from_pos)
  
# (2의n승 - 1)번 이동
print("n = 1")  #1번
hanoi(1, 1, 3, 2)
print("n = 2")  #3번
hanoi(2, 1, 3, 2)
print("n = 3")  #7번
hanoi(3, 1, 3, 2)
print("n = 4")  #15번
hanoi(4, 1, 3, 2)
print("n = 5")  #31번
hanoi(4, 1, 3, 2)

