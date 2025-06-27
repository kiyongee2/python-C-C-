# 스택(Stack) 자료구조
# 후입선출 - 나중에 들어간 자료를 먼저 빼냄
'''
stack = []

# 자료 넣기(push)
# 10 - 20 - 30
stack.append(10)
stack.append(20)
stack.append(30)

print(stack)

# 자료 빼기(pop)
# 30 - 20 - 10
print(stack.pop())
print(stack.pop())
print(stack.pop())
'''

# 큐(Queue) 자료 구조
# 선입선출 - 먼저 들어간 자료를 먼저 빼냄
'''
queue = []

# 자료 넣기
# 10 - 20 - 30
queue.append(10)
queue.append(20)
queue.append(30)

print(queue)

# 자료 빼기
# 10 - 20 - 30
print(queue.pop(0))
print(queue.pop(0))
print(queue.pop(0))
'''

# 회문 찾기
# 순서대로 읽어도 거꾸러 읽어도 그 내용이 같은 낱말
# 기러기, 일요일, 다시 합창 합시다. mom, wow, level
# 입력 - 문자열 str
# 출력 - True / False

def palindrome(str):
    stack = []
    queue = []
    for x in str:
        # 해당 문자가 알파벳이면 
        # 큐와 스택에 그 문자를 추가(소문자)
        if x.isalpha():
            stack.append(x.lower())
            queue.append(x.lower())
            
    while queue:
        # 큐에 문자가 남아있는 동안 반복
        if queue.pop(0) != stack.pop():
            return False
        
    return True   
    
print(palindrome("Wow"))
print(palindrome("Smile"))
    
  