"""
# 리스트 - 여러 개의 연속적인 값을 저장할 때 사용하는 자료구조
# 리스트 이름 = [값1, 값2, 값3...]
"""
# 문자형 리스트

# 리스트(배열) 생성
carts = ["라면", "커피", "계란", "토마토"]

# 리스트 객체 출력
print(carts)
print(type(carts)) #자료형

# 요소 접근(인덱싱)
print(carts[0])
print(carts[3])
print(carts[-1])

# 요소 수정
carts[1] = "우유"

# 요소 삭제
del carts[2]

# 리스트 출력
print(carts)

# 정수형 리스트
# 리스트 생성 - 요소 중복 가능
numbers = [10, 40, 30, 10, 30]

# 리스트 출력
print(numbers) 

# 리스트의 크기
print("리스트의 크기: ", len(numbers))

# 요소 수정
numbers[2] = 10

# 요소 삭제
del numbers[0]

# 리스트 출력
print(numbers)

# for 반복문
# in 리스트 - 리스트 존재 유무 확인
print(30 in numbers)
print(50 in numbers)
print(50 not in numbers)
print()

# 전체 요소 출력
for num in numbers:
    print(num, end=' ')
print()

# 40보다 작은 값 출력
for num in numbers:
    if num < 40:
        print(num, end=' ')
print()

# 음식 분류하기 - 한식, 일식, 중식
foods = ["비빔밥", "짜장면", "초밥", "김치찌게"]

for food in foods:
    if food in ["짜장면",  "짬뽕"]:
        print(f'{food}는(은) 중식입니다.')
    elif food in ["초밥", "우동"]:
        print(f'{food}는(은) 일식입니다.')
    else:
        print(f'{food}는(은) 한식입니다.')

# 리스트의 연산
score = [70, 80, 50, 60, 90, 40]
total = 0
count = len(score)

for i in score:
    total += i

avg = total / count

print("개수:", count)
print("합계:", total)
print("평균:", avg)

# 내장함수 sum()과 비교
print("합계:", sum(score))
print("----------------------")

# 최고 점수, 최저 점수
max_v = score[0]  #최대값 설정
for i in score:
    if max_v < i:
        max_v = i

min_v = score[0] #최소값 설정
for i in score:
    if min_v > i:
        min_v = i

print("최고 점수:", max_v)
print("최저 점수:", min_v)

# 내장함수 - max(), min()과 비교
print("최고 점수:", max(score))
print("최저 점수:", min(score))

# for ~ range()
for i in range(count):
    if max_v < score[i]:
        max_v = score[i]
print("----------------------")

# 최고 점수, 최저 점수 위치 찾기
max_idx = 0 #최대값 위치 설정
for i in range(count):
    if score[max_idx] < score[i]:
        max_idx = i

min_idx = 0 #최소값 위치 설정
for i in range(0, count):
    if score[min_idx] > score[i]:
        min_idx = i
        
print("최고 점수 위치:", max_idx)
print("최저 점수 위치:", min_idx)
