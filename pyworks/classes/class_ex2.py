# 정적(고정) 클래스
class Dog:
    kind = "진돗개"  #클래스 변수

    def __init__(self, name):
        self.name = name  

dog1 = Dog("백구")
dog2 = Dog("밀크")

print(dog1.name)  # dog1만 유일
print(dog2.name)  # dog2만 유일

# 모든 dog이 공유
# print(dog1.kind)
# print(dog2.kind)

# 클래스 이름으로 직접 접근(올바른 유형)
print(Dog.kind)


# 카운터 만들기
class Counter:
    x = 0  #클래스 변수

    def __init__(self):
        Counter.x += 1

    def get_count(self):
        return self.x

c1 = Counter()
print(c1.get_count())

c2 = Counter()
print(c2.get_count())

c3 = Counter()
print(c3.get_count())

# 인스턴스형 카운터
class Counter2:
    def __init__(self):
        self.x = 0
        self.x += 1

    def get_count(self):
        return self.x

c1 = Counter2()
print(c1.get_count())

c2 = Counter2()
print(c2.get_count())

c3 = Counter2()
print(c3.get_count())

# 클래스 변수
class Cls:
    x, y = 10, 20 # 클래스 변수

    #교환 1
    def change(self):
        temp = self.x
        self.x = self.y
        self.y = self.x 

    #교환 2
    def change2(self):
        self.x, self.y = self.y, self.x

a = Cls()
print(a.x, a.y)

# a.change()
# print(a.x, a.y)

a.change2()
print(a.x, a.y)

# 클래스 리스트 인덱싱
class City:
    a = ['Seoul', 'Incheon', 'Daejon', 'Jeju']

str = ''
for i in City.a:
    str += i[0]

print(str)
