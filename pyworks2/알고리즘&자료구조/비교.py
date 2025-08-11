# 순위 정하기
"""
a = [41, 8, 36, 77, 15]
rank = [1, 1, 1, 1, 1] #모두 1위로 설정

n = len(a)
for i in range(n):
  for j in range(n):
    if a[i] < a[j]:
      rank[i] += 1 #rank[i] = rank[i] + 1 #순위 1증가
      
'''
  i=0, j=0, 41<41, rank=1
       j=1, 41<8
       j=2, 41<36
       j=3, 41<77, rank=2(결정)
       j=4, 41<15
  i=1, j=0, 8<41, rank=2
       j=1, 8<8,
       j=2, 8<36, rank=3
       j=3, 8<77, rank=4
       j=4, 8<15, rank=5(결정)
       ...

'''
print(rank) #[2, 5, 3, 1, 4]

"""

# 함수로 구현
def ranking(a):
  rank = [1, 1, 1, 1, 1] 
  n = len(a)
  for i in range(n):
    for j in range(n):
      if a[i] < a[j]:
        rank[i] += 1 
        
  return rank

v = [41, 8, 36, 77, 15]

rank = ranking(v)
print(rank)

