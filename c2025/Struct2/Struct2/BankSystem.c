//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h> //strcpy()
//#include <stdbool.h> //true/false 사용
//
//#define MAX_ACCOUNTS 100   //최대 계정수
//#define ANO_LEN 20         //계좌번호 크기
//#define OWNER_LEN 30       //예금주 크기
//
//typedef struct {
//	char ano[ANO_LEN];     //계좌번호
//	char owner[OWNER_LEN]; //예금주
//	int balance;           //잔고
//}BankAccount;
//
////전역 공간
//BankAccount accounts[MAX_ACCOUNTS]; //계좌 배열 생성
//int accountCount = 0; //현재 계좌 수 
//
////계좌 생성
//void createAccount() {
//	char accountNumber[ANO_LEN];  //입력(계좌번호)
//
//	if (accountCount >= MAX_ACCOUNTS) {
//		printf("더 이상 계좌를 생성할 수 없습니다.\n");
//		return;
//	}
//
//	printf("계좌 번호(예: xx-xx-xxxx): ");
//	scanf("%s", accountNumber);
//
//	//중복 검사
//	for (int i = 0; i < accountCount; i++) {
//		if (strcmp(accounts[i].ano, accountNumber) == 0) {
//			printf("이미 등록된 계좌입니다. 다시 입력하세요.\n");
//			return;
//		}
//	}
//
//	//중복 없을때 계좌 생성
//	strcpy(accounts[accountCount].ano, accountNumber); //계좌번호 복사
//	printf("계좌주: ");
//	scanf("%s", accounts[accountCount].owner);
//	accounts[accountCount].balance = 0; //잔고
//
//	printf("결과: 계좌가 생성되었습니다. (계좌 번호: %s)\n",
//		accounts[accountCount].ano);
//
//	accountCount++;  //다음 인덱스로 증가
//}
//
////계좌 목록
//void displayAccounts() {
//	printf("********** 계     좌     목     록 **********\n");
//
//	if (accountCount == 0)
//	{
//		printf("등록된 계좌가 없습니다.\n");
//		return;
//	}
//
//	for (int i = 0; i < accountCount; i++)
//	{
//		printf("계좌 번호: %s, 계좌주: %s, 잔액: %d\n",
//			accounts[i].ano, accounts[i].owner, accounts[i].balance);
//	}
//}
//
////예금
//void deposit() {
//	char accountNumber[ANO_LEN];  //외부 입력(계좌번호)
//	int amount;    //입금액
//	bool found = false; //상태(계좌 찾음/못찾음)
//
//	printf("입금할 계좌번호(예: xx-xx-xxxx): ");
//	scanf("%s", accountNumber);
//
//	for (int i = 0; i < accountCount; i++) {
//		if (strcmp(accounts[i].ano, accountNumber) == 0) { 
//			found = true; //계좌 찾음
//
//			printf("입금액: ");
//			scanf("%d", &amount);
//			if (amount < 0) {
//				printf("올바른 금액이 아닙니다.\n");
//				return; //즉시 종료
//			}
//			else {
//				accounts[i].balance += amount;
//				printf("정상 처리 되었습니다. 현재 잔액: %d\n", 
//											accounts[i].balance);
//				return;  //for문 탈출
//			}
//		}
//	}
//
//	if (!found) {
//		printf("계좌를 찾을 수 없습니다.\n");
//	}
//}
//
////출금
//void withdraw() {
//	char accountNumber[ANO_LEN];  //외부 입력(계좌번호)
//	int amount;  //출금액
//	bool found = false; //상태(계좌 찾음/못찾음)
//
//	printf("출금할 계좌번호(예: xx-xx-xxxx): ");
//	scanf("%s", accountNumber);
//
//	for (int i = 0; i < accountCount; i++) {
//		if (strcmp(accounts[i].ano, accountNumber) == 0) {
//			found = true; //계좌 찾음
//
//			printf("출금액: ");
//			scanf("%d", &amount);
//			if (amount > accounts[i].balance || amount < 0) {
//				printf("잔액이 부족하거나 올바른 금액이 아닙니다. " 
//								"현재 잔액: %d\n", accounts[i].balance);
//				return;
//			}
//			else {
//				accounts[i].balance -= amount;
//				printf("정상 처리 되었습니다. 현재 잔액: %d\n", 
//										accounts[i].balance);
//				return;  //for문 탈출
//			}
//		}
//	}
//
//	if (!found) {
//		printf("계좌를 찾을 수 없습니다.\n");
//	}
//}
//
//
//int main()
//{
//	bool run = true;  //실행,종료
//	int choice; //메뉴
//
//	while (run)
//	{
//		printf("====================================================\n");
//		printf("1.계좌생성 | 2.예금 | 3.출금 | 4.계좌목록 | 5.종료\n");
//		printf("====================================================\n");
//		printf("선택> ");
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
//			printf("프로그램을 종료합니다.\n");
//			run = false;
//			break;  //정상 종료
//		default:
//			printf("잘못된 입력입니다. 다시 선택하세요.\n");
//		}
//	}
//
//	system("pause");  //콘솔창 닫힘 방지(파일 배포시)
//
//	return 0;
//}
