class Calculator:
    def __init__(self, initial=0):
        self.x = initial
    
    def add(self, y):
        self.x += y
        return self
    
    def sub(self, y):
        self.x -= y
        return self
    
    def mul(self, y):
        self.x *= y
        return self
    
    def div(self, y):
        try:
            self.x /= y
        except ZeroDivisionError:
            print("Error: Division by zero")
        return self
    
    def power(self, y):
        self.x **= y
        return self
    
    def reset(self):
        self.x = 0
        return self
    
    def display(self):
        print(f"Current value: {self.x}")
        return self
    
    @property
    def value(self):
        return self.x

# 사용 예시
(Calculator(5)          # 초기값 5
   .add(3)              # 8
   .mul(2)              # 16
   .div(4)              # 4.0
   .power(2)            # 16.0
   .display()           # 출력
   .reset()             # 0
   .add(10).display())  # 10