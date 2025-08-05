# Subject 클래스
class Subject:
  def __init__(self):
    self.subject_name = ""    #과목명
    self.subject_score = 0   #점수
    
  # 과목명
  def set_subject_name(self, subject_name):
    self.subject_name = subject_name
    
  def get_subject_name(self):
    return self.subject_name
  
  # 점수
  def set_subject_score(self, subject_score):
    self.subject_score = subject_score
    
  def get_subject_score(self):
    return self.subject_score
  
# Student 클래스 - Subject 참조
class Student:
  def __init__(self, student_id, student_name):
    self.student_id = student_id      #학번
    self.student_name = student_name  #이름
    self.korean = Subject()           #국어 점수
    self.math = Subject()             #수학 점수
    
  # 국어 설정
  def set_korean_subject(self, name, score):
    self.korean.set_subject_name(name)
    self.korean.set_subject_score(score)
    
  # 수학 설정
  def set_math_subject(self, name, score):
    self.math.set_subject_name(name)
    self.math.set_subject_score(score)
    
  # 평균 점수 계산
  def calc_average(self):
    return (self.korean.get_subject_score() + self.math.get_subject_score()) / 2
    
  # 학생 정보 출력
  def print_info(self):
    print(f"학번: {self.student_id}")
    print(f"이름: {self.student_name}")
    print(f"{self.korean.get_subject_name()} 점수: {self.korean.get_subject_score()}")
    print(f"{self.math.get_subject_name()} 점수: {self.math.get_subject_score()}")
    print(f"평균 점수: {self.calc_average()}")
    print("----------------------------")

# 인스턴스 생성
'''
lee = Student(101, "이정후")
lee.set_korean_subject("국어", 85)
lee.set_math_subject("수학", 88)
lee.print_info()
'''

# 리스트로 관리
students = []

lee = Student(101, "이정후")
lee.set_korean_subject("국어", 85)
lee.set_math_subject("수학", 88)
students.append(lee)

shin = Student(102, "신유빈")
shin.set_korean_subject("국어", 90)
shin.set_math_subject("수학", 93)
students.append(shin)

print("========== 성 적 표 ==========")
for student in students:
  student.print_info()