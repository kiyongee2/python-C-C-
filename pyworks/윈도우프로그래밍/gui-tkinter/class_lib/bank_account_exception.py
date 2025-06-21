class BankAccount:
    """은행 계좌 클래스"""
    def __init__(self):
        self.balance = 0
        self.transaction_history = []

    def deposit(self, amount):
        """입금 처리"""
        if amount <= 0:
            raise ValueError("입금액은 0보다 커야 합니다")
        self.balance += amount
        self.transaction_history.append(('입금', amount))
        return self.balance

    def withdraw(self, amount):
        """출금 처리"""
        if amount <= 0:
            raise ValueError("출금액은 0보다 커야 합니다")
        if amount > self.balance:
            raise ValueError("잔액이 부족합니다")
        self.balance -= amount
        self.transaction_history.append(('출금', amount))
        return self.balance

    def get_balance(self):
        """잔액 조회"""
        return self.balance

    def get_transaction_history(self):
        """거래 내역 조회"""
        return self.transaction_history.copy()

def input_amount(prompt):
    """금액 입력 유틸리티 함수"""
    while True:
        try:
            amount = int(input(prompt))
            if amount <= 0:
                print("0보다 큰 금액을 입력해 주세요")
                continue
            return amount
        except ValueError:
            print("숫자로 입력해 주세요")

def main():
    """메인 프로그램 루프"""
    account = BankAccount()
    
    while True:
        print("\n" + "=" * 60)
        print("1. 입금 | 2. 출금 | 3. 잔액조회 | 4. 거래내역 | 5. 종료")
        print("=" * 60)
        
        try:
            choice = input("선택> ").strip()
            
            if choice == '1':
                amount = input_amount("입금액> ")
                account.deposit(amount)
                print(f"{amount}원 입금되었습니다. 현재 잔액: {account.get_balance():,}원")
                
            elif choice == '2':
                amount = input_amount("출금액> ")
                account.withdraw(amount)
                print(f"{amount}원 출금되었습니다. 현재 잔액: {account.get_balance():,}원")
                
            elif choice == '3':
                print(f"\n현재 잔액: {account.get_balance():,}원")
                
            elif choice == '4':
                print("\n[거래 내역]")
                for type_, amount in account.get_transaction_history():
                    print(f"- {type_}: {amount:,}원")
                    
            elif choice == '5':
                print("\n프로그램을 종료합니다.")
                break
                
            else:
                print("\n올바른 메뉴를 선택해 주세요 (1~5)")
                
        except ValueError as e:
            print(f"\n오류: {e}")
        except KeyboardInterrupt:
            print("\n강제 종료됨")
            break

if __name__ == "__main__":
    main()