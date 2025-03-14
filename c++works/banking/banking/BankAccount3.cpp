#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// 은행 계좌 클래스
class BankAccount {
private:
    int accountNumber;  // 계좌번호
    string owner;       // 계좌 소유자
    double balance;     // 잔액

public:
    // 생성자
    BankAccount(int accNum, string name) {
        accountNumber = accNum;
        owner = name;
        balance = 0.0;
    }

    // 계좌번호 반환
    int getAccountNumber() {
        return accountNumber;
    }

    // 계좌 정보 출력
    void displayInfo() {
        cout << "  계좌 정보\n";
        cout << "    계좌번호: " << accountNumber << endl;
        cout << "    소유자: " << owner << endl;
        cout << "    잔액: " << balance << "원" << endl;
    }

    // 입금
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << " " << amount << "원이 입금되었습니다. 현재 잔액: " << balance << "원\n";
        }
        else {
            cout << " 유효한 금액을 입력하세요.\n";
        }
    }

    // 출금
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << " " << amount << "원이 출금되었습니다. 현재 잔액: " << balance << "원\n";
        }
        else {
            cout << " 출금할 수 없습니다. (잔액 부족 또는 잘못된 금액)\n";
        }
    }
};

// 전역 변수 (계좌 리스트)
vector<BankAccount> accounts;
int nextAccountNumber = 1000; // 계좌번호 1000부터 시작

// 계좌 생성 함수
void createAccount() {
    string name;
    cout << "계좌 소유자 이름을 입력하세요: ";
    cin >> name;

    BankAccount newAccount(nextAccountNumber, name);
    accounts.push_back(newAccount);

    cout << " 계좌가 성공적으로 생성되었습니다! (계좌번호: " << nextAccountNumber << ")\n";
    nextAccountNumber++; // 계좌번호 증가
}

// 계좌 검색 함수
BankAccount* searchAccount(int accNum) {
    for (auto& account : accounts) {
        if (account.getAccountNumber() == accNum) {
            return &account;
        }
    }
    return nullptr;
}

// 입금 처리 함수
void deposit() {
    int accNum;
    double amount;

    cout << "입금할 계좌번호를 입력하세요: ";
    cin >> accNum;

    BankAccount* account = searchAccount(accNum);
    if (account) {
        cout << "입금할 금액을 입력하세요: ";
        cin >> amount;
        account->deposit(amount);
    }
    else {
        cout << "계좌번호를 찾을 수 없습니다.\n";
    }
}

// 출금 처리 함수
void withdraw() {
    int accNum;
    double amount;

    cout << "출금할 계좌번호를 입력하세요: ";
    cin >> accNum;

    BankAccount* account = searchAccount(accNum);
    if (account) {
        cout << "출금할 금액을 입력하세요: ";
        cin >> amount;
        account->withdraw(amount);
    }
    else {
        cout << "계좌번호를 찾을 수 없습니다.\n";
    }
}

// 계좌 조회 함수
void displayAccount() {
    int accNum;
    cout << "조회할 계좌번호를 입력하세요: ";
    cin >> accNum;

    BankAccount* account = searchAccount(accNum);
    if (account) {
        account->displayInfo();
    }
    else {
        cout << "계좌번호를 찾을 수 없습니다.\n";
    }
}

// 메인 함수 (메뉴 시스템)
int main() {
    int choice;

    while (true) {
        cout << "\n===== 은행 시스템 =====\n";
        cout << "1. 계좌 생성\n";
        cout << "2. 입금\n";
        cout << "3. 출금\n";
        cout << "4. 계좌 조회\n";
        cout << "5. 종료\n";
        cout << "선택: ";
        cin >> choice;

        // 입력 오류 처리
        if (cin.fail()) {
            cin.clear(); // 오류 플래그 초기화
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 잘못된 입력 무시
            cout << "잘못된 입력입니다. 숫자를 입력하세요.\n";
            continue;
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
            cout << "은행 시스템을 종료합니다.\n";
            return 0;
        default:
            cout << "잘못된 선택입니다. 다시 입력하세요.\n";
        }
    }
}
