#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <vector>
using namespace std;

enum TransactionType { // �ŷ� ���� - ������
    �Ա�,
    ���
};

struct Transaction { // �ŷ� ����ü
    TransactionType type; //�ŷ� ����
    int amount;           //�ŷ� �ݾ�

    //������
    Transaction(TransactionType type, int amount);
};

class BankAccount { // ���� ���� Ŭ����
private:
    int accountNumber;  //���� ��ȣ
    string owner;       //������
    int balance;        //�ܰ�
    vector<Transaction> transactions; //�ŷ�

public:
    //������ - ���
    BankAccount(int accountNumber, string owner, int balance = 0);

    void deposit(int amount);         // �Ա�
    void withdraw(int amount);        // ���
    void displayInfo();               // ���� ���� ���
    void getTransactionHistory();     // �ŷ� ���� ���
private:
    void addTransaction(TransactionType type, int amount); // �ŷ� �߰�
};
#endif

