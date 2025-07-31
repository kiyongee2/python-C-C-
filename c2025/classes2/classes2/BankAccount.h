#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <vector>
using namespace std;

// 거래 유형 열거형
enum TransactionType {
    입금,
    출금
};

// 거래 구조체
struct Transaction {
    TransactionType type;
    int amount;
};

// 은행 계좌 클래스
class BankAccount {
private:
    int accountNumber;
    string owner;
    int balance;
    vector<Transaction> transactions;

public:
    BankAccount(int accountNumber, string owner, int balance);

    void deposit(int amount);               // 입금
    void withdraw(int amount);             // 출금
    void displayInfo();                    // 계좌 정보 출력
    void getTransactionHistory();          // 거래 내역 출력

private:
    void addTranscation(TransactionType type, int amount); // 거래 저장
};

#endif

