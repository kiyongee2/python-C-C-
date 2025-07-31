#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <vector>
using namespace std;

// �ŷ� ���� ������
enum TransactionType {
    �Ա�,
    ���
};

// �ŷ� ����ü
struct Transaction {
    TransactionType type;
    int amount;
};

// ���� ���� Ŭ����
class BankAccount {
private:
    int accountNumber;
    string owner;
    int balance;
    vector<Transaction> transactions;

public:
    BankAccount(int accountNumber, string owner, int balance);

    void deposit(int amount);               // �Ա�
    void withdraw(int amount);             // ���
    void displayInfo();                    // ���� ���� ���
    void getTransactionHistory();          // �ŷ� ���� ���

private:
    void addTranscation(TransactionType type, int amount); // �ŷ� ����
};

#endif

