
# 은행 업무
def main():
    balance = 0  #전역 변수
    while True:
        print("=========================================")
        print("1. 입금 | 2. 출금 | 3. 잔액조회 | 4. 종료 ")
        print("=========================================")
        choice = input("선택> ")
        
        if choice == '1':
            amount = int(input("입금액> "))
            balance += amount  # 잔액 = 잔액 + 입금액
            print(f"{amount}원 입금되었습니다. 현재 잔액: {balance}")
        elif choice == '2':
            amount = int(input("출금액> "))
            if amount > balance:
                print("잔액이 부족합니다.")
            balance -= amount  # 잔액 = 잔액 + 출금액
            print(f"{amount}원 출금되었습니다. 현재 잔액: {balance}")
        elif choice == '3':
            print(f"잔액> {balance}")
        elif choice == '4':
            print("프로그램을 종료합니다.")
            break
        else:
            print("지원되지 않는 기능입니다. 다시 선택해 주세요")
        
# 실행
main()  
