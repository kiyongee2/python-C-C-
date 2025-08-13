# 파일에 쓰기 추가 - "a" 모드 사용
f = open("c:/pyfile/file1.txt", "a")

f.write("Have a good time\n")
f.write("오늘도 즐거운 하루!\n")

print("쓰기 추가 완료!")
f.close()

# 파일 읽기
f = open("c:/pyfile/file1.txt", "r")

data = f.read()
print(data)

f.close()

