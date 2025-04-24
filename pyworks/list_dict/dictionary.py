# 딕셔너리
"""
p = {}
print(p)

# 요소 추가
p['name'] = "오상식"
p['age'] = 35
print(p)
p['phone'] = "010-1234-5678"

# 특정 요소 출력
print(p['name'])

# 요소 삭제
del p['age']
print(p)

# 전체 출력
for key in p:
    print(key, ':', p[key])


d = {'Tomas': 13, 'Jane': 9}
d['Mike'] = 10
print(d)

del d['Jane']  # 요소 삭제

print(d.keys())
print(d.values())
print(d.items())

for key, val in d.items():
    print(key, val)
"""

# 학생의 성적 통계
"""
student = [
    {"name":"이대한", "kor":80, "eng":80, "math":75},
    {"name":"박민국", "kor":70, "eng":65, "math":60},
    {"name":"오상식", "kor":75, "eng":70, "math":50},
    {"name":"최지능", "kor":70, "eng":90, "math":90}
]

print(student[0])
for std in student:
    print(std["name"], std['kor'], std['eng'], std['math'])

print("== 개인별 성적표 ==")
print(" 이름  국어 영어 수학")
for std in student:
    print(f'{std["name"]}  {std["kor"]}  {std["eng"]}  {std["math"]}')
    
# 개인별 총점과 평균
print("== 개인별 총점과 평균 ==")
print(" 이름  총점  평균")
for std in student:
    total = std["kor"] + std["eng"] + std["math"]
    avg = total / 3
    print(f'{std["name"]} {total} {avg:0.1f}')

# 과목별 총점과 평균
sum_subj = [0, 0, 0]
avg_subj = [0.0, 0.0, 0.0]

for std in student:
    sum_subj[0] += std["kor"]
    sum_subj[1] += std["eng"]
    sum_subj[2] += std["math"]
    
print("== 과목별 총점 ==")
print(f'국어 총점 : {sum_subj[0]}')
print(f'영어 총점 : {sum_subj[1]}')
print(f'수학 총점 : {sum_subj[2]}')

for std in student:
    avg_subj[0] = sum_subj[0] / len(student)
    avg_subj[1] = sum_subj[1] / len(student)
    avg_subj[2] = sum_subj[2] / len(student)
    
print("== 과목별 평균 ==")
print(f'국어 평균 : {avg_subj[0]}')
print(f'영어 평균 : {avg_subj[1]}')
print(f'수학 평균 : {avg_subj[2]}')
"""

# 용어 사전 만들기
"""
print("♠ 용어 사전 ♠")
# 예외 처리(비 정상적인 종료를 막아줌) : try ~ except 구문
try:
    word = input("정의되어 있는 단어를 입력하세요: ")
    
    dic = {
        "알고리즘": "어떤 문제를 해결하기 위해 정해진 일련의 절차",
        "이진수": "컴퓨터가 사용하는 0과 1만으로 이루어진 수",
        "버그": "프로그램이 적절하게 동작하는 데 실패하거나 오류가 발생하는 코드 조각"
    }

    definition = dic[word]
    print(definition)
except KeyError:
    print("정의된 단어가 없습니다.")

"""

# 2차원 리스트의 선언 및 생성
"""
d = [
    [10, 20],
    [30, 40],
    [50, 60]
]
print(d[0][0])
print(d[0][1])
print(d[1][0])
print(d[1][1])

for x, y in d:
    print(x, y)

print(len(d))  # 행의 크기
print(len(d[0]))

for i in range(len(d)):
    for j in range(len(d[i])):
        print(d[i][j])
    print()

# 요소 추가
d.append([70, 80])
print(d)

# 2차원 리스트의 연산
sum_v = 0
count = 0

for i in range(len(d)):
    for j in range(len(d[i])):
        count += 1
        sum_v += d[i][j]
avg = sum_v / count

print("합계:", sum_v)
print("개수:", count)
print("평균:", avg)
"""
