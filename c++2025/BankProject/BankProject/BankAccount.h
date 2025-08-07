#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <vector>
using namespace std;

enum TransactionType { // 거래 유형 - 열거형
    입금,
    출금
};

struct Transaction { // 거래 구조체
    TransactionType type; //거래 유형
    int amount;           //거래 금액

    //생성자
    Transaction(TransactionType type, int amount);
};

class BankAccount { // 은행 계좌 클래스
private:
    int accountNumber;  //계좌 번호
    string owner;       //예금주
    int balance;        //잔고
    vector<Transaction> transactions; //거래

public:
    //생성자 - 목록
    BankAccount(int accountNumber, string owner, int balance = 0);

    void deposit(int amount);         // 입금
    void withdraw(int amount);        // 출금
    void displayInfo();               // 계좌 정보 출력
    void getTransactionHistory();     // 거래 내역 출력
private:
    void addTransaction(TransactionType type, int amount); // 거래 추가
};
#endif

