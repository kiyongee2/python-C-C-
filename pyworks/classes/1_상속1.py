# Person(부모클래스), Employee(자식 클래스)

class Person:
    def __init__(self, name):
        self.name = name # 부모 클래스 멤버에 값 저장
        
    def greet(self):
        print(f"안녕하세요. 성명: {self.name}", end="")
        
    def __str__(self):  #객체 정보 출력
        return f"<Person name: {self.name}>"
    
class Employee(Person):
    def __init__(self, name, id):
        super().__init__(name) # 부모 클래스의 생성자 호출
        self.id = id # 자식 클래스 멤버에 값 저장
        
    def greet(self): #메서드 재정의(오버라이드-override)
        super().greet() #부모 클래스의 메서드 호출
        print(f", 사번은 {self.id}입니다.")
        
    def __str__(self):
        return f"<Employee name: {self.name}, id:{self.id}>"

if __name__ == "__main__":
    p1 = Person("김기용")
    e1 = Employee("김기용", "e1234")
    
    # 객체 정보
    print(p1)
    print(e1)
    
    # 인사하기
    # p1.greet()
    e1.greet()



