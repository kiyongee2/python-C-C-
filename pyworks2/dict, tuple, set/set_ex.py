# set(집합) 자료 구조
# 중괄호({}) 사용
# 중복 허용되지 않고, 순서가 없다.
s1 = {1, 2, 3, 1, 2}
print(s1)  #{1, 2, 3}
print(type(s1)) #<class 'set'>

s2 = {'s', 'k', 'y'}
print(s2) #{'k', 's', 'y'}

# print(s2[0]) # 인덱싱 접근 불가

# 빈 집합 생성
s2 = set() 
print(s2) #set()

# 요소 추가 - add() 함수 사용
s2.add('a')
s2.add('p')
s2.add('p')
s2.add('l')
s2.add('e')
print(s2) #{'a', 'l', 'e', 'p'}

# 요소 수정 불가
# s2[1] = 'm'

# 요소 삭제
s2.remove('a')
print(s2) # {'l', 'p', 'e'}

# 집합 연산자
a = {1, 2, 3}
b = {2, 3, 4}

c = a & b  #교집합
d = a | b  #합집합
e = b - a  #차집합

print(c) #{2, 3}
print(d) #{1, 2, 3, 4}
print(e) #{4}

# 리스트에서 중복 제거
a = [1, 1, 1, 2, 3, 3]
set_v = set(a)

print(set_v) #{1, 2, 3}
print(list(set_v)) #[1, 2, 3]