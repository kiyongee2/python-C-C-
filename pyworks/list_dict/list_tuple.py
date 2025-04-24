# 리스트 주요 함수(메서드)
"""
# 리스트의 요소 추가
a = [1, 2, 3]
a.append(4)
print(a)

a.insert(1, 5)
print(a)

# 리스트 요소 삭제
a.pop()
print(a)

car = ['모닝', 'BMW', '벤츠', '스포티지']
car.remove('BMW')
print(car)
print(len(car))
"""

# 리스트 복사
"""
d = [1, 2, 3, 4]
d2 = []
print("d =", d)

for i in d:
    d2.append(i)

print("d2 =", d2)

# 3의 배수로 저장
d3 = []
for i in d:
    d3.append(i * 3)
print("d3 =", d3)

dd3 = [ i * 3 for i in d]
print("dd3 =", dd3)

# 홀수만 복사하기
d4 = []
for i in d:
    if i % 2 == 1:
        d4.append(i)
print("d4 =", d4)

dd4 = [i for i in d if i % 2 == 1] 
print("dd4 =", dd4)
"""

# 문자열 함수
"""
fruit = "banana, grape, kiwi"
s = fruit.split(',')
print(s)

msg = "Hello, World"
msg = msg.replace("World", "Korea")
print(msg)

print(msg.find("H"))
print(msg.find(" "))
print(msg.find("x"))

str = "  hi, soo "
print(str.lstrip())
print(str.rstrip())
"""

# 튜플
"""
t1 = (1, )
t2 = (2, 3, 4)

print(t1 + t2)

print(t2[-1])

# t2[0] = 5
#del t2[1]
"""

# set
"""
s = {2, 4, 6, 8}
print(s)

# set() 함수 - 중복을 허용하지 않고, 순서 없음
say = set('hello')
print(say)

s.add(10)  # 요소 추가
print(s)

s.remove(4) # 요소 삭제
print(s)

s2 = set()  # 빈 집합
print(s2)
s2.add(1)
print(s2)

# 중복 제거
a = [1, 1, 1, 2, 3, 3]
set_v = set(a)

print(set_v)
print(list(set_v))
"""

A = {1, 2, 3, 4}
B = {3, 4, 5, 6}
print(A)
print(B)

print(A | B)
print(A & B)
print(A - B)

C = { x for x in range(1, 11)}
D = { x for x in range(1, 11) if x % 3 == 0}
print(C)
print(D)
