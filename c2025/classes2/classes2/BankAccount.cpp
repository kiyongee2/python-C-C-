#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(int accountNumber, string owner, int balance)
    : accountNumber(accountNumber), owner(owner), balance(balance) {
}

void BankAccount::deposit(int amount) {
    if (amount < 0) {
        cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
    }
    else {
        balance += amount;
        cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
        addTranscation(TransactionType::�Ա�, amount);
    }
}

void BankAccount::withdraw(int amount) {
    if (amount < 0) {
        cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
    }
    else if (amount > balance) {
        cout << "�ܾ��� �����մϴ�. �ٽ� �Է��ϼ���.\n";
    }
    else {
        balance -= amount;
        cout << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
        addTranscation(TransactionType::���, amount);
    }
}

void BankAccount::addTranscation(TransactionType type, int amount) {
    Transaction trans;
    trans.type = type;
    trans.amount = amount;
    transactions.push_back(trans);
}

void BankAccount::getTransactionHistory() {
    cout << "[" << owner << "] ���� �ŷ� ����(�ֱ� " << transactions.size() << "��)\n";
    if (transactions.empty()) {
        cout << "�ŷ� ������ �����ϴ�.\n";
        return;
    }

    for (Transaction transaction : transactions) {
        cout << " |" << (transaction.type == �Ա� ? "�Ա�" : "���");
        cout << "| " << transaction.amount << "��\n";
    }
}

void BankAccount::displayInfo() {
    cout << "\n*���� ����\n";
    cout << "    ���� ��ȣ: " << accountNumber << endl;
    cout << "    ������: " << owner << endl;
    cout << "    �ܰ�: " << balance << endl;
}
