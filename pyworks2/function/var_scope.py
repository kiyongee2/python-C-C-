# 변수의 유효 범위
'''
  - 전역 변수
    메인 함수 영역에 선언(생성)하고 범위가 전체에 미침.
    프로그램이 종료되면 메모리에서 소멸(해제)됨
  - 지역 변수
    함수나 제어문(조건, 반복)의 블록안에서 생성되고
    블록을 벗어나면 소멸(해제)됨

'''
def click():
  global x #지역 변수가 전역변수로 됨
  # x = 0  #지역 변수
  x = x + 1
  
  print(f"x = {x}")

x = 0 #전역 변수

# 함수 호출
click()
click()
click()

def get_price():
    price = 1000 * quantity #price - 지역 변수
    print(f"{quantity}개에 {price}원 입니다.")

# 전역 변수
quantity = 2  # 수량
get_price()   # 호출(사용)

# 변수 출력
# print(price) # 소멸된 변수임(오류 발생)

# 배송비 계산하기
'''
  상품 가격이 40000원 미만이면 배송비 3000원을 포함하고,
  40000원 이상이면 배송비를 포함하지 않는 프로그램 만들기
'''
def get_price(unit_price, quantity):
    delivery_fee = 3000  #배송비
    price = unit_price * quantity #가격=단위당 가격*수량
    if price < 40000:
        price = price + delivery_fee
    else:
        price
    return price

# main() 영역
# 상품1 가격 - 25000원, 수량 2개 - 배송비 미포함(50000)
# 상품2 가격 - 30000원, 수량 1개 - 배송비 포함(33000)

price1 = get_price(25000, 2)
price2 = get_price(30000, 1)

print("상품1 가격: " + str(price1) + "원")
print("상품2 가격: " + str(price2) + "원")