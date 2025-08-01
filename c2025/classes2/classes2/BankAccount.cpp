#include <iostream>
#include "BankAccount.h"

//Transaction�� ������
Transaction::Transaction(TransactionType type, int amount) :
    type(type), amount(amount) {}

//BankAccount ������ ���
BankAccount::BankAccount(int accountNumber, string owner, int balance)
    : accountNumber(accountNumber), owner(owner), balance(balance) {
}

void BankAccount::deposit(int amount) { //���� ���
    if (amount < 0) {
        cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
    }
    else {
        balance += amount;
        cout << amount << "���� �ԱݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
        //addTransaction(TransactionType::�Ա�, amount);
        addTransaction(�Ա�, amount);
    }
}
 

void BankAccount::withdraw(int amount) { //��� ���
    if (amount < 0) {
        cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
    }
    else if (amount > balance) {
        cout << "�ܾ��� �����մϴ�. �ٽ� �Է��ϼ���.\n";
    }
    else {
        balance -= amount;
        cout << amount << "���� ��ݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
        //addTransaction(TransactionType::���, amount);
        addTransaction(���, amount);
    }
}

//�ŷ� �߰�
void BankAccount::addTransaction(TransactionType type, int amount) {
    Transaction transaction(type, amount);  //�ŷ� 1�� ����
    transactions.push_back(transaction);    //�ŷ��� ���Ϳ� ����
}

//�ŷ� ���� ���
void BankAccount::getTransactionHistory() {
    cout << "[" << owner << "] ���� �ŷ� ����(�ֱ� " << transactions.size() << "��)\n";
    if (transactions.empty()) {
        cout << "�ŷ� ������ �����ϴ�.\n";
        return;
    }

    //�ŷ� ���� ���
    for (Transaction& transaction : transactions) {
        cout << " |" << (transaction.type == �Ա� ? "�Ա�" : "���");
        cout << "| " << transaction.amount << "��\n";
    }
    cout << "==================================\n";
}

void BankAccount::displayInfo() { //���� ���� ���
    cout << "\n[���� ����]\n";
    cout << "    ���� ��ȣ: " << accountNumber << endl;
    cout << "    ������: " << owner << endl;
    cout << "    ���� �ܰ�: " << balance << endl;
    cout << "----------------------------------\n";
}
