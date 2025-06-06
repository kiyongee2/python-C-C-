# Person 클래스를 Student 클래스가 상속
from datetime import datetime

class Person:
    """부모 클래스: 성명, 나이, 주소 멤버를 저장"""
    def __init__(self, _name, _age, _address):
        self.name = _name # 성명
        self.age = _age # 나이
        self.address = _address # 주소
        
    def display_info(self):
        print(f"이름: {self.name}, 나이: {self.age}, 주소:{self.address}")
        
    def get_current_date(self):
        print(f"현재 날짜: {datetime.now().strftime('%Y-%m-%d')}")
        
class Student(Person): # Person 클래스 상속
    """자식 클래스: 부모의 성명, 나이를 상속받고, 국어, 영어, 수학 멤버 추가 """
    def __init__(self, _name,_age, _address, _korean, _english, _math):
        super().__init__(_name, _age, _address) # 부모 클래스 초기화
        self.korean = _korean # 국어
        self.english = _english # 영어
        self.math = _math # 수학
        self.total = self.calculate_total() # 총점 계산
        self.average = self.calculate_average() # 평균 계산
        
    def calculate_total(self):
        return self.korean + self.english + self.math
    
    def calculate_average(self):
        return self.total / 3
    
    def display_student_info(self):
        self.display_info()
        print(f"국어:{self.korean}, 영어:{self.english}, 수학:{self.math}, \
총점:{self.total}, 평균:{self.average}")
    
# 부모 클래스 객체 생성 (이름, 나이, 주소만 입력)
person1 = Person("김철수", 45, "서울시 강남구")
print("부모 클래스 출력")
person1.display_info() # 부모 클래스 정보 출력
person1.get_current_date()
print("\n")

# 자식 클래스 객체 생성 (이름, 나이, 주소, 성적 입력)
student1 = Student("이영희", 17, "부산시 해운대구", 85, 92, 78)
# student2 = Student("박민수", 18, "대구시 동구", 90, 88, 95)
print("학생 성적 출력")
student1.display_student_info()
# student2.display_info()
student1.get_current_date()

print(Person.__doc__)
print(Student.__doc__)
print(student1.display_student_info().__doc__)
