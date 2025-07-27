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
print(d)
print(type(d))

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

# 전체 출력 - 인덱싱 방식
for i in range(len(d)):
    for j in range(len(d[i])):
        print(d[i][j], end=' ')
    print() #행 바꿈

# 전체 출력 - 행과 요소 순회
for row in d:
    for val in row:
        print(val, end=' ')
    print()
    
# 행 단위로 출력
for row in d:
    print(row)
    
# 특정 열(1열: 인덱스 0)
for row in d:
    print(row[0])

# 요소 추가
d.append([70, 80])
print(d)

# 요소 수정 - 40을 100으로 변경
d[1][1] = 100
# [[10, 20], [30, 100], [50, 60], [70, 80]]

# 요소 삭제 - [50, 60] 삭제
del d[2]
print(d) # [[10, 20], [30, 100], [70, 80]]

# 특정 열 삭제
for row in d:
    del row[0]
print(d)

# d 리스트 삭제
d.clear() 
print(d) # [] - 빈 리스트
"""

# 리스트의 연산
"""
d2 = [
    [10, 20], 
    [30, 40],
    [50, 60, 70],
] 

total = 0
count = 0

#print(len(d2[2])) #3
# 계산 1
'''
for i in range(len(d2)):
    for j in range(len(d2[i])):
        count += 1
        total += d2[i][j]
'''
        
# 계산 2
for row in d2:
    for val in row:
        count += 1
        total += val
        
print("합계:", total)
print("개수:", count)

# 평균 = 총점 / 개수
avg = total / count
print("평균:", avg)
"""

# 학생 4명의 수학, 영어 성적

score = [
    [80, 70],
    [80, 90],
    [50, 60],
    [70, 70]
]

# 개인별 총점과 평균
n = len(score)
total = 0

print("**** 개인별 성적 통계 *****")
print("수학 영어 총점 평균")
for row in range(0, n):
    total = score[row][0] + score[row][1]
    print(score[row][0], score[row][1], total, total/2)

# 과목별 총점과 평균
sum_subject = [0, 0]  #수학 총점
avg_subject = [0.0, 0.0] #영어 총점

for row in range(0, n):
    sum_subject[0] += score[row][0]
    sum_subject[1] += score[row][1]
    
avg_subject[0] = sum_subject[0] / n  #수학 평균
avg_subject[1] = sum_subject[1] / n  #영어 평균

print("**** 과목별 평균 점수 *****")
print(f"수학 평균: {avg_subject[0]}점")
print(f"영어 평균: {avg_subject[1]}점")

