# 클래스
"""
class Student:
    name = "김하나"
    grade = 5

st1 = Student()
print(st1.name, st1.grade)

# 생성자(constructor) - 기본 생성자
class Student:
    def __init__(self):
        self.name = "콩쥐"
        self.grade = 1
        print("생성자")

    def learn(self):
        print("수업을 듣습니다.")

s = Student() # 객체 생성
print(s)  # 객체 출력
print(type(s)) # 자료형 : 클래스
print(f"{s.name} 학생은 {s.grade}학년입니다.")
s.learn()

# 매개변수가 있는 생성자
class Student:
    def __init__(self, name, grade):
        self.name = name
        self.grade = grade

    def learn(self):
        print("수업을 듣습니다.")

s1 = Student("김하나", 1)
print(f"{s1.name} 학생은 {s1.grade}학년입니다.")
s1.learn()

s2 = Student("이돌", 3)
print(f'{s2.name} 학생은 {s2.grade}학년입니다.')
s2.learn()

# __str__(self), 문자열 정보
class Student:
    def __init__(self, name, grade):
        self.name = name
        self.grade = grade

    def learn(self):
        print("수업을 듣습니다.")

    def __str__(self):
        return f"{self.name} 학생은 {self.grade}학년입니다."

s1 = Student("김하나", 1)
print(s1)
s1.learn()

s2 = Student("이돌", 3)
print(s2)
s2.learn()

# 객체 리스트
students = [
    Student("김하나", 1),
    Student("박열", 3),
    Student("이넷", 2)
]

print("***** 학생 명단 *****")
for st in students:
    print(st)
"""

# 기본 생성자 - 생략 가능
""" 
class AirPlane:
    def __init__(self):
        pass

    def take_off(self):
        print("비행기가 이륙합니다.")

    def fly(self):
        print("비행기가 일반 비행합니다.")

    def land(self):
        print("비행기가 착륙합니다.")

plane = AirPlane()
plane.take_off()
plane.fly()
plane.land()
"""

# 계산기 클래스
class Calculator:
    def __init__(self):
        self.x = 0

    def add(self, y):
        self.x = self.x + y
        return self.x

    def sub(self, y):
        self.x = self.x - y
        return self.x

cal = Calculator()
print(cal.add(10))
print(cal.sub(4))

# 접근 제어자
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

# setter, getter 사용
class BankAccount:
    def __init__(self):
        self.__ano = ""
        self.__owner = ""
        self.__balance = ""

    # 계좌 번호
    def set_ano(self, ano):
        self.__ano = ano

    def get_ano(self):
        return self.__ano
    
    # 계좌주
    def set_owner(self, owner):
        self.__owner = owner

    def get_owner(self):
        return self.__owner
    
    # 잔고
    def set_balance(self, balance):
        self.__balance = balance

    def get_balance(self):
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

# 인스턴스 리스트
"""
class Dog:
    #tricks = [] 클래스 변수

    def __init__(self, name):
        self.name = name
        self.tricks = []

    def add_trick(self, trick):
        self.tricks.append(trick)

dog1 = Dog("기쁨")
dog2 = Dog("사랑")

dog1.add_trick('몸 뒤집기')
print(dog1.tricks)

dog2.add_trick("죽은 척 하기")
print(dog2.tricks)

# 정적(고정) 클래스

class Dog:
    kind = "진돗개"  #클래스 변수

    def __init__(self, name):
        self.name = name  # 인스턴스 변수

dog1 = Dog("백구")
dog2 = Dog("검둥이")

print(dog1.name)  # dog1만 유일
print(dog2.name)  # dog2만 유일

# 모든 dog이 공유
print(dog1.kind)
print(dog2.kind)
# 클래스 이름으로 직접 접근(올바른 유형)
print(Dog.kind)
"""

# 카운터
"""
class Counter:
    x = 0

    def __init__(self):
        Counter.x += 1

    def get_count(self):
        return self.x

c1 = Counter()
print(c1.get_count())

c2 = Counter()
print(c2.get_count())

# 클래스 리스트
class Cart:
    li = []

    def add_cart(self, goods):
        self.li.append(goods)

cart1 = Cart()
cart1.add_cart("계란")
#print(cart1.li)
print(Cart.li)

cart2 = Cart()
cart1.add_cart("두부")
print(Cart.li)

cart3 = Cart()
cart1.add_cart("콩나물")
print(Cart.li)

# 전체 요소 출력
for i in Cart.li:
    print(i)
"""

# 클래스 리스트 인덱싱
"""
class City:
    a = ['Seoul', 'Incheon', 'Daejon', 'Jeju']

str = ''
for i in City.a:
    str += i[0]

print(str)
"""

# 상속(inheritance)
"""
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def get_name(self):
        return self.name

    def get_age(self):
        return self.age

class Employee(Person):
    def __init__(self, name, age, employee_id):
        super().__init__(name, age)
        self.employee_id = employee_id

    def get_id(self):
        return self.employee_id

e1 = Employee("김산", 25, 101)
print("이름 :", e1.get_name())
print("나이 :", e1.get_age())
print("사원번호 :", e1.get_id())
"""

# 사번 자동 부여
"""
class Employee:
    #serial_num = 1000

    # def __init__(self, name):
    #     Employee.serial_num += 1
    #     self.id = Employee.serial_num
    #     self.name = name

    def __init__(self, name):
        self.serial_num = 1000   # 인스턴스 변수
        self.serial_num += 1
        self.id = self.serial_num
        self.name = name

    def __str__(self):
        return "사번 : {},  이름 : {}".format(self.id, self.name)

e1 = Employee("최사원")
print(e1)

e2 = Employee("안사원")
print(e2)

e3 = Employee("한사원")
print(e3)

# 객체 리스트
employee = [
    Employee('구름'),
    Employee('별'),
    Employee('행성'),
    Employee('달')
]

for e in employee:
    print(e)
"""

# 중첩 클래스
class Department:
    def __init__(self, dname):
        self.dname = dname

    class Employee:
        def __init__(self, ename):
            self.ename = ename

computer = Department("전산실")
han= Department.Employee("한코딩")

print(computer.dname)
print(han.ename)







