//#include "banking.h"
//
//int main()
//{
//	//동적 객체 - 계좌 3개 생성
//	/*BankAccount* accounts = new BankAccount[3]{
//		BankAccount(1001, "이우주", 10000),
//		BankAccount(1002, "정은하", 30000),
//		BankAccount(1003, "한강", 20000)
//	};
//
//	//입금
//	accounts[0].deposit(5000);
//	accounts[1].deposit(10000);
//
//	//출금
//	//accounts[1].withdraw(50000);
//	accounts[1].withdraw(20000);
//
//
//	//계좌 정보
//	for (int i = 0; i < 3; i++) {
//		accounts[i].displayInfo();
//		accounts[i].getTransactionHistory();
//	}
//
//	delete[] accounts;*/
//
//	//vector 자료구조 사용
//	vector<BankAccount> accounts;
//
//	accounts.push_back(BankAccount(1001, "이우주", 10000));
//	accounts.push_back(BankAccount(1002, "정은하", 30000));
//	accounts.push_back(BankAccount(1003, "한강", 20000));
//
//	//입금
//	accounts[0].deposit(5000);
//	accounts[1].deposit(10000);
//
//	//출금
//	//accounts[1].withdraw(50000);
//	accounts[1].withdraw(20000);
//
//
//	//계좌 정보
//	for (auto& account : accounts) {
//		account.displayInfo();
//		account.getTransactionHistory();
//	}
//
//	system("pause");
//
//	return 0;
//}