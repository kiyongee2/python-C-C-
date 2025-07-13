# 정렬
'''
a = [60, 5, 33, 12, 97, 24]

# sort() 사용
a.sort()  #오름차순
print(a)

a.sort(reverse=True) #내림차순
print(a)
'''

# 순위(ranking)
'''
score = [60, 90, 80, 100, 70]
rank = [1, 1, 1, 1, 1]
n = len(score)

# 행, 열을 모두 순회함
for i in range(0, n):
    for j in range(0, n):
        if score[i] < score[j]:
            rank[i] = rank[i] + 1
            
print("rank =", rank) 
'''

# 단순 정렬
"""
a = [3, 2, 5, 1, 4]

n = len(a)
for i in range(0, n):
    for j in range(0, n-1):
        if a[j] > a[j+1]:
            a[j], a[j+1] = a[j+1], a[j]
            sw = 1  #교환 있음
            '''
            temp = a[j]
            a[j] = a[j + 1]
            a[j + 1] = temp
            '''
    if not sw: #교환 없음
        break
print("a =", a)       
"""

# 선택 정렬
"""
def find_min_idx(a): #최소값 위치 찾기
    n = len(a)
    min_idx = 0
    for i in range(1, n):
        if a[i] < a[min_idx]:
            min_idx = i
    return min_idx

def sel_sort(a):
    result = []
    while a:
       min_idx = find_min_idx(a) #최소값의 위치 저장
       value = a.pop(min_idx) #최소값을 꺼내어 저장함
       result.append(value) #value를 리스트 맨 뒤에 추가
    return result

v = [3, 2, 5, 1, 4]
print(sel_sort(v))
"""

# 단축 삽입 정렬
def sel_sort(a):
    n = len(a)
    for i in range(0, n-1): #0부터 n-2까지 반복
        min_idx = i    # 0을 최소값으로 설정
        for j in range(i + 1, n): #1부터 n-1까지 반복
            if a[j] < a[min_idx]:
                min_idx = j
        a[i], a[min_idx] = a[min_idx], a[i]
    return a

v = [3, 2, 5, 1, 4]
print(sel_sort(v))