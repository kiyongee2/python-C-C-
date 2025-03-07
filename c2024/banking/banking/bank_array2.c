//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#define MAX_ACCOUNTS 100
//#define OWNER_LEN 30
//
//// 계좌 구조체
//typedef struct {
//	int accountNumber;
//	char owner[OWNER_LEN];
//	int balance;
//}BankAccount;
//
//// 계좌 배열과 계좌수(인덱스)
//BankAccount accounts[MAX_ACCOUNTS];
//int idxOfAccounts = 0;
//
//// 계좌 생성
//void createAccount() {
//	printf("*** 새로운 계좌를 생성합니다. ***\n");
//	printf("계좌 번호: ");
//	scanf_s("%d", &accounts[idxOfAccounts].accountNumber);
//	
//	for (int i = 0; i < idxOfAccounts; i++) {
//		//계좌 중복 처리
//		if (accounts[i].accountNumber == accounts[idxOfAccounts].accountNumber) {
//			printf("이미 등록된 계좌입니다.");
//			return;
//		}
//		// 계좌수 한도 초과
//		if (idxOfAccounts >= MAX_ACCOUNTS) {
//			printf("더 이상 계좌를 만들수 없습니다.");
//			return;
//		}
//	}
//
//	printf("계좌주: ");
//	scanf_s("%s", accounts[idxOfAccounts].owner, sizeof(accounts[idxOfAccounts].owner));
//	accounts[idxOfAccounts].balance = 0;  //잔액
//	idxOfAccounts++;
//
//	printf("결과: 계좌가 생성되었습니다.\n");
//}
//
//// 계좌 목록
//void displayAccounts() {
//	if (idxOfAccounts == 0) {
//		printf("등록된 계좌가 없습니다.");
//		return;
//	}
//
//	printf("*************** 계좌 목록 ***************\n");
//	for (int i = 0; i < idxOfAccounts; i++) {
//		printf("계좌번호: %d, 계좌주: %s, 잔액: %d\n",
//			accounts[i].accountNumber, accounts[i].owner, accounts[i].balance);
//	}
//}
//
//// 입금
//void deposit() {
//	int accountNumber;  //계좌 번호(검색) 
//	int money;         //입금액 
//
//	printf("입금할 계좌 번호: ");
//	scanf_s("%d", &accountNumber);
//
//	for (int i = 0; i < idxOfAccounts; i++) {
//		if (accounts[i].accountNumber == accountNumber) {
//			printf("입금액: ");
//			scanf_s("%d", &money);
//			if (money < 0) {
//				printf("입금액은 양수여야 합니다.");
//				return;
//			}
//			accounts[i].balance += money;
//			printf("정상 처리 되었습니다. 현재 잔액: %d", accounts[i].balance);
//			return;
//		}
//	}
//
//	printf("계좌를 찾을 수 없습니다.");
//}
//
//// 출금
//void withdraw() {
//	int accountNumber;  //계좌 번호(검색) 
//	int money;         //입금액 
//
//	printf("출금할 계좌 번호: ");
//	scanf_s("%d", &accountNumber);
//
//	for (int i = 0; i < idxOfAccounts; i++) {
//		if (accounts[i].accountNumber == accountNumber) {
//			printf("출금액: ");
//			scanf_s("%d", &money);
//			if (money < 0) {
//				printf("출금액은 양수여야 합니다.");
//				return;
//			}
//			if (money > accounts[i].balance) {
//				printf("잔액이 부족합니다. 현재 잔액: %d\n", accounts[i].balance);
//				return;
//			}
//			accounts[i].balance -= money;
//			printf("정상 처리 되었습니다. 현재 잔액: %d", accounts[i].balance);
//			return;
//		}
//	}
//
//	printf("계좌를 찾을 수 없습니다.");
//}
//
//int main() {
//	int choice;
//	bool run = true;
//
//	while (run) {
//		printf("\n========================================================\n");
//		printf("1. 계좌생성 | 2. 예금 | 3. 출금 | 4. 계좌목록 | 5. 종료\n");
//		printf("========================================================\n");
//		printf("선택> ");
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
//			printf("지원되지 않는 기능입니다.");
//			break;
//		}
//	} //while
//	printf("프로그램을 종료합니다.");
//
//	return 0;
//}