#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(int accountNumber, string owner, int balance)
    : accountNumber(accountNumber), owner(owner), balance(balance) {
}

void BankAccount::deposit(int amount) {
    if (amount < 0) {
        cout << "유효한 금액을 입력하세요.\n";
    }
    else {
        balance += amount;
        cout << amount << "원이 입금되었습니다. 현재 잔액: " << balance << "원\n";
        addTranscation(TransactionType::입금, amount);
    }
}

void BankAccount::withdraw(int amount) {
    if (amount < 0) {
        cout << "유효한 금액을 입력하세요.\n";
    }
    else if (amount > balance) {
        cout << "잔액이 부족합니다. 다시 입력하세요.\n";
    }
    else {
        balance -= amount;
        cout << amount << "원이 출금되었습니다. 현재 잔액: " << balance << "원\n";
        addTranscation(TransactionType::출금, amount);
    }
}

void BankAccount::addTranscation(TransactionType type, int amount) {
    Transaction trans;
    trans.type = type;
    trans.amount = amount;
    transactions.push_back(trans);
}

void BankAccount::getTransactionHistory() {
    cout << "[" << owner << "] 계좌 거래 내역(최근 " << transactions.size() << "건)\n";
    if (transactions.empty()) {
        cout << "거래 내역이 없습니다.\n";
        return;
    }

    for (Transaction transaction : transactions) {
        cout << " |" << (transaction.type == 입금 ? "입금" : "출금");
        cout << "| " << transaction.amount << "원\n";
    }
}

void BankAccount::displayInfo() {
    cout << "\n*계좌 정보\n";
    cout << "    계좌 번호: " << accountNumber << endl;
    cout << "    계좌주: " << owner << endl;
    cout << "    잔고: " << balance << endl;
}
