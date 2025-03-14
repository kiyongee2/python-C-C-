//#include <stdio.h>
//#include <string.h>
//#define MAX_ACCOUNTS 100  //�ִ� ������
//#define ANO_LEN 10        //���¹�ȣ ũ��
//#define OWNER_LEN 40      //������ ũ��
//
//typedef struct
//{
//	char ano[ANO_LEN];
//	char owner[OWNER_LEN];
//	int balance;
//}BankAccount;
//
////���� ���� - ���� �迭 �� �ε��� ����
//BankAccount accounts[MAX_ACCOUNTS];
//int idxOfAccount = 0;
//
////���� ����
//void createAccount()
//{
//	if (idxOfAccount >= MAX_ACCOUNTS)
//	{
//		printf("�� �̻� ���¸� ������ �� �����ϴ�.\n");
//		return;
//	}
//
//	printf("���� ��ȣ(00-000): ");
//	scanf_s("%s", accounts[idxOfAccount].ano, sizeof(accounts[idxOfAccount].ano));
//
//	printf("������: ");
//	scanf_s("%s", accounts[idxOfAccount].owner, sizeof(accounts[idxOfAccount].owner));
//	accounts[idxOfAccount].balance = 0;  //�ܾ�
//	idxOfAccount++;  //���¼� ����
//
//	printf("���: ���°� �����Ǿ����ϴ�. (���¹�ȣ: %s)\n", accounts[idxOfAccount].ano);
//}
//
////�Ա�
//void deposit()
//{
//	char accountNumber[ANO_LEN];  //�ܺ� �Է�(���¹�ȣ)
//	int money;  //�Աݾ�
//
//	printf("�Ա��� ���¹�ȣ: ");
//	scanf_s("%d", &accountNumber);
//
//	for (int i = 0; i < idxOfAccount; i++)
//	{
//		//�̹� ��ϵ� ���¿� �Է� ���°� ��ġ�ϸ�
//		if (strcmp(accounts[i].ano, accountNumber) == 1)
//		{
//			printf("�Աݾ�: ");
//			scanf_s("%d", &money);
//			if (money < 0)
//			{
//				printf("�ݾ��� ������ �� �����ϴ�.\n");
//				return; //��� ����
//			}
//			accounts[i].balance += money;
//			printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
//			return;  //for�� Ż��
//		}
//	}
//	printf("���¸� ã�� �� �����ϴ�.\n");
//}
//
////���
//void withdraw()
//{
//	char accountNumber[ANO_LEN];  //�ܺ� �Է�(���¹�ȣ)
//	int money;  //��ݾ�
//
//	printf("����� ���¹�ȣ: ");
//	scanf_s("%d", &accountNumber);
//
//	for (int i = 0; i < idxOfAccount; i++)
//	{
//		if (strcmp(accounts[i].ano, accountNumber) == 1)
//		{
//			printf("��ݾ�: ");
//			scanf_s("%d", &money);
//			if (money < 0)
//			{
//				printf("�ݾ��� ������ �� �����ϴ�.\n");
//				return; //��� ����
//			}
//			if (accounts[i].balance < money)
//			{
//				printf("�ܾ��� �����մϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
//				return;
//			}
//			accounts[i].balance -= money;
//			printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
//			return;  //for�� Ż��
//		}
//	}
//	printf("���¸� ã�� �� �����ϴ�.\n");
//}
//
////���� ���
//void displayAccounts()
//{
//	printf("********** ��  ��  ��  �� **********\n");
//
//	if (idxOfAccount == 0)
//	{
//		printf("��ϵ� ���°� �����ϴ�.\n");
//		return;
//	}
//
//	for (int i = 0; i < idxOfAccount; i++)
//	{
//		printf("���� ��ȣ: %s, ������: %s, �ܾ�: %d\n",
//			accounts[i].ano, accounts[i].owner, accounts[i].balance);
//	}
//}
//
//int main()
//{
//	int choice; //�޴�
//
//	while (1)
//	{
//		printf("========================================================\n");
//		printf("1. ���»��� | 2. ���� | 3. ��� | 4. ���¸�� | 5. ����\n");
//		printf("========================================================\n");
//		printf("����> ");
//		scanf_s("%d", &choice);
//
//		switch (choice)
//		{
//		case 1:
//			createAccount();
//			break;
//		case 2:
//			deposit();
//			break;
//		case 3:
//			withdraw();
//			break;
//		case 4:
//			displayAccounts();
//			break;
//		case 5:
//			printf("���α׷��� �����մϴ�.\n");
//			return 0;
//		default:
//			printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
//		}
//	}
//
//	return 0;
//}