#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
using namespace std;

//emum ��� ����
enum TransactionType { 
	�Ա�,
	���
};

//����ü ����
struct Transaction { 
	TransactionType type;
	int amount;

	//������
	Transaction();
	Transaction(TransactionType type, int amount);
};

//Ŭ���� ����
class BankAccount {
private:
	int accountNumber;  //���� ��ȣ
	string owner;       //������
	int balance;        //�ܾ�
	Transaction transactions[10];  //�ŷ�
	int transactionCount = 0;

public:
	BankAccount(int accountNumber, string owner, int balance = 0);

	void deposit(int amount);
	void withdraw(int amount);
	void displayInfo();
	void getTransactionHistory();

private:
	void addTransaction(TransactionType type, int amount);
};
#endif 

