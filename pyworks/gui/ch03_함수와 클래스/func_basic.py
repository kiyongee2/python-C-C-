
def hello(): #함수정의
    print("Hello World !")
    print("안녕하세요 !")
    
def sum1(start, end = 100): #함수정의
    sum=0
    for i in range(start, end+1):
        sum += i
    print(f"1부터 {end} 까지의 합 : {sum}") 
    
def test1():
    return 100

def test2():
    return

hello()
# sum1(1, 10)
# sum1(1, 100)
# sum(5)

ret = test1()
print("ret : ", ret)

ret2 = test2()
print("ret2 : ", ret2)


print("\n반환 값 구분")
def add_and_mul(a,b):
    return a+b, a*b

result = add_and_mul(10,3) #반환 값은 하나이며 tuple 로 저장
print(f"type(result): {type(result)}")
print(result)

add, mul = result
print(f"type(add): {type(add)}, {add}")
print(f"type(mul): {type(mul)}, {mul}")