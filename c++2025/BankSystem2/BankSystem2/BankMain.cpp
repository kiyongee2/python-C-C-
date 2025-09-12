#include <string>
#include "BankAccount.h"

vector<BankAccount> accounts;  //계좌를 저장할 벡터 생성
int nextAccountNumber = 1000;  //다음 계좌번호

//계좌 생성
void createAccount() {
	string name;

	cout << "계좌주를 입력하세요: ";
	cin.ignore();
	getline(cin, name);

	BankAccount newAccount(nextAccountNumber, name); //신규 계좌
	accounts.push_back(newAccount);
	cout << "계좌가 성공적으로 생성되었습니다. (계좌번호: " <<
		nextAccountNumber << ")\n";
	nextAccountNumber++;
}

//계좌 검색
BankAccount* searchAccount(int accNum) {
	for (auto& account : accounts) {
		if (account.getAccountNumber() == accNum)
			return &account;  //계좌 주소 반환
	}
	return nullptr;
}

//문자 입력 오류 처리 함수
void inputValidNumber() {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "숫자를 입력하세요.\n";
		return;
	}
}

//예금
void deposit() {
	int accNum;
	int amount;

	cout << "입금할 계좌번호를 입력하세요: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "입금할 금액을 입력하세요: ";
		cin >> amount;
		inputValidNumber(); //문자 입력 오류 처리 함수 호출
		account->deposit(amount); //예금 함수 호출
	}
	else
		cout << "계좌번호를 찾을 수 없습니다.\n";
}

//출금
void withdraw() {
	int accNum;
	int amount;

	cout << "출금할 계좌번호를 입력하세요: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "출금할 금액을 입력하세요: ";
		cin >> amount;
		inputValidNumber(); //문자 입력 오류 처리 함수 호출
		account->withdraw(amount); //예금 함수 호출
	}
	else
		cout << "계좌번호를 찾을 수 없습니다.\n";
}

//계좌 검색 및 정보 출력
void displayAccount() {
	int accNum;
	cout << "조회할 계좌번호를 입력하세요: ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		account->displayInfo();
		account->getTransactionHistory();
	}
	else
		cout << "계좌번호를 찾을 수 없습니다.\n";

	//계좌 목록
	/*for (auto& account : accounts)
		account.displayInfo();*/
}

int main() {

	bool run = true; //상태 변수
	int choice;  //메뉴

	while (run) {
		cout << "========================================================\n";
		cout << "1.계좌생성 | 2.예금 | 3.출금 | 4.계좌검색 | 5.종료\n";
		cout << "========================================================\n";
		cout << "선택> ";
		cin >> choice;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "유효한 숫자를 입력하세요.\n";
			return -1;
		}

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
