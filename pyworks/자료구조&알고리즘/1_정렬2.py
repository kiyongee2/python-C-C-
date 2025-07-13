# 병합 정렬
'''
def merge_sort(a):
  n = len(a)
  if n <= 1:
    return
  
  # 그룹을 나누어 병합 정렬을 호출하는 과정
  mid = n // 2  #중간을 기준으로 두 그룹으로 나눔
  g1 = a[:mid]
  g2 = a[mid:]
  merge_sort(g1)
  merge_sort(g2)
  # 두 그룹을 하나로 병합
  i1 = 0
  i2 = 0
  ia = 0  #병합 리스트
  while i1 < len(g1) and i2 < len(g2):
    if g1[i1] < g2[i2]:
      a[ia] = g1[i1]  #작은 값은 병합 리스트에 저장
      i1 += 1  #인덱스 오른쪽으로 이동
      ia += 1
    else:
      a[ia] = g2[i2]
      i2 += 1
      ia += 1
  # 아직 남아있는 자료들을 결과에 추가
  while i1 < len(g1):
    a[ia] = g1[i1]
    i1 += 1
    ia += 1
  while i2 < len(g2):
    a[ia] = g2[i2]
    i2 += 1
    ia += 1
    
d = [6, 8, 3, 9, 10, 1, 2, 4, 7, 5]
merge_sort(d)
print(d)
'''

# 퀵 정렬
def quick_sort_sub(a, start, end):
  if end - start <= 0:
    return 
  
  # 기준 값을 정하고 기준 값에 맞춰 리스트 안에서 각 자료의 위치를 맞춤
  # [ 기준 값보다 작은 값들, 기준 값, 기준 값보다 큰 값들]
  pivot = a[end] #편의상 리스트의 마지막 값을 기준 값으로 정함
  i = start
  for j in range(start, end):
    if a[j] <= pivot:
      a[i], a[j] = a[j], a[i]
      i += 1
  a[i], a[end] = a[end], a[i]
  # 재귀 호출 부분
  quick_sort_sub(a, start, i - 1) # 기준 값보다 작은 그룹을 재귀 호출로 다시 정렬
  quick_sort_sub(a, i + 1, end) # 기준 값보다 큰 그룹을 재귀 호출로 다시 정렬
  
# 리스트 전체(0 ~ len(a) - 1)을 대상으로 재귀 호출 함수 호출
def quick_sort(a):
  quick_sort_sub(a, 0, len(a) - 1)
  
d = [6, 8, 3, 9, 10, 1, 2, 4, 7, 5]
quick_sort(d)
print(d)
  