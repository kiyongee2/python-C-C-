# 딕셔너리 자료형 사용
# 중괄호({}) 사용함
# 딕셔너리 생성

person = {}  #빈 딕셔너리 생성
print(person) #{}

# 요소 추가 - 키:값의 형태
person['name'] = "오상식"
person['age'] = 35
person['phone'] = "010-1234-5678"

print(person) # {'name': '오상식', 'age': 35, 'phone': '010-1234-5678'}
print(type(person)) # dict

# 특정 요소 접근(조회) - 키(key)로 값을 검색함
print(person['age']) #35

# 요소 수정 - 이름을 '오상식'을 '최지능'으로 변경
person['name'] = '최지능'

# 요소 삭제 - phone 삭제
del person['phone']
# person.pop('phone')

# 전체 출력
for key in person:
    print(key, ':', person[key])

# 딕셔너리 생성과 초기화(저장)

student = {'정우': 13, '유진': 9}
print(student)  #{'정우': 13, '유진': 9}

print(student.keys())
print(student.values())

# 요소 추가
student['민영'] = 11

# 요소 수정 - 키로 검색
student['유진'] = 8

# 요소 삭제 - 키로 삭제
res = student.pop('정우')

print(student) # {'유진': 8, '민영': 11}
print(res) #13

for st in student:
    print(st, ':', student[st])

