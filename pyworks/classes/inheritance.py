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

e1 = Employee("김산", 31)
print(e1.get_info())

# 직원 ID 속성 추가
class Employee(Person):
    def __init__(self, name, age, department):
        super().__init__(name, age) #부모 클래스 생성자 호출
        self.department = department #직원 고유 속성

    def get_info(self): #메서드 재정의(오버라이드)
        return f"{self.name}({self.age}) - {self.department}"
    
e2 = Employee("이강", 26, "전산실")
print(e2.get_info())

# 단위 변환 (inch -> mm로 변환 )
class ScaleConverter:
    def __init__(self, units_from, units_to, factor):
        self.units_from = units_from
        self.units_to = units_to
        self.factor = factor

    def convert(self, value):
        return self.factor * value

"""
conv = ScaleConverter("inches", "mm", 25)
print("Converting 2 inches")
print(f"{conv.convert(2)} {conv.units_to}")
"""

class Converter(ScaleConverter):
    def __init__(self, units_from, units_to, factor, offset):
        super().__init__(units_from, units_to, factor)
        self.offset = offset 

    def convert(self, value):
        return self.factor * value + self.offset
    
con = Converter('C', 'F', 1.8, 32)
print("Converting 20C")
print(str(con.convert(23)) + con.units_to)

