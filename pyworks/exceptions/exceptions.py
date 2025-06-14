# 여러가지 예외 발생

#TypeError: can only concatenate str (not "int") to str
# print('2' + 2)

# NameError: name 'num' is not defined.
# calc1 = 4 + num * 3
# print(calc1)

# ZeroDivisionError: division by zero
# calc2 = 10 * (1/0)
# print(calc2) 

'''
while True:
    x = input("숫자를 입력하세요(q 종료): ")
    if x == 'q':
        print("프로그램 종료!")
        break
    
    try:
        num = int(x)
        print(num)
    except ValueError:
        print("유효한 숫자가 아닙니다. 다시 입력해 주세요")
'''

try:
    data= [50, 40, 80, 60]
    x = input("정수 입력(0~3): ")
    num = int(x)
    print(data[num])
except IndexError as e:
    print("범위를 초과했어요. 0 ~ 3까지 입력하세요")
except ValueError as e:
    print("유효한 숫자가 아닙니다. 다시 입력바랍니다.")

