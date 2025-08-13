"""
# 파일 - 텍스트 파일(문자), 바이너리 파일(이미지, 음성, 영상)
# 파일 열기 > 파일 쓰기 > 파일 종료
"""

# 파일 열기 - open(파일경로, 모드)
# 절대경로, 상대경로
# w - 쓰기 모드
try:
  f = open("c:/pyfile/file1.txt", "w")

  # 파일에 문자 쓰기
  f.write("하늘\n")
  f.write("cloud\n")
  price = 5000 * 2
  f.write(f'{price}\n')
  # f.write(100) # 숫자 불가
  f.write("3.14\n")

  # 파일 종료
  f.close()
except FileNotFoundError:
  print("파일을 찾을 수 없습니다.")