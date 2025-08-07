#include <string>
#include "BankAccount.h"

vector<BankAccount> accounts; //계좌를 저장할 벡터 생성
int nextAccountNumber = 1000; //현재 계좌 번호

//계좌 생성
void createAccount() {
	string name;
	cin.ignore();
	cout << "계좌주를 입력하세요: ";
	getline(cin, name);

	BankAccount newAccount(nextAccountNumber, name); //신규 계좌 생성
	accounts.push_back(newAccount); //벡터에 계좌 저장
	cout << "계좌가 성공적으로 생성되었습니다! (계좌번호: " << 
		nextAccountNumber << ")\n";
	nextAccountNumber++;  //계좌수 1증가
}

//계좌 검색
BankAccount* searchAccount(int accNum) { //포인터 반환 자료형(필수)
	for (auto& account : accounts) { //참조자(필수)
		//이미 등록된 계좌와 입력한 계좌가 일치하면
		if (account.getAccountNumber() == accNum) {
			return &account; //계좌 주소 반환
		}
	}
	return nullptr;
}

void deposit() { //예금 기능
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
			cin.ignore(1000, '\n'); //'\n'까지 최대 1000개의 문자 지우기
			cout << "숫자를 입력하세요.\n";
			return;
		}
		account->deposit(amount); //예금 기능 호출
	}
	else 
		cout << "계좌번호를 찾을 수 없습니다.\n";
}

void withdraw() { //출금 기능
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
		account->withdraw(amount); //출금 기능 호출
	}
	else
		cout << "계좌번호를 찾을 수 없습니다.\n";
}

void displayAccount() { //계좌 정보 출력
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
	bool run = true; //상태 변수
	int choice;  //메뉴
	
	while (run) {
	    cout << "========================================================\n";
	    cout << "1. 계좌생성 | 2. 예금 | 3. 출금 | 4. 계좌검색 | 5. 종료\n";
	    cout << "========================================================\n";
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
			cout << "프로그램을 종료합니다.";
			run = false;
	        break;
	    default:
	        cout << "지원되지 않는 기능입니다. 다시 선택하세요.\n";
	        break;
	    }
	} //while 종료

	system("pause"); //exe 파일에서 윈도우 꺼짐 방지

	return 0;
}

