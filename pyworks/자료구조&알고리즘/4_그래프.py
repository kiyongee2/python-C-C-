# 입력 - 친구 관계 그래프 g, 친구 찾을 자신 start
# 출력 - 모든 친구의 이름

def print_all_friends(g, start):
    queue = []
    done = set()
    
    queue.append(start)
    done.add(start)
    
    while queue:
        p = queue.pop(0)
        print(p)
        for x in g[p]:
            if x not in done:
                queue.append(x)
                done.add(x)

# 친구 관계 리스트
# A와 B가 친구이면
# A의 친구 리스트에도 B가 나오고 B의 친구 리스트에도 A가 나옴
fr_info = {
    'Summer': ['John', 'Justin', 'Mike'],
    'John': ['Summer', 'Justin'],
    'Justin': ['John', 'Summer', 'Mike', 'May'],
    'Mike': ['Summer', 'Justin'],
    'May': ['Justin', 'Kim'],
    'Kim': ['May'],
    'Tom': ['Jerry'],
    'Jerry': ['Tom'],
}

print_all_friends(fr_info, 'Summer')
print()
print_all_friends(fr_info, 'Jerry')