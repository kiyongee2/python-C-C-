# 리스트의 주요 함수
'''
a = [1, 2, 3]
print(a)

# 리스트의 크기
print(len(a))

# 맨 뒤에 추가
a.append(4) 

# 1번 위치에 추가
a.insert(1, 5) 

print(a)

# 맨 뒤에서 삭제
a.pop()

# 1번 위치에서 삭제
a.pop(1)

print(a)
print("---------------------------------")

car = ["Sonata", "BMW", "EV3", "IONIC6"]
print(car)

# 리스트의 크기
print(len(car))

# 추가
car.append("모닝")

# 삭제
car.pop()

# 특정 요소 삭제
car.remove("BMW")
print(car)
'''

# 리스트의 정렬과 뒤집기
n = [1, 4, 3, 2]
n.sort()
print(n)

lower = ['b', 'c', 'a']
lower.reverse()
print(lower)

n2 = [1, 3, 5, 4, 2]
n2.sort()
n2.reverse()
print(n2)

# 리스트의 복사
"""
a1 = [1, 2, 3, 4, 5]
a2 = []
a3 = []

print("a1 =", a1)

# a1을 a2에 복사
for i in a1:
    a2.append(i)

print("a2 =", a2)

# a1의 요소중 홀수만 저장
total = 0
for i in a1:
    if i % 2 == 1:
        a3.append(i)
        total += i

print("a3 =", a3)
print("홀수의 합계:", total)
"""

# 리스트 슬라이싱
'''
carts = ["라면", "커피", "계란", "토마토"]

print(carts[0:4])
print(carts[:])

print(carts[0:3])
print(carts[0:-1])

print(carts[0:2])
print(carts[0:-2])

# 리스트 내포
arr1 = [1, 2, 3, 4, 5]
arr2 = []
arr3 = []
arr4 = []

# arr1의 요소를 3의 배수로 저장
for i in arr1:
    arr2.append(i * 3)
print("arr2 =", arr2)

# 리스트 내포 - 3의 배수로 저장
arr3 = [i * 3 for i in arr1]
print("arr3 =", arr3)

# arr1에서 홀수만 저장
arr4 = [i for i in arr1 if i % 2 == 1]
print("arr4 =", arr4)
'''

# 리스트의 정렬
n_list = [60, 40, 90, 50, 80, 70]

# 오름차순 정렬
n = len(n_list)
for i in range(0, n):
    for j in range(0, n-1):
        if n_list[j] > n_list[j+1]:
            n_list[j], n_list[j+1] = n_list[j+1], n_list[j] 

'''
  i=0, j=0, 40, 60
       j=1, 40, 60, 90
       j=2, 40, 60, 50, 90
       j=3, 40, 60, 50, 80, 90
       j=4, 40, 60, 50, 80, 70, 90 [저장]
  i=1, j=0, 40, 60
       j=1, 40, 50, 60
       j=2, 40, 50, 60, 80
       j=3, 40, 50, 60, 70, 80
       j=4, 40, 50, 60, 70, 80, 90[저장]
'''

print("*** 오름차순 정렬 ***")
for i in n_list:
    print(i, end=' ')


