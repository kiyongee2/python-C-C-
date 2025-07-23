# 이차원 리스트
# 행과 열의 테이블 형태이다.

# 리스트 생성
'''
a = [10, 20]  # 1차원 리스트
print(a)
print(type(a))
print("a의 크기:", len(a)) # 2
'''

# 2차원 리스트
"""
d = [
    [10, 20], 
    [30, 40],
    [50, 60]
] 
# print(d)
# print(type(d))

# 인덱싱
print(d[0])  # 0번 인덱스 [10, 20]
print(d[1])  # 1번 인덱스 [30, 40]
print(d[0][0]) # 10
print(d[0][1]) # 20
print(d[1][0]) # 30
print(d[1][1]) # 40

# 리스트의 크기
print("d의 크기(행):", len(d)) # 3
print("d의 크기(열):", len(d[0])) # 2
print("d의 크기(열):", len(d[1])) # 2

# 리스트의 전체 요소 출력 1
for x, y in d:
    print(x, y)

# 전체 출력 2 - range() 사용
for i in range(len(d)):
    for j in range(len(d[i])):
        print(d[i][j], end=' ')
    print() #행 바꿈


# range()

print(list(range(3)))
print(list(range(0, 3)))

# 1부터 4까지 출력
for i in range(1, 5):
    print(i, end=' ')
print()

for i in range(5):
    print(i, end=' ')
"""

d1 = [
    [10, 20], 
    [30, 40],
    [50, 60]
] 

print(d1) # 객체 출력

# 요소 추가
d1.append([70, 80])

# 요소 수정 - 40을 100으로 변경
d1[1][1] = 100
# [[10, 20], [30, 100], [50, 60], [70, 80]]
# 요소 삭제 - [50, 60] 삭제
del d1[2]

print(d1) # [[10, 20], [30, 100], [70, 80]]

# d1 리스트 삭제
d1.clear() 
print(d1) # [] - 빈 리스트
 