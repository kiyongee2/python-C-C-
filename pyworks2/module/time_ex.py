# 모듈(module) - 파이썬의 파일(.py)로써 변수, 함수, 클래스의 모아 놓음
# 모듈을 사용할 때 import를 사용함
# 시간 관련 모듈
import time

# 시간은 초로 계산됨(1970. 01. 01 자정 이후부터 지금까지 흐른시간)
print(time.time()) # 1747535857.981002

# 일로 환산
print(round((time.time() / (24*60*60))))  #20226일

# 년으로 환산
print(round(time.time() / (365*24*60*60)))  # 55년 

# 수행시간 측정
start = time.time() # 시작 시간

n = 10
for i in range(1, n + 1):
    print(i)
    time.sleep(0.5)  # 0.5초 간격으로 대기

end = time.time()  # 종료 시간
print(f"수행시간: {(end - start):.3f}")