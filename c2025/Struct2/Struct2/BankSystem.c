//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h> //strcpy()
//#include <stdbool.h> //true/false ���
//
//#define MAX_ACCOUNTS 100   //�ִ� ������
//#define ANO_LEN 20         //���¹�ȣ ũ��
//#define OWNER_LEN 30       //������ ũ��
//
//typedef struct {
//	char ano[ANO_LEN];     //���¹�ȣ
//	char owner[OWNER_LEN]; //������
//	int balance;           //�ܰ�
//}BankAccount;
//
////���� ����
//BankAccount accounts[MAX_ACCOUNTS]; //���� �迭 ����
//int accountCount = 0; //���� ���� �� 
//
////���� ����
//void createAccount() {
//	char accountNumber[ANO_LEN];  //�Է�(���¹�ȣ)
//
//	if (accountCount >= MAX_ACCOUNTS) {
//		printf("�� �̻� ���¸� ������ �� �����ϴ�.\n");
//		return;
//	}
//
//	printf("���� ��ȣ(��: xx-xx-xxxx): ");
//	scanf("%s", accountNumber);
//
//	//�ߺ� �˻�
//	for (int i = 0; i < accountCount; i++) {
//		if (strcmp(accounts[i].ano, accountNumber) == 0) {
//			printf("�̹� ��ϵ� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
//			return;
//		}
//	}
//
//	//�ߺ� ������ ���� ����
//	strcpy(accounts[accountCount].ano, accountNumber); //���¹�ȣ ����
//	printf("������: ");
//	scanf("%s", accounts[accountCount].owner);
//	accounts[accountCount].balance = 0; //�ܰ�
//
//	printf("���: ���°� �����Ǿ����ϴ�. (���� ��ȣ: %s)\n",
//		accounts[accountCount].ano);
//
//	accountCount++;  //���� �ε����� ����
//}
//
////���� ���
//void displayAccounts() {
//	printf("********** ��     ��     ��     �� **********\n");
//
//	if (accountCount == 0)
//	{
//		printf("��ϵ� ���°� �����ϴ�.\n");
//		return;
//	}
//
//	for (int i = 0; i < accountCount; i++)
//	{
//		printf("���� ��ȣ: %s, ������: %s, �ܾ�: %d\n",
//			accounts[i].ano, accounts[i].owner, accounts[i].balance);
//	}
//}
//
////����
//void deposit() {
//	char accountNumber[ANO_LEN];  //�ܺ� �Է�(���¹�ȣ)
//	int amount;    //�Աݾ�
//	bool found = false; //����(���� ã��/��ã��)
//
//	printf("�Ա��� ���¹�ȣ(��: xx-xx-xxxx): ");
//	scanf("%s", accountNumber);
//
//	for (int i = 0; i < accountCount; i++) {
//		if (strcmp(accounts[i].ano, accountNumber) == 0) { 
//			found = true; //���� ã��
//
//			printf("�Աݾ�: ");
//			scanf("%d", &amount);
//			if (amount < 0) {
//				printf("�ùٸ� �ݾ��� �ƴմϴ�.\n");
//				return; //��� ����
//			}
//			else {
//				accounts[i].balance += amount;
//				printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n", 
//											accounts[i].balance);
//				return;  //for�� Ż��
//			}
//		}
//	}
//
//	if (!found) {
//		printf("���¸� ã�� �� �����ϴ�.\n");
//	}
//}
//
////���
//void withdraw() {
//	char accountNumber[ANO_LEN];  //�ܺ� �Է�(���¹�ȣ)
//	int amount;  //��ݾ�
//	bool found = false; //����(���� ã��/��ã��)
//
//	printf("����� ���¹�ȣ(��: xx-xx-xxxx): ");
//	scanf("%s", accountNumber);
//
//	for (int i = 0; i < accountCount; i++) {
//		if (strcmp(accounts[i].ano, accountNumber) == 0) {
//			found = true; //���� ã��
//
//			printf("��ݾ�: ");
//			scanf("%d", &amount);
//			if (amount > accounts[i].balance || amount < 0) {
//				printf("�ܾ��� �����ϰų� �ùٸ� �ݾ��� �ƴմϴ�. " 
//								"���� �ܾ�: %d\n", accounts[i].balance);
//				return;
//			}
//			else {
//				accounts[i].balance -= amount;
//				printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d\n", 
//										accounts[i].balance);
//				return;  //for�� Ż��
//			}
//		}
//	}
//
//	if (!found) {
//		printf("���¸� ã�� �� �����ϴ�.\n");
//	}
//}
//
//
//int main()
//{
//	bool run = true;  //����,����
//	int choice; //�޴�
//
//	while (run)
//	{
//		printf("====================================================\n");
//		printf("1.���»��� | 2.���� | 3.��� | 4.���¸�� | 5.����\n");
//		printf("====================================================\n");
//		printf("����> ");
//		scanf("%d", &choice);
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
//			run = false;
//			break;  //���� ����
//		default:
//			printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
//		}
//	}
//
//	system("pause");  //�ܼ�â ���� ����(���� ������)
//
//	return 0;
//}
