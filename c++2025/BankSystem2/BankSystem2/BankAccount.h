#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <vector>
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
	vector<Transaction> transactions; //�ŷ� ����

public:
	//������ ����
	BankAccount(int accountNumber, string owner, int balance = 0);

	int getAccountNumber();     //���¹�ȣ ��ȯ
	void deposit(int amount);   //���� ���
	void withdraw(int amount);  //��� ���
	void displayInfo();         //���� ����
	void getTransactionHistory(); //�ŷ� ����

private:
	//�ŷ� �߰�
	void addTransaction(TransactionType type, int amount);
};
#endif 


