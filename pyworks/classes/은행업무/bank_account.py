# 은행 업무 - 계좌 생성, 입금, 출금, 계좌 목록, 종료
# 은행 계좌 클래스 정의
class BankAccount:
    def __init__(self):
        self.balance = 0  #잔액
        self.transaction_history = [] #거래내역
        
    def deposit(self, amount):
        self.balance += amount
        self.transaction_history.append(('입금', amount)) #튜플 구조
        print(f"{amount}원 입금되었습니다. 현재 잔액: {self.balance}")
    
    def withdraw(self, amount):
        if amount > self.balance:
            print("잔액이 부족합니다. 다시 입력하세요")
        else:
            self.balance -= amount
            self.transaction_history.append(('출금', amount))
            print(f"{amount}원 출금되었습니다. 현재 잔액: {self.balance}")
    
    def get_balance(self):
        return self.balance #잔고 반환
    
    def get_transaction_history(self):
        return self.transaction_history #거래 내역 반환
        
def main():
    # 은행 계좌 인스턴스 생성
    account = BankAccount()
    
    while True:
        print("========================================================")
        print("1. 입금 | 2. 출금 | 3. 잔액조회 | 4. 거래내역 | 5. 종료 ")
        print("========================================================")
        choice = input("선택> ")

        try:
            if choice == '1':
                amount = int(input("입금액> "))
                account.deposit(amount)  #deposit() 메서드 호출
            elif choice == '2':
                amount = int(input("출금액> "))
                account.withdraw(amount) #withdraw() 메서드 호출
            elif choice == '3':
                print(f"현재 잔액> {account.get_balance()}")
            elif choice == '4':
                print("\n[거래 내역]")
                # for type, amount in account.get_transaction_history():
                #     print(f"- {type}: {amount}원")
                for trans in account.get_transaction_history():
                    print(f"- {trans[0]}: {trans[1]}원")
            elif choice == '5':
                print("프로그램을 종료합니다.")
                break
            else:
                print("올바른 메뉴를 선택하세요(1~5)")
        except ValueError:
            print("숫자를 입력해주세요.") 
    
if __name__ == "__main__":
    main()
    
        
    

