#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100   //�ִ� ������
#define OWNER_LEN 40       //������ ũ��

typedef struct {
	int ano;               //���¹�ȣ
	char owner[OWNER_LEN]; //������
	int balance;           //�ܰ�
}BankAccount;

//���� ����
BankAccount accounts[MAX_ACCOUNTS]; //���� �迭 ����
int idxOfAccount = 0; //�迭�� �ε���

//���� ����
void createAccount() {

	if (idxOfAccount >= MAX_ACCOUNTS) {
		printf("�� �̻� ���¸� ������ �� �����ϴ�.\n");
		return;
	}

	printf("���� ��ȣ:");
	scanf_s("%d", &accounts[idxOfAccount].ano);
	printf("������:");
	scanf_s("%s", accounts[idxOfAccount].owner,
					sizeof(accounts[idxOfAccount].owner));
	accounts[idxOfAccount].balance = 0;
	idxOfAccount++;  //���� �ε����� 1 ����

	printf("���: ���°� �����Ǿ����ϴ�.\n");
}

//����
void deposit() {
	int accountNumber;  //�ܺ� �Է�(���¹�ȣ)
	int money;          //�Աݾ�
	
	printf("�Ա��� ���¹�ȣ: ");
	scanf_s("%d", &accountNumber);

	for (int i = 0; i < idxOfAccount; i++){
		if (accounts[i].ano == accountNumber) { //�̹� ��ϵ� ���¿� �Է� ���°� ��ġ�ϸ�
			printf("�Աݾ�: ");
			scanf_s("%d", &money);
			if (money < 0){
				printf("�ݾ��� ������ �� �����ϴ�.\n");
				return; //��� ����
			}
			accounts[i].balance += money;
			printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
			return;  //for�� Ż��
		}
	}
	printf("���¸� ã�� �� �����ϴ�.\n");
}

//���
void withdraw() {
	int accountNumber;  //�ܺ� �Է�(���¹�ȣ)
	int money;  //�Աݾ�

	printf("����� ���¹�ȣ: ");
	scanf_s("%d", &accountNumber);

	for (int i = 0; i < idxOfAccount; i++){
		if (accounts[i].ano == accountNumber){
			printf("��ݾ�: ");
			scanf_s("%d", &money);
			if (money > accounts[i].balance || money < 0){
				printf("�ܾ��� �����ϰų� �ùٸ� �ݾ��� �ƴմϴ�. ���� �ܾ�: %d\n", 
					accounts[i].balance);
				return;
			}
			accounts[i].balance -= money;
			printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
			return;  //for�� Ż��
		}
	}
	printf("���¸� ã�� �� �����ϴ�.\n");
}

//���� ���
void displayAccounts() {
	printf("********** ��  ��  ��  �� **********\n");
	
	if (idxOfAccount == 0)
	{
		printf("��ϵ� ���°� �����ϴ�.\n");
		return;
	}
	
	for (int i = 0; i < idxOfAccount; i++)
	{
		printf("���� ��ȣ: %d, ������: %s, �ܾ�: %d\n",
			accounts[i].ano, accounts[i].owner, accounts[i].balance);
	}
}

int main()
{
	int choice; //�޴�

	while (1)
	{
		printf("========================================================\n");
		printf("1. ���»��� | 2. ���� | 3. ��� | 4. ���¸�� | 5. ����\n");
		printf("========================================================\n");
		printf("����> ");
		scanf_s("%d", &choice);

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

	system("pause");  //�ܼ�â ���� ����(���� ������)

	return 0;
}
