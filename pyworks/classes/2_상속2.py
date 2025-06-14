# 상속
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age 

    def get_info(self):
        return f"{self.name}({self.age})"
    
# Person 클래스 상속
class Employee(Person): 
    pass

# e1 = Employee("김산", 31)
# print(e1.get_info())

# 직원 ID 속성 추가
class Employee(Person):
    def __init__(self, name, age, department):
        super().__init__(name, age) #부모 클래스 생성자 호출
        self.department = department #직원 고유 속성

    def get_info(self): #메서드 재정의(오버라이드)
        return f"{self.name}({self.age}) - {self.department}"
    
# e2 = Employee("이강", 26, "전산실")
# print(e2.get_info())

# 단위 변환 (inch -> mm로 변환 )
# 단위 변환기
class ScaleConverter:
    def __init__(self, units_from, units_to, factor):
        self.units_from = units_from  #단위
        self.units_to = units_to      #변환할 단위
        self.factor = factor          #변환 상수

    def convert(self, value):
        return value * self.factor   # 입력값 * 변환상수

class Converter(ScaleConverter):
    def __init__(self, units_from, units_to, factor, offset):
        super().__init__(units_from, units_to, factor)
        self.offset = offset #변환 상수2

    def convert(self, value): # 입력값 * 변환상수1 + 변환상수2
        return self.factor * value + self.offset
    
sc1 = ScaleConverter("MB", "KB", 1024)
print("10MB를 KB로 변환하기")
print(f"{sc1.convert(10)} {sc1.units_to}")

sc2 = ScaleConverter("inches", "mm", 25)
print("2인치를 mm로 변환하기")
print(f"{sc2.convert(2)} {sc2.units_to}")

con1 = Converter('C', 'F', 1.8, 32)
print("섭씨온도 23C를 화씨온도로 변환하기")
print(str(con1.convert(23)) + con1.units_to)

# 다형성
class Animal:
    def cry(self):
        raise NotImplementedError("구현되지 않는 메서드가 있습니다.")
    
class Dog(Animal):
    def cry(self):
        print("왈~ 왈~")
        
class Cat(Animal):
    pass
    # def cry(self):
    #     print("야~ 옹!")

try:
    dog = Dog()
    dog.cry()

    cat = Cat()
    cat.cry()
except NotImplementedError as e:
    print(f"오류: {e}")
    
    