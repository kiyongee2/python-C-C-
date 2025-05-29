# 바이너리 파일 읽고 쓰기
with open("data.bin", "wb") as f:
    text = "비가 내린다."
    f.write(text.encode())

with open("data.bin", "rb") as f:
    data = f.read()
    print(data.decode())

# 이미지 파일 복사하기
# 이미지 파일 읽기
with open("duck.jpg", "rb") as f1:
    data = f1.read()

# 이미지 파일 쓰기
with open(".duck_copy.jpg", "wb") as f2:
    f2.write(data)