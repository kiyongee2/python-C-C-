# 순위 정하기
a = [41, 8, 36, 77, 15]
rank = [1, 1, 1, 1, 1] #모두 1위로 설정

n = len(a)
for i in range(n):
  for j in range(n):
    if a[i] < a[j]:
      rank[i] = rank[i] + 1 #순위 1증가
      
print(rank) #[2, 5, 3, 1, 4]

