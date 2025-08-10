#ifndef BANK_ACCOUNT_H  //���Ǻ� ������ ��
#define BANK_ACCOUNT_H  //��ũ�� �̸�(����ü �̸� �ߺ� �Ұ�)

#define MAX_ACCOUNTS 100   //�ִ� ������
#define ANO_LEN 20         //���¹�ȣ ũ��
#define OWNER_LEN 30       //������ ũ��

typedef struct {
	char ano[ANO_LEN];     //���¹�ȣ
	char owner[OWNER_LEN]; //������
	int balance;           //�ܰ�
}BankAccount;

//���� ���� ����
//extern�� ��� ������ ������ BankAccout.c������ ������ �� ����
extern BankAccount accounts[MAX_ACCOUNTS]; //���� �迭 ����
extern int accountCount; //���� ���� ��

//���� ���� �Լ� ����
void createAccount();
void deposit();
void withdraw();
void displayAccounts();

#endif

