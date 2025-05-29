# 매개변수가 있는 생성자
# __str__(self), 문자열 정보
"""
class Student:
    def __init__(self, name, grade):
        self.name = name
        self.grade = grade

    def learn(self):
        print("수업을 듣습니다.")

    def __str__(self):
        return f"{self.name} 학생은 {self.grade}학년입니다."

if __name__ == "__main__":
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

