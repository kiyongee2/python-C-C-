# 구구단을 단보다 곱하는 수가 작거나 같은 경우까지만 출력하기
for i in range(2, 10):
    print('[', i, '단]')
    for j in range(1, 10):
        if i < j:
            break
        print(f"{i} x {j} = {i * j}")
'''
  i=2, j=1, 2 < 1, 2x1=2
       j=2, 2 < 2, 2x2=4
       j=3. 2 < 3(True) break 실행(빠져나옴)

'''