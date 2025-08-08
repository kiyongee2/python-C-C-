# 최대값 계산

# 두 수 중 큰수
x = 10
y = 20

if x > y:
  max_v = x
else:
  max_v = y
  
print("두 수중 큰수:", max_v)

# 세 수 중 큰수
a = 2
b = 1
c = 3

max_v = a #최대값 설정
if b > max_v:
  max_v = b
if c > max_v:
  max_v = c
  
print("최대값:", max_v)

# 함수로 구현
def max3(a, b, c):
  max_v = a
  if b > max_v:
    max_v = b
  if c > max_v:
    max_v = c
  return max_v

print(f"max3(3, 1, 2) = {max3(3, 1, 2)}")
print(f"max3(3, 2, 1) = {max3(3, 2, 1)}")
print(f"max3(2, 3, 1) = {max3(2, 3, 1)}")
print(f"max3(2, 1, 3) = {max3(2, 1, 3)}") 

# 리스트에서 최대값 계산

score = [80, 70, 50, 90, 70]

max_v = score[0] #최대값 설정
n = len(score)
for i in range(n):
  if score[i] > max_v:
    max_v = score[i]
    
print("최고 점수:", max_v)

# 함수로 구현
def find_max(a, n):
  max_v = a[0] #최대값 설정
  for i in range(n):
    if a[i] > max_v:
      max_v = a[i]
  return max_v

def find_max_idx(a, n):
  max_idx = 0
  for i in range(n):
    if a[i] > a[max_idx]:
      max_idx = i
  return max_idx
  
score = [80, 70, 50, 90, 70]

# 최고 점수
max_score = find_max(score, len(score))
print("최고 점수:", max_score)

# 최고점수의 위치
max_score_idx = find_max_idx(score, len(score))
print("최고 점수의 위치:", max_score_idx)

# 파이썬 제공 함수 - max() 사용
print("최고 점수:", max(score))


# 사람의 키 입력받아 최대값 구하기
height = []
number = int(input("사람수 입력: "))
print(number)

for i in range(number):
  h = float(input(f"{i + 1}번 키 입력: "))
  height.append(h)
  
print(f"최대값은 {find_max(height, number)}")

