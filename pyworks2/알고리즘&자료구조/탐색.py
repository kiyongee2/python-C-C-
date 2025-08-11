# 순차 탐색

v = [5, 9, 2, 4, 8, 6, 7, 1, 3]
x = 6 #찾을 값
found = 0  #상태(토글) 변수
n = len(v)

for i in range(n):
  if v[i] == x:
    print(f"{x}은 v[{i}]에서 찾음")
    found = 1 #찾음
    break
  
if not found:
  print("찾을 수 없음")
  
'''
if v[i] == x:
    print("찾음")
else:
    print("못찾음")
    
# 찾은후에도 못찾음을 계속 반복함
'''

# 함수로 구현
"""
def search_list(a, x):
  n = len(v)
  for i in range(n):
    n = len(a)
    if a[i] == x:
      return i
  return -1
  
v = [5, 9, 2, 4, 8, 6, 7, 1, 3]
  
print(search_list(v, 6)) #5
print(search_list(v, 11)) #-1
"""

# 정렬된 리스트
a = [1, 4, 9, 16, 25, 36, 49, 64, 81]
x = 36 #검색할 값

start = 0  #첫 인덱스
end = len(a) - 1 #마지막 인덱스

while start <= end:
  mid = (start + end) // 2 #중간 인덱스
  if x == a[mid]:
    print(f"{x}는(은) a{[i]}에 있습니다.")
    break
  elif x > a[mid]:
    start = mid + 1 
  else:
    end = mid -1


# 함수로 구현
def binary_search(a, x):
  start = 0
  end = len(a) - 1

  while start <= end:
    mid = (start + end) // 2
    if x == a[mid]:
      print(f"{x}는(은) a{[i]}에 있습니다.")
      return mid
    elif x > a[mid]:
      start = mid + 1
    else:
      end = mid -1
      
  return -1

v = [1, 4, 9, 16, 25, 36, 49, 64, 81]

print(binary_search(v, 36)) #5
print(binary_search(v, 100)) #-1
