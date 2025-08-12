# 순차 탐색
# 46 찾기
'''
v = [8, 70, 33, 15, 46, 83, 21]

n = len(v)
for i in range(n):
    if v[i] == 46:  #5번 비교
        print("찾음")

# 찾는 값의 위치
# search_list(리스트, 찾는 값)
def search_list(a, x):
    for i in range(len(a)):
        if a[i] == x:
            return i  #찾음
    return -1 #찾지 못함

v = [8, 70, 33, 15, 46, 83, 21]

print(search_list(v, 15))
print(search_list(v, 100))
'''

# 이분 탐색
def binary_search(a, x):
    start = 0        #시작 위치
    end = len(a) - 1 #마지막 위치
    
    while start <= end:
        mid = (start + end) // 2 #탐색 범위의 중간 위치값
        if x == a[mid]:
            return mid
        elif x > a[mid]:
            start = mid + 1
        else:
            end = mid - 1
    
    return -1

v = [8, 70, 33, 15, 46, 83, 21]

print(binary_search(v, 46))
print(binary_search(v, 100))


