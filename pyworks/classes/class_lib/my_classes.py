# my_classes.py

class Student:
    def __init__(self, name, grade):
        self.name = name    #인스턴스 변수
        self.grade = grade

    def learn(self):
        print("수업을 듣습니다.")

    def __str__(self):  #정보 출력 메서드
        return f"{self.name} 학생은 {self.grade}학년입니다."

# 외부에서 사용할 때 실행 방지
if __name__ == "__main__":
    # Student 인스턴스 생성
    s1 = Student("김하나", 1)
    print(s1)
    s1.learn()

    s2 = Student("이돌", 3)
    print(s2)
    s2.learn()

# 객체 리스트
# 리스트에서 인스턴스 생성
students = [
    Student("김하나", 1),
    Student("박열", 3),
    Student("이넷", 2)
]

print("***** 학생 명단 *****")
for st in students:
    print(st)

# 계산기
class Calculator:
    def __init__(self): 
        self.x = 0

    def add(self, y): # 덧셈
        self.x += y
        return self.x
    
    def sub(self, y): # 뺄셈
        self.x -= y
        return self.x
    
    def mul(self, y): # 곱셈
        self.x *= y
        return self.x
    
    def div(self, y): # 나눗셈
        if y != 0:
            self.x /= y
        else:
            print("Error: 0으로 나눌 수 없습니다.")
        return self.x
    
cal = Calculator()
print(cal.add(10))   #10
print(cal.sub(4))    #6
print(cal.mul(2))    #12
# print(cal.div(10)) #1.2
# print(cal.div(0))  #12

# try:
#     self.x /= y
# except ZeroDivisionError:
#     print("Error: 0으로 나눌 수 없습니다.")
# return self.x

# 정보 은닉(접근 제어)
# 기본적으로 public(접근 가능), private(접근 불가능)
'''
class BankAccount:
    def __init__(self):
        self.__ano = ""
        self.__owner = ""
        self.__balance = ""
    
account1 = BankAccount()
print(account1.__ano)
'''

"""
# setter, getter 사용
class BankAccount:
    def __init__(self):
        self.__ano = ""
        self.__owner = ""
        self.__balance = ""

    def set_ano(self, ano): #계좌번호 설정 메서드
        self.__ano = ano

    def get_ano(self): #계좌번호 반환 메서드
        return self.__ano
    
    def set_owner(self, owner): #계좌주 설정 메서드
        self.__owner = owner

    def get_owner(self):  #계좌주 반환 메서드
        return self.__owner
    
    def set_balance(self, balance): #잔고 설정 메서드
        self.__balance = balance

    def get_balance(self): #잔고 반환 메서드
        return self.__balance
    
account1 = BankAccount()
# setter
account1.set_ano("12-1234")
account1.set_owner("김기용")
account1.set_balance(20000)

# getter
print("계좌번호:", account1.get_ano())
print("계좌주:", account1.get_owner())
print("잔고:", account1.get_balance())
"""

# 쇼핑몰 장바구니 구현
class Cart:
    def __init__(self, user):
        self.user = user
        self.items = []  #장바구니 리스트
    
    def add(self, *goods):  # 여러 상품 한 번에 추가
        self.items.extend(goods)
    
    def remove(self, item):
        if item in self.items:
            self.items.remove(item)
    
    def __str__(self):
        return f"{self.user}'s 장바구니: {self.items}"

# 사용 예시
my_cart = Cart("김기용")
my_cart.add("계란", "우유", "라면")
my_cart.remove("우유")
print(my_cart)  # "김철수's 장바구니: ['계란', '라면']"