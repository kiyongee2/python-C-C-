
class BankAccount:
    def __init__(self, account_num, owner):
        self.account_num = account_num  #계좌번호
        self.owner = owner #계좌주
        self.balance = 0   #잔고
        self.transaction_history = []  #거래내역
       
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
        print(f"   계좌번호: {self.account_num}")
        print(f"   계좌주: {self.owner}")
        print(f"   잔액: {self.balance}")
        
    def get_balance(self):
        """잔액 조회"""
        return self.balance

    def get_transaction_history(self):
        """거래 내역 조회"""
        return self.transaction_history.copy()

next_account_num = 1000 #자동생성 계좌(숫자형)
accounts = []  #계좌 리스트

# 계좌 생성
def create_account():
    global next_account_num
    owner = input("계좌주 입력: ")
    new_account = BankAccount(next_account_num, owner) #신규 계좌 생성
    accounts.append(new_account) #리스트에 저장
    print(f"계좌가 성공적으로 생성되었습니다.(계좌번호: {next_account_num})")
    next_account_num += 1  #계좌번호 증가

# 계좌 검색
def search_account(acc_num):
    for account in accounts:
        if account.get_account_number() == acc_num:
            return account
    return None #계좌가 없을때 반환

# 입금
def deposit():
    acc_num = int(input("입금할 계좌번호 입력: "))
    account = search_account(acc_num)
    if account:
        amount = int(input("입금액: "))
        account.deposit(amount)
        print(f'입금 완료. 현재 잔액: {account.get_balance()}')
    else:
        print(f"계좌를 찾을 수 없습니다.")

# 출금
def withdraw():
    acc_num = int(input("출금할 계좌번호 입력: "))
    account = search_account(acc_num)
    if account:
        amount = int(input("출금액: "))
        account.withdraw(amount)
        print(f'출금 완료. 현재 잔액: {account.get_balance()}')
    else:
        print(f"계좌를 찾을 수 없습니다.")
        
# 검색후 계좌 정보 및 거래 내역 출력
def search_and_display_account():
    acc_num = int(input("검색할 계좌번호: "))
    account = search_account(acc_num)
    if account:
        account.display_info()
        print("\n[거래 내역]")
        for transaction in account.get_transaction_history():
            print(f"- {transaction[0]}: {transaction[1]:,}원")
            
    else:
        print("계좌를 찾을 수 없습니다.")
def main():
    """메인 프로그램 """
    while True:
        print("\n" + "=" * 60)
        print("1. 계좌 생성 | 2. 입금 | 3. 출금 | 4. 계좌 검색 | 5. 종료")
        print("=" * 60)
        
        try:
            choice = input("선택> ")
            if choice == '1':
                create_account()
            elif choice == '2':
                deposit()
            elif choice == '3':
                withdraw()
            elif choice == '4':
                search_and_display_account()
            elif choice == '5':
                print("\n프로그램을 종료합니다.")
                break
            else:
                print("\n올바른 메뉴를 선택해 주세요 (1~5)")
        except ValueError as e:
            print(f"\n오류: {e}")

if __name__ == "__main__":
    main()