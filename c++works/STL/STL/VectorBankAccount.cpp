#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankAccount {
private:
	int accountNumber;  // 계좌번호
	string owner;       // 계좌 소유자
	int balance;        // 잔액

public:
	//생성자
	BankAccount(int accNum, string name, int initBalance = 0) {
		accountNumber = accNum;
		owner = name;
		balance = initBalance;
	}

	//계좌 정보
	void displayInfo() {
		cout << "계좌 정보\n";
		cout << "  계좌 번호: " << accountNumber << endl;
		cout << "  계좌주: " << owner << endl;
		cout << "  잔액: " << balance << "원" << endl;
	}

	//입금
	void deposit(int amount)
	{
		if (amount > 0){
			balance += amount;
			cout << amount << "원이 입금되었습니다. 현재 잔액 " << balance << "원\n";
		}
		else {
			cout << " 유효한 금액을 입력하세요.\n";
		}
	}

	//출금
	void withdraw(int amount)
	{
		if (amount > 0 || amount < balance) {
			balance -= amount;
			cout << amount << "원이 출금되었습니다. 현재 잔액 " << balance << "원\n";
		}
		else {
			cout << " 유효한 금액을 입력하세요.\n";
		}
	}
};

int main()
{
	// 여러 개의 BankAccount 객체를 저장할 벡터 생성
	vector<BankAccount> accounts;

	//계좌 추가
	accounts.push_back(BankAccount(1000, "이우주", 10000));
	accounts.push_back(BankAccount(1001, "정은하", 40000));
	accounts.push_back(BankAccount(1002, "한강", 25000));

	//계좌 정보 출력(인덱스로 출력)
	/*for (int i = 0; i < accounts.size(); i++)
	{
		accounts[i].displayInfo();
		cout << "--------------------\n";
	}*/

	/*for (BankAccount account : accounts) {
		account.displayInfo();
		cout << "--------------------\n";
	}*/

	// auto&은 벡터의 각 요소(BankAccount 객체) 참조
	for (auto& account : accounts) {
		account.displayInfo();
		cout << "--------------------\n";
	}

	// 첫 번째 계좌에 입금
	accounts[0].deposit(5000);
	accounts[0].displayInfo();

	//두 번째 계좌에서 출금
	accounts[1].withdraw(10000);
	accounts[1].displayInfo();

	return 0;
}