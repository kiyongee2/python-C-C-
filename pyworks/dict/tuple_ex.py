# 튜플 자료형
# 빈 튜플 생성
t1 = ()
print(t1)

# 요소 1개 저장
# t2 = (1) #콤머를 붙이지 않으면 정수로 인식함
# print(type(t2))

t2 = (1, ) 
print(t2)
print(type(t2))

# 여러개 요소 저장
t3 = (2, 3, 4)

# t3 인덱싱
print(t3[0])
print(t3[-1])

# t3 수정 및 삭제 불가
# t3[1] = 10
# del t3[2]

# 튜플 합치기
t4 = t2 + t3
print(t4)

# 문자 저장 튜플
t5 = ('a', 'b', 'c', 'd')
print(t5)

# t3 슬라이싱
print(t5[1:3])
print(t5[1:])
print(t5[0:4])
print(t5[:])
