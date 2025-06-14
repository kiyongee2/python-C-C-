
class BankAccount:
    def __init__(self, account_num, owner):
        self.account_num = account_num  #계좌번호
        self.owner = owner
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
    
    def get_account_number(self):
        """계좌번호 반환"""
        return self.account_num
        
    def display_info(self):
        print(f" 계좌 정보")
        print(f"   계좌번호: {self.acc_num}")
        print(f"   계좌주: {self.owner}")
        print(f"   잔액: {self.balance}")
        
    def get_balance(self):
        """잔액 조회"""
        return self.balance

    def get_transaction_history(self):
        """거래 내역 조회"""
        return self.transaction_history.copy()

next_account_num = 1000
accounts = []  #계좌 리스트

# 계좌 생성
def create_account():
    owner = input("계좌주 입력: ")
    new_account = BankAccount(next_account_num, owner) #신규 계좌 생성
    accounts.append(new_account) #리스트에 저장
    print(f"계좌가 성공적으로 생성되었습니다.(계좌번호: {next_account_num})")
    next_account_num += 1  #계좌번호 증가

# 계좌 검색
def search_account(acc_num):
    for account in accounts:
        if account.get_account_num() == acc_num:
            return account

# 입금
def deposit():
    acc_num = input("입금할 계좌번호 입력: ")
    account = search_account(acc_num)
    if account:
        amount = input("입금액: ")
        account.deposit(amount)
    else:
        print(f"계좌를 찾을 수 없습니다.")

# 출금
def withdraw():
    acc_num = input("출금할 계좌번호 입력: ")
    account = search_account(acc_num)
    if account:
        amount = input("출금액: ")
        account.deposit(amount)
    else:
        print(f"계좌를 찾을 수 없습니다.")

def main():
    """메인 프로그램 """
    while True:
        print("\n" + "=" * 60)
        print("1. 계좌 생성 | 2. 입금 | 3. 출금 | 4. 계좌 검색 | 5. 종료")
        print("=" * 60)
        
        try:
            choice = input("선택> ")
            
            if choice == '1':
                print("계좌 생성")
                create_account()
            
            elif choice == '2':
                print("입금")
                deposit()
                
            elif choice == '3':
                print("입금")
                withdraw()
                
            elif choice == '4':
                print(f"계좌 검색")
                search_account()
                    
            elif choice == '5':
                print("\n프로그램을 종료합니다.")
                break
                
            else:
                print("\n올바른 메뉴를 선택해 주세요 (1~5)")
                
        except ValueError as e:
            print(f"\n오류: {e}")

if __name__ == "__main__":
    main()