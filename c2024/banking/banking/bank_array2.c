#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ACCOUNTS 3

// ���� ����ü
typedef struct {
	int accountNumber;
	char owner[20];
	int balance;
}BankAccount;

// ���� �迭�� ���¼�(�ε���)
BankAccount accounts[MAX_ACCOUNTS];
int accountCount = 0;

// ���� ����
void createAccount() {
	printf("*** ���ο� ���¸� �����մϴ�. ***\n");
	printf("���� ��ȣ: ");
	scanf("%d", &accounts[accountCount].accountNumber);
	
	for (int i = 0; i < accountCount; i++) {
		//���� �ߺ� ó��
		if (accounts[i].accountNumber == accounts[accountCount].accountNumber) {
			printf("�̹� ��ϵ� �����Դϴ�.");
			return;
		}
		// ���¼� �ѵ� �ʰ�
		if (accountCount >= MAX_ACCOUNTS) {
			printf("�� �̻� ���¸� ����� �����ϴ�.");
			return;
		}
	}

	printf("������: ");
	scanf("%s", accounts[accountCount].owner);
	accounts[accountCount].balance = 0;  //�ܾ�
	accountCount++;

	printf("���: ���°� �����Ǿ����ϴ�.\n");
}

// ���� ���
void getAccountList() {
	if (accountCount == 0) {
		printf("��ϵ� ���°� �����ϴ�.");
		return;
	}

	printf("*************** ���� ��� ***************\n");
	for (int i = 0; i < accountCount; i++) {
		printf("���¹�ȣ: %d, ������: %s, �ܾ�: %d\n",
			accounts[i].accountNumber, accounts[i].owner, accounts[i].balance);
	}
}

// �Ա�
void deposit() {
	int accountNumber;  //���� ��ȣ(�˻�) 
	int money;         //�Աݾ� 

	printf("�Ա��� ���� ��ȣ: ");
	scanf("%d", &accountNumber);

	for (int i = 0; i < accountCount; i++) {
		if (accounts[i].accountNumber == accountNumber) {
			printf("�Աݾ�: ");
			scanf("%d", &money);
			if (money < 0) {
				printf("�Աݾ��� ������� �մϴ�.");
				return;
			}
			accounts[i].balance += money;
			printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d", accounts[i].balance);
			return;
		}
	}

	printf("���¸� ã�� �� �����ϴ�.");
}

// ���
void withdraw() {
	int accountNumber;  //���� ��ȣ(�˻�) 
	int money;         //�Աݾ� 

	printf("����� ���� ��ȣ: ");
	scanf("%d", &accountNumber);

	for (int i = 0; i < accountCount; i++) {
		if (accounts[i].accountNumber == accountNumber) {
			printf("��ݾ�: ");
			scanf("%d", &money);
			if (money < 0) {
				printf("��ݾ��� ������� �մϴ�.");
				return;
			}
			if (money > accounts[i].balance) {
				printf("�ܾ��� �����մϴ�. ���� �ܾ�: %d\n", accounts[i].balance);
				return;
			}
			accounts[i].balance -= money;
			printf("���� ó�� �Ǿ����ϴ�. ���� �ܾ�: %d", accounts[i].balance);
			return;
		}
	}

	printf("���¸� ã�� �� �����ϴ�.");
}

int main() {
	int choice;
	bool run = true;

	while (run) {
		printf("\n========================================================\n");
		printf("1. ���»��� | 2. ���¸�� | 3. ���� | 4. ��� | 5. ����\n");
		printf("========================================================\n");
		printf("����> ");
		scanf_s("%d", &choice);
		
		switch (choice) {
		case 1:
			createAccount();
			break;
		case 2:
			getAccountList();
			break;
		case 3:
			deposit();
			break;
		case 4:
			withdraw();
			break;
		case 5:
			run = false;
			break;
		default:
			printf("�������� �ʴ� ����Դϴ�.");
			break;
		}
	} //while
	printf("���α׷��� �����մϴ�.");

	return 0;
}