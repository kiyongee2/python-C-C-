//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//
//typedef struct Account {
//	char ano[10];
//	char owner[20];
//	int balance;
//}Account;
//
//Account createAccount(const char* ano, const char* owner, int balance) {
//	Account newAccount;
//	strcpy(newAccount.ano, ano);
//	strcpy(newAccount.owner, owner);
//	newAccount.balance = balance;
//	return newAccount;
//}
//
//void getAccountList(Account account) {
//	printf("���¹�ȣ: %s", account.ano);
//	printf("������: %s", account.owner);
//	printf("�ܰ�: %d", account.balance);
//}
//
//void createAccount() {
//
//}
//
//void getAccountList() {
//
//}
//
//int main() {
//	Account account[100];
//	bool run = true;
//	int balance = 0;
//
//	while (run) {
//		printf("\n=====================================================\n");
//		printf("1. ���»��� | 2. ���¸�� | 3. ���� | 4. ��� | 4. ����\n");
//		printf("=======================================================\n");
//		printf("����>");
//
//		int selectNo = 0;
//		int money = 0;
//		scanf_s("%d", &selectNo);
//
//		switch (selectNo) {
//		case 1:
//			createAccount();
//			break;
//		case 2:
//			//getAccountList();
//			break;
//		case 3:
//			//deposit();
//			break;
//		case 4:
//			//withdraw();
//			break;
//		case 5:
//			run = false;
//			break;
//		default:
//			printf("�������� �ʴ� ����Դϴ�.");
//			break;
//		}
//	}
//	printf("���α׷��� �����մϴ�.");
//
//	return 0;
//}