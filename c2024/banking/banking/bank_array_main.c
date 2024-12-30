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
//	printf("계좌번호: %s", account.ano);
//	printf("계좌주: %s", account.owner);
//	printf("잔고: %d", account.balance);
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
//		printf("1. 계좌생성 | 2. 계좌목록 | 3. 예금 | 4. 출금 | 4. 종료\n");
//		printf("=======================================================\n");
//		printf("선택>");
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
//			printf("지원되지 않는 기능입니다.");
//			break;
//		}
//	}
//	printf("프로그램을 종료합니다.");
//
//	return 0;
//}