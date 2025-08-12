# 클래스 만들기
class Car:
    # 생성자
    def __init__(self, model, year):
        self.model = model  #모델명
        self.year = year    #연식
        
    def drive(self):
        print(f"{self.model}가 달립니다.")

    # 인스턴의 문자열 정보
    def __str__(self):
        return f"모델명: {self.model}, 연식: {self.year}"
    
if __name__ == "__main__":
    # Car의 인스턴스(객체) 생성
    c1 = Car("Ionic6", 2024)
    print(c1)
    c1.drive()
    
    c2 = Car("Sportage", 2021);
    print(c2)
    c2.drive()

# 쇼핑몰 장바구니 구현
class Cart:
    #생성자
    def __init__(self, user):
        self.user = user
        self.items = []   #장바구니 리스트

    # '*'(가변 매개변수) - 리스트
    # 리스트 추가 - extend() 사용
    def add(self, *goods):
        self.items.extend(goods)

    # 품목 삭제
    def remove(self, item):
        # 리스트의 주요 함수(삭제) - remove()
        if item in self.items:  #장바구니에 리스트에 존재하는 품목
            self.items.remove(item)  #품목 삭제

    # 인스턴스 정보를 문자열로 출력
    def __str__(self):
        return f"{self.user}의 장바구니: {self.items}"

if __name__ == "__main__":
    # Cart의 인스턴스 생성
    my_cart = Cart("박이슬")

    # 품목 추가
    my_cart.add("계란", "우유", "쌀")

    # 품목 삭제
    my_cart.remove("우유")
    my_cart.remove("콩나물")

    print(my_cart)
    
class ScaleConverter:
    def __init__(self, units_from, units_to, factor):
        self.units_from = units_from
        self.units_to = units_to
        self.factor = factor
        
    def convert(self, value):
        return self.factor * value
    
if __name__ == "__main__":
    sc1 = ScaleConverter("MB", "KB", 1024)
    print(f"{sc1.convert(10)} {sc1.units_to}")