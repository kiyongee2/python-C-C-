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

