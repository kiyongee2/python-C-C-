//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#define MAX_ACCOUNTS 100
//#define OWNER_LEN 30
//
//// ���� ����ü
//typedef struct {
//	int accountNumber;
//	char owner[OWNER_LEN];
//	int balance;
//}BankAccount;
//
//// ���� �迭�� ���¼�(�ε���)
//BankAccount accounts[MAX_ACCOUNTS];
//int idxOfAccounts = 0;
//
//// ���� ����
//void createAccount() {
//	printf("*** ���ο� ���¸� �����մϴ�. ***\n");
//	printf("���� ��ȣ: ");
//	scanf_s("%d", &accounts[idxOfAccounts].accountNumber);
//	
//	for (int i = 0; i < idxOfAccounts; i++) {
//		//���� �ߺ� ó��
//		if (accounts[i].accountNumber == accounts[idxOfAccounts].accountNumber) {
//			printf("�̹� ��ϵ� �����Դϴ�.");
//			return;
//		}
//		// ���¼� �ѵ� �ʰ�
//		if (idxOfAccounts >= MAX_ACCOUNTS) {
//			printf("�� �̻� ���¸� ����� �����ϴ�.");
//			return;
//		}
//	}
//
//	printf("������: ");
//	scanf_s("%s", accounts[idxOfAccounts].owner, sizeof(accounts[idxOfAccounts].owner));
//	accounts[idxOfAccounts].balance = 0;  //�ܾ�
//	idxOfAccounts++;
//
//	printf("���: ���°� �����Ǿ����ϴ�.\n");
//}
//
//// ���� ���
//void displayAccounts() {
//	if (idxOfAccounts == 0) {
//		printf("��ϵ� ���°� �����ϴ�.");
//		return;
//	}
//
//	printf("*************** ���� ��� ***************\n");
//	for (int i = 0; i < idxOfAccounts; i++) {
//		printf("���¹�ȣ: %d, ������: %s, �ܾ�: %d\n",
//			accounts[i].accountNumber, accounts[i].owner, accounts[i].balance);
//	}
//}
//
//// �Ա�
//void deposit() {
//	int accountNumber;  //���� ��ȣ(�˻�) 
//	int money;         //�Աݾ� 
//
//	printf("�Ա��� ���� ��ȣ: ");
//	scanf_s("%d", &accountNumber);
//
//	for (int i = 0; i < idxOfAccounts; i++) {
//		if (accounts[i].accountNumber == accountNumber) {
//			printf("�Աݾ�: ");
//			scanf_s("%d", &money);
//			if (money < 0) {
//				printf("�Աݾ��� ������� �մϴ�.");
//				return;
//			}
//			accounts[i].balance += money;
//			printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d", accounts[i].balance);
//			return;
//		}
//	}
//
//	printf("���¸� ã�� �� �����ϴ�.");
//}
//
//// ���
//void withdraw() {
//	int accountNumber;  //���� ��ȣ(�˻�) 
//	int money;         //�Աݾ� 
//
//	printf("����� ���� ��ȣ: ");
//	scanf_s("%d", &accountNumber);
//
//	for (int i = 0; i < idxOfAccounts; i++) {
//		if (accounts[i].accountNumber == accountNumber) {
//			printf("��ݾ�: ");
//			scanf_s("%d", &money);
//			if (money < 0) {
//				printf("��ݾ��� ������� �մϴ�.");
//				return;
//			}
//			if (money > accounts[i].balance) {
//				printf("�ܾ��� �����մϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
//				return;
//			}
//			accounts[i].balance -= money;
//			printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d", accounts[i].balance);
//			return;
//		}
//	}
//
//	printf("���¸� ã�� �� �����ϴ�.");
//}
//
//int main() {
//	int choice;
//	bool run = true;
//
//	while (run) {
//		printf("\n========================================================\n");
//		printf("1. ���»��� | 2. ���� | 3. ��� | 4. ���¸�� | 5. ����\n");
//		printf("========================================================\n");
//		printf("����> ");
//		scanf_s("%d", &choice);
//		
//		switch (choice) {
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
//			run = false;
//			break;
//		default:
//			printf("�������� �ʴ� ����Դϴ�.");
//			break;
//		}
//	} //while
//	printf("���α׷��� �����մϴ�.");
//
//	return 0;
//}