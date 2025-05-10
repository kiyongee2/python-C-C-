# 딕셔너리

person = {} #빈 딕셔너리
print(person) # 딕셔너리 객체 출력

# 요소 추가
person['name'] = "오상식"
person['age'] = 35
person['phone'] = "010-1234-5678"

# 객체 출력
print(person)
print(type(person)) #자료형

# 특정 요소 출력
print(person['name'])

# 특정 요소 수정
person['name'] = "최지능"

# 요소 삭제
# del person['age']
person.pop('age')

# 전체 출력
for key in person:
    print(key, ':', person[key])


# 딕셔너리 생성

student = {'Jerry': 13, 'Luna': 9}
student['Tom'] = 10

print(student) #객체 출력

student['Luna'] = '8' # 요소 수정

student.pop("Jerry")  # 요소 삭제

print(student.keys()) # 키(key) 출력
print(student.values()) # 값 출력

student.clear() # 딕셔너리 삭제
print(student)


# 학생의 성적 통계
'''
student_list = [
    {"name":"이대한", "kor":80, "eng":80, "math":75},
    {"name":"박민국", "kor":70, "eng":65, "math":60},
    {"name":"오상식", "kor":75, "eng":70, "math":50},
    {"name":"최지능", "kor":90, "eng":95, "math":90}
]

# 첫번째 요소 검색
print(student_list[0])

print("======= 성적표 =======")
print(" 이름  국어 영어 수학")
for student in student_list:
    print(f'{student["name"]} {student["kor"]} {student["eng"]} {student["math"]}')
    
# 개인별 총점과 평균
print("== 개인별 총점과 평균 ==")
print(" 이름  총점  평균")
for student in student_list:
    total = student["kor"] + student["eng"] + student["math"]
    avg = total / 3
    print(f'{student["name"]} {total} {avg:.2f}')

# 과목별 총점과 평균
sum_subj = [0, 0, 0]
avg_subj = [0.0, 0.0, 0.0]

# 과목별 총점 계산
for student in student_list:
    sum_subj[0] += student["kor"]
    sum_subj[1] += student["eng"]
    sum_subj[2] += student["math"]
    
print("== 과목별 총점 ==")
print(f'국어 총점 : {sum_subj[0]}')
print(f'영어 총점 : {sum_subj[1]}')
print(f'수학 총점 : {sum_subj[2]}')

# 과목별 평균 계산
for student in student_list:
    avg_subj[0] = sum_subj[0] / len(student_list)
    avg_subj[1] = sum_subj[1] / len(student_list)
    avg_subj[2] = sum_subj[2] / len(student_list)
    
print("== 과목별 평균 ==")
print(f'국어 평균 : {avg_subj[0]:.1f}')
print(f'영어 평균 : {avg_subj[1]:.1f}')
print(f'수학 평균 : {avg_subj[2]:.1f}')
'''

# 용어 사전 만들기

print("♠ 컴퓨터 용어 사전 ♠")
# 예외 처리(비 정상적인 종료를 막아줌) : try ~ except 구문
try:
    word = input("정의되어 있는 단어를 입력하세요: ")
    
    dic = {
        "알고리즘": "어떤 문제를 해결하기 위해 정해진 일련의 절차",
        "이진수": "컴퓨터가 사용하는 0과 1만으로 이루어진 수",
        "버그": "프로그램이 적절하게 동작하는 데 실패하거나 오류가 발생하는 코드 조각"
    }

    definition = dic[word]  #검색한 단어(key)의 값(value)를 저장 
    print(definition)

except KeyError:
    print("정의된 단어가 없습니다.")


