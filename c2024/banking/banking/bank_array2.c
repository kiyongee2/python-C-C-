#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ACCOUNTS 3

// 계좌 구조체
typedef struct {
	int accountNumber;
	char owner[20];
	int balance;
}BankAccount;

// 계좌 배열과 계좌수(인덱스)
BankAccount accounts[MAX_ACCOUNTS];
int accountCount = 0;

// 계좌 생성
void createAccount() {
	printf("*** 새로운 계좌를 생성합니다. ***\n");
	printf("계좌 번호: ");
	scanf("%d", &accounts[accountCount].accountNumber);
	
	for (int i = 0; i < accountCount; i++) {
		//계좌 중복 처리
		if (accounts[i].accountNumber == accounts[accountCount].accountNumber) {
			printf("이미 등록된 계좌입니다.");
			return;
		}
		// 계좌수 한도 초과
		if (accountCount >= MAX_ACCOUNTS) {
			printf("더 이상 계좌를 만들수 없습니다.");
			return;
		}
	}

	printf("계좌주: ");
	scanf("%s", accounts[accountCount].owner);
	accounts[accountCount].balance = 0;  //잔액
	accountCount++;

	printf("결과: 계좌가 생성되었습니다.\n");
}

// 계좌 목록
void getAccountList() {
	if (accountCount == 0) {
		printf("등록된 계좌가 없습니다.");
		return;
	}

	printf("*************** 계좌 목록 ***************\n");
	for (int i = 0; i < accountCount; i++) {
		printf("계좌번호: %d, 계좌주: %s, 잔액: %d\n",
			accounts[i].accountNumber, accounts[i].owner, accounts[i].balance);
	}
}

// 입금
void deposit() {
	int accountNumber;  //계좌 번호(검색) 
	int money;         //입금액 

	printf("입금할 계좌 번호: ");
	scanf("%d", &accountNumber);

	for (int i = 0; i < accountCount; i++) {
		if (accounts[i].accountNumber == accountNumber) {
			printf("입금액: ");
			scanf("%d", &money);
			if (money < 0) {
				printf("입금액은 양수여야 합니다.");
				return;
			}
			accounts[i].balance += money;
			printf("정상 처리 되었습니다. 현재 잔액: %d", accounts[i].balance);
			return;
		}
	}

	printf("계좌를 찾을 수 없습니다.");
}

// 출금
void withdraw() {
	int accountNumber;  //계좌 번호(검색) 
	int money;         //입금액 

	printf("출금할 계좌 번호: ");
	scanf("%d", &accountNumber);

	for (int i = 0; i < accountCount; i++) {
		if (accounts[i].accountNumber == accountNumber) {
			printf("출금액: ");
			scanf("%d", &money);
			if (money < 0) {
				printf("출금액은 양수여야 합니다.");
				return;
			}
			if (money > accounts[i].balance) {
				printf("잔액이 부족합니다. 현재 잔액: %d\n", accounts[i].balance);
				return;
			}
			accounts[i].balance -= money;
			printf("정상 처리 되었습니다. 현재 잔액: %d", accounts[i].balance);
			return;
		}
	}

	printf("계좌를 찾을 수 없습니다.");
}

int main() {
	int choice;
	bool run = true;

	while (run) {
		printf("\n========================================================\n");
		printf("1. 계좌생성 | 2. 계좌목록 | 3. 예금 | 4. 출금 | 5. 종료\n");
		printf("========================================================\n");
		printf("선택> ");
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
			printf("지원되지 않는 기능입니다.");
			break;
		}
	} //while
	printf("프로그램을 종료합니다.");

	return 0;
}