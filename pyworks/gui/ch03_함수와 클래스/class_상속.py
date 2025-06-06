# 클래스 상속

class Parent:
    def __init__(self, _name):
        self.name = _name # 부모 클래스 데이터 멤버에 인자 값 저장
        
    def greet(self):
        print( f"안녕하세요. 성명 : {self.name}", end="")

class Child(Parent):
    def __init__(self, _name, _age):
        super().__init__(_name) # 부모 클래스의 생성자 호출
        self.age = _age # 자식 클래스의 멤버
        
    def display(self):
        self.greet() # 상속받은 메서드 호출
        print(f" , 나이는 {self.age} 입니다.")
 
p1 = Parent("고담덕")
p1.greet()
        
child1 = Child("홍길동", 35)
child1.display()
