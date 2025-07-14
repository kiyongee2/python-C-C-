#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100   //�ִ� ������
#define ANO_LEN 20         //���¹�ȣ ũ��
#define OWNER_LEN 40       //������ ũ��

typedef struct {
	char ano[ANO_LEN];     //���¹�ȣ
	char owner[OWNER_LEN]; //������
	int balance;           //�ܰ�
}BankAccount;

//���� ����
BankAccount accounts[MAX_ACCOUNTS]; //���� �迭 ����
int idxOfAccounts = 0; //�迭�� �ε���

//���� ����
void createAccount() {
	char accountNumber[ANO_LEN];  //�Է�(���¹�ȣ)

	if (idxOfAccounts >= MAX_ACCOUNTS) {
		printf("�� �̻� ���¸� ������ �� �����ϴ�.\n");
		return;
	}

	printf("���� ��ȣ: ");
	scanf("%s", accountNumber);

	//�ߺ� �˻�
	for (int i = 0; i < idxOfAccounts; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			printf("�̹� ��ϵ� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
			return;
		}
	}

	//�ߺ� ������ ���� ����
	strcpy(accounts[idxOfAccounts].ano, accountNumber); //���¹�ȣ ����
	printf("������: ");
	scanf("%s", accounts[idxOfAccounts].owner);
	accounts[idxOfAccounts].balance = 0; //�ܰ�

	printf("���: ���°� �����Ǿ����ϴ�. (���� ��ȣ: %s)\n",
		accounts[idxOfAccounts].ano);

	idxOfAccounts++;  //���� �ε����� ����
}

//����
void deposit() {
	char accountNumber[ANO_LEN];  //�ܺ� �Է�(���¹�ȣ)
	int amount;    //�Աݾ�

	printf("�Ա��� ���¹�ȣ(��: 000-000-0000): ");
	scanf("%s", accountNumber);

	for (int i = 0; i < idxOfAccounts; i++) {
		//�̹� ��ϵ� ���¿� �Է� ���°� ��ġ�ϸ�
		if (strcmp(accounts[i].ano, accountNumber) == 0) { 
			printf("�Աݾ�: ");
			scanf("%d", &amount);
			if (amount < 0) {
				printf("�ùٸ� �ݾ��� �ƴմϴ�.\n");
				return; //��� ����
			}
			else {
				accounts[i].balance += amount;
				printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n", 
											accounts[i].balance);
				return;  //for�� Ż��
			}
		}
	}
	printf("���¸� ã�� �� �����ϴ�.\n");
}

//���
void withdraw() {
	char accountNumber[ANO_LEN];  //�ܺ� �Է�(���¹�ȣ)
	int amount;  //��ݾ�

	printf("����� ���¹�ȣ(��: 000-000-0000): ");
	scanf("%s", accountNumber);

	for (int i = 0; i < idxOfAccounts; i++) {
		if (strcmp(accounts[i].ano, accountNumber) == 0) {
			printf("��ݾ�: ");
			scanf("%d", &amount);
			if (amount > accounts[i].balance || amount < 0) {
				printf("�ܾ��� �����ϰų� �ùٸ� �ݾ��� �ƴմϴ�. " 
								"���� �ܾ�: %d\n", accounts[i].balance);
				return;
			}
			else {
				accounts[i].balance -= amount;
				printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n", 
										accounts[i].balance);
				return;  //for�� Ż��
			}
		}
	}
	printf("���¸� ã�� �� �����ϴ�.\n");
}

//���� ���
void displayAccounts() {
	printf("********** ��     ��     ��     �� **********\n");

	if (idxOfAccounts == 0)
	{
		printf("��ϵ� ���°� �����ϴ�.\n");
		return;
	}

	for (int i = 0; i < idxOfAccounts; i++)
	{
		printf("���� ��ȣ: %s, ������: %s, �ܾ�: %d\n",
			accounts[i].ano, accounts[i].owner, accounts[i].balance);
	}
}

int main()
{
	int choice; //�޴�

	while (1)
	{
		printf("====================================================\n");
		printf("1.���»��� | 2.���� | 3.��� | 4.���¸�� | 5.����\n");
		printf("====================================================\n");
		printf("����> ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			createAccount();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			displayAccounts();
			break;
		case 5:
			printf("���α׷��� �����մϴ�.\n");
			return 0;  //���� ����
		default:
			printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
		}
	}

	//system("pause");  //�ܼ�â ���� ����(���� ������)

	return 0;
}
