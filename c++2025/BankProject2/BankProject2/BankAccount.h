#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>
#include <vector>
using namespace std;

//enum �ڷ���
enum TransactionType {
	�Ա�,
	���
};

//����ü 
struct Transaction {
	TransactionType type; //�ŷ� ����
	int amount;           //�ŷ� �ݾ�

	Transaction(TransactionType type, int amount);
};

//Ŭ����
class BankAccount {
private:
	int accountNumber;  //���¹�ȣ
	string owner;       //������
	int balance;        //�ܰ�
	vector<Transaction> transactions; //�ŷ� ����

public:
	//������ ����
	BankAccount(int accountNumber, string owner, int balance = 0);

	int getAccountNumber();   //���� ��ȣ ��ȯ
	void deposit(int amount); //����
	void withdraw(int amount); //���
	void displayInfo();        //���� ����
	void getTransactionHistory(); //�ŷ� ����

private:
	void addTransaction(TransactionType type, int amount); //�ŷ� �߰�
};

#endif 
