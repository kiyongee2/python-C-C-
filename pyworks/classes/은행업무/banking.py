class BankAccount:
    def __init__(self, account_num, owner):
        self.account_num = account_num  # 계좌번호
        self.owner = owner  # 계좌주
        self.balance = 0  # 잔액
        self.transaction_history = []  # 거래내역
       
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
        """계좌 정보 출력"""
        print("\n계좌 정보")
        print(f"  계좌번호: {self.account_num}")
        print(f"  계좌주: {self.owner}")
        print(f"  잔액: {self.balance:,}원")
        print("  최근 거래내역:")
        for trans in self.transaction_history[-5:]:  # 최근 5건만 출력
            print(f"    - {trans[0]}: {trans[1]:,}원")

    def get_balance(self):
        """잔액 조회"""
        return self.balance

    def get_transaction_history(self):
        """거래 내역 조회"""
        return self.transaction_history.copy()

# 전역 변수
next_account_num = 1000
accounts = []  # 계좌 리스트

def create_account():
    """계좌 생성 함수"""
    global next_account_num
    owner = input("계좌주 이름 입력: ").strip()

    new_account = BankAccount(next_account_num, owner)
    accounts.append(new_account)
    print(f"\n{owner}님의 계좌가 생성되었습니다. (계좌번호: {next_account_num})")
    next_account_num += 1

def search_account(acc_num):
    """계좌 검색 함수"""
    acc_num = int(acc_num)
    for account in accounts:
        if account.get_account_number() == acc_num:
            return account
    return None

def deposit():
    """입금 처리 함수"""
    acc_num = input("입금할 계좌번호: ").strip()
    account = search_account(acc_num)
    
    if not account:
        print("\n계좌를 찾을 수 없습니다.")
        return
    
    try:
        amount = int(input("입금액: ").strip())
        new_balance = account.deposit(amount)
        print(f"\n{amount:,}원이 입금되었습니다. 잔액: {new_balance:,}원")
    except ValueError as e:
        print(f"\n오류: {e}")

def withdraw():
    """출금 처리 함수"""
    acc_num = input("출금할 계좌번호: ").strip()
    account = search_account(acc_num)
    
    if not account:
        print("\n계좌를 찾을 수 없습니다.")
        return
    
    try:
        amount = int(input("출금액: ").strip())
        new_balance = account.withdraw(amount)
        print(f"\n{amount:,}원이 출금되었습니다. 잔액: {new_balance:,}원")
    except ValueError as e:
        print(f"\n오류: {e}")

def display_account_info():
    """계좌 정보 조회 함수"""
    acc_num = input("조회할 계좌번호: ").strip()
    account = search_account(acc_num)
    
    if account:
        account.display_info()
    else:
        print("\n계좌를 찾을 수 없습니다.")

def main():
    """메인 프로그램"""
    print("\n" + "=" * 40)
    print("은행 계좌 관리 시스템")
    print("=" * 40)
    
    while True:
        print("\n" + "=" * 60)
        print("1. 계좌생성 | 2. 입금 | 3. 출금 | 4. 계좌조회 | 5. 종료")
        print("=" * 60)
        
        choice = input("메뉴 선택: ").strip()
        
        if choice == '1':
            create_account()
        elif choice == '2':
            deposit()
        elif choice == '3':
            withdraw()
        elif choice == '4':
            display_account_info()
        elif choice == '5':
            print("\n프로그램을 종료합니다.")
            break
        else:
            print("\n올바른 메뉴를 선택해 주세요 (1~5)")

if __name__ == "__main__":
    main()