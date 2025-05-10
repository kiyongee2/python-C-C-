# set 자료 구조
s1 = set() #빈 집합 생성
print(s1)
print(type(s1))

# 요소 중복 불가함
s2 = {1, 2, 3, 2, 3}
print(s2)

# 인덱싱 불가함 
# print(s2[1])

# set 자료 생성 
s3 = {'s', 'k', 'y'}
print(s3) # 순서 없이 출력됨

# 집합 연산
a = {1, 2, 3}
b = {2, 3, 4}

c = a & b   # 교집합
d = a | b   # 합집합
e = a - b   # 차집합

print(c)
print(d)
print(e)

# set 관련 메서드
# set 자료 생성
numbers = {1, 2, 3}

# 요소 추가
numbers.add(4)
print(numbers)

# 요소 수정 불가
# numbers[3] = 10

# 요소 삭제
numbers.remove(2)
print(numbers)

# set 자료 생성
fruits = {"apple", "banana", "grape"}

# 요소 추가
fruits.add("peach")

# 요소 삭제
fruits.remove("grape")
print(fruits)

print("apple" in fruits)
print("banana" not in fruits)
print("strawberry" in fruits)




