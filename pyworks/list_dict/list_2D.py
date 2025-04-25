# 2차원 리스트
a = [
    [10, 20],
    [30, 40],
    [50, 60]
]

# 리스트 출력
print(a)

# 리스트의 크기
print("리스트의 크기(행) : ", len(a))
print("리스트의 크기(열) : ", len(a[0]))
print("리스트의 크기(열) : ", len(a[1]))

# 특정 요소 검색
print(a[0][1])
print(a[1][0])

# 전체 출력
for x, y in a:
    print(x, y)
print()

# 전체 출력 - range() 사용
for i in range(len(a)):
    for j in range(len(a[i])):
        print(a[i][j], end=' ')
    print()

# 리스트 추가
a.append([70, 80])
print(a)

# 리스트 수정
a[1][1] = 100

# 리스트 삭제
del a[2] #2행 삭제
print(a)

# 열 삭제
for row in a:
    del row[1]
print(a)

a.clear() #a 리스트 삭제
print(a)