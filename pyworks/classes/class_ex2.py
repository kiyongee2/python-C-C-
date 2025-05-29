# 클래스 변수
class Cls:
    x, y = 10, 20

    def change(self):
        temp = self.x
        self.x = self.y
        self.y = self.x 

a = Cls()
print(a.x, a.y)

a.change()
print(a.x, a.y)
