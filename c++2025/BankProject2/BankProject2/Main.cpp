#include "BankAccount.h"

vector<BankAccount> accounts; //계좌를 저장한 벡터 생성
int nextAccountNumber = 1000;  //1000번 부터 생성

//계좌 생성하다
void createAccount() {
	string name;
	cout << "계좌주를 입력하세요: ";
	cin >> name;

	BankAccount newAccount(nextAccountNumber, name); //신규 계좌 생성
	accounts.push_back(newAccount); //벡터에 계좌 저장
	cout << "계좌가 성공적으로 생성되었습니다! (계좌번호: " << 
		nextAccountNumber << ")\n";
	nextAccountNumber++;  //계좌번호 1증가
}

//계좌 검색
BankAccount* searchAccount(int accNum) {
	for (auto& account : accounts) {
		//이미 등록된 계좌와 입력한 계좌가 일치하면
		if (account.getAccountNumber() == accNum) {
			return &account; //계좌 주소 반환
		}
	}
	return nullptr;
}

//예금하다
void deposit() {
	int accNum;
	int amount;

	cout << "입금할 계좌번호를 입력하세요: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum); //객체 생성
	if (account) {
		cout << "입금할 금액을 입력하세요: ";
		cin >> amount;
		if (cin.fail()) { //문자를 입력한 경우 오류 처리
			cin.clear(); //초기화
			//최대 1000개의 문자를 읽어서 '\n' 까지 무시함
			cin.ignore(1000, '\n'); 
			cout << "숫자를 입력하세요.\n";
			return;
		}
		account->deposit(amount);
	}
	else 
		cout << "계좌번호를 찾을 수 없습니다.\n";
}

//출금하다
void withdraw() {
	int accNum;
	int amount;

	cout << "출금할 계좌번호를 입력하세요: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "출금할 금액을 입력하세요: ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();  
			cin.ignore(1000, '\n'); 
			cout << "숫자를 입력하세요.\n";
			return;
		}
		account->withdraw(amount);
	}
	else
		cout << "계좌번호를 찾을 수 없습니다.\n";
}

void displayAccount() {
	int accNum;
	cout << "조회할 계좌번호를 입력하세요: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		account->displayInfo();  //계좌 정보 출력
		account->getTransactionHistory(); //거래 내역 출력
	}
	else 
		cout << "계좌번호를 찾을 수 없습니다.\n";
}

int main()
{
	int choice;  //메뉴
	bool run = true; //상태 변수
	
	while (run) {
	    cout << "========================================================" << endl;
	    cout << "1. 계좌생성 | 2. 예금 | 3. 출금 | 4. 계좌검색 | 5. 종료   " << endl;
	    cout << "========================================================" << endl;
	    cout << "선택> ";
	    cin >> choice;
	
	    switch (choice) {
	    case 1:
	        createAccount();
	        break;
	    case 2:
			deposit();
	        break;
	    case 3:
			withdraw();
	        break;
	    case 4:
			displayAccount();
	        break;
	    case 5:
	        run = false;
			cout << "프로그램을 종료합니다.";
	        break;
	    default:
	        cout << "지원되지 않는 기능입니다.\n";
	        break;
	    }
	} //while 종료
	
	return 0;
}

