//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//// 은행 계좌 클래스
//class BankAccount {
//private:
//    int accountNumber;  // 계좌번호
//    string owner;       // 계좌 소유자
//    double balance;     // 잔액
//
//public:
//    // 생성자
//    BankAccount(int accNum, string name, double initialBalance = 0.0) {
//        accountNumber = accNum;
//        owner = name;
//        balance = initialBalance;
//    }
//
//    // 계좌 정보 출력
//    void displayInfo() const {
//        cout << "  계좌 정보\n";
//        cout << "    계좌번호: " << accountNumber << endl;
//        cout << "    소유자: " << owner << endl;
//        cout << "    잔액: " << balance << "원" << endl;
//    }
//
//    // 입금
//    void deposit(double amount) {
//        if (amount > 0) {
//            balance += amount;
//            cout << " " << amount << "원이 입금되었습니다. 현재 잔액: " << balance << "원\n";
//        }
//        else {
//            cout << " 유효한 금액을 입력하세요.\n";
//        }
//    }
//
//    // 출금
//    void withdraw(double amount) {
//        if (amount > 0 && amount <= balance) {
//            balance -= amount;
//            cout << " " << amount << "원이 출금되었습니다. 현재 잔액: " << balance << "원\n";
//        }
//        else {
//            cout << " 출금할 수 없습니다. (잔액 부족 또는 잘못된 금액)\n";
//        }
//    }
//};
//
//int main() {
//    // 여러 개의 BankAccount 객체를 저장할 벡터 생성
//    vector<BankAccount> accounts;
//
//    // 계좌 추가
//    accounts.push_back(BankAccount(12345, "김철수", 10000));
//    accounts.push_back(BankAccount(67890, "이영희", 50000));
//    accounts.push_back(BankAccount(54321, "박민수", 20000));
//
//    // auto&를 사용하여 벡터의 각 계좌 정보 출력
//    cout << "모든 계좌 정보 출력:\n";
//    for (auto& account : accounts) {
//        account.displayInfo();
//        cout << "-------------------\n";
//    }
//
//    // 첫 번째 계좌에 입금
//    cout << "\n첫 번째 계좌에 5000원 입금:\n";
//    accounts[0].deposit(5000);
//    accounts[0].displayInfo();
//
//    // 두 번째 계좌에서 출금
//    cout << "\n두 번째 계좌에서 20000원 출금:\n";
//    accounts[1].withdraw(20000);
//    accounts[1].displayInfo();
//
//    return 0;
//}