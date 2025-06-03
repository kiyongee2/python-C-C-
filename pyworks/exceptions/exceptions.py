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

'''
try:
    data= [50, 40, 80, 60]
    x = input("정수 입력(0~4): ")
    num = int(x)
    print(data[num])
except IndexError as e:
    print("범위를 초과했어요. 0~ 4까지 입력하세요")
except ValueError as e:
    print("유효한 숫자가 아닙니다. 다시 입력바랍니다.")
'''

class Animal:
    # 상속받은 클래스에서 반드시 cry()를 구현하도록 함
    def cry(self):
        raise NotImplementedError

#Animal을 상속한 Dog
class Dog(Animal):
    def cry(self):
        print("멍멍!")

#Animal을 상속한 Cat
class Cat(Animal):
    def cry(self):
        print("야~옹!")

# 인스턴스 생성
dog = Dog()
dog.cry()

cat = Cat()
cat.cry()
