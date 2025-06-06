# 클래스 생성

class Student:
    # 생성자 함수(객체 생성 초기화)
    def __init__(self):
        print("객체 생성")
        
    # 소멸자 함수(객체가 소멸될때 자동으로 소멸됨)
    def __del__(self):
        print("소멸자 호출")
    
    def study(self, _name):
        print(_name, "학생이 공부해요")
        self.lunch(_name)
        
    def lunch(self, _name):
        print(_name, "학생이 식사해요")
        
class Teacher:
    def teach(self, _name):
        print(_name, "강사님이 가르쳐요")
        
def study():
    print("일반함수, 파이썬을 학습해요")
        
s1 = Student()
t1 = Teacher()

s1.study('kim')
s1.lunch("lee")

t1.teach('han')

# 생성자, 소멸자
s2 = Student()

study()