#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100   //최대 계정수
#define OWNER_LEN 40       //계좌주 크기

typedef struct {
	int ano;               //계좌번호
	char owner[OWNER_LEN]; //계좌주
	int balance;           //잔고
}BankAccount;

//전역 변수
BankAccount accounts[MAX_ACCOUNTS]; //계좌 배열 생성
int idxOfAccount = 0; //배열의 인덱스

//계좌 생성
void createAccount() {

	if (idxOfAccount >= MAX_ACCOUNTS) {
		printf("더 이상 계좌를 생성할 수 없습니다.\n");
		return;
	}

	printf("계좌 번호:");
	scanf_s("%d", &accounts[idxOfAccount].ano);
	printf("계좌주:");
	scanf_s("%s", accounts[idxOfAccount].owner,
					sizeof(accounts[idxOfAccount].owner));
	accounts[idxOfAccount].balance = 0;
	idxOfAccount++;  //다음 인덱스로 1 증가

	printf("결과: 계좌가 생성되었습니다.\n");
}

//예금
void deposit() {
	int accountNumber;  //외부 입력(계좌번호)
	int money;          //입금액
	
	printf("입금할 계좌번호: ");
	scanf_s("%d", &accountNumber);

	for (int i = 0; i < idxOfAccount; i++){
		if (accounts[i].ano == accountNumber) { //이미 등록된 계좌와 입력 계좌가 일치하면
			printf("입금액: ");
			scanf_s("%d", &money);
			if (money < 0){
				printf("금액은 음수일 수 없습니다.\n");
				return; //즉시 종료
			}
			accounts[i].balance += money;
			printf("정상 처리 되었습니다. 현재 잔액: %d\n", accounts[i].balance);
			return;  //for문 탈출
		}
	}
	printf("계좌를 찾을 수 없습니다.\n");
}

//출금
void withdraw() {
	int accountNumber;  //외부 입력(계좌번호)
	int money;  //입금액

	printf("출금할 계좌번호: ");
	scanf_s("%d", &accountNumber);

	for (int i = 0; i < idxOfAccount; i++){
		if (accounts[i].ano == accountNumber){
			printf("출금액: ");
			scanf_s("%d", &money);
			if (money > accounts[i].balance || money < 0){
				printf("잔액이 부족하거나 올바른 금액이 아닙니다. 현재 잔액: %d\n", 
					accounts[i].balance);
				return;
			}
			accounts[i].balance -= money;
			printf("정상 처리 되었습니다. 현재 잔액: %d\n", accounts[i].balance);
			return;  //for문 탈출
		}
	}
	printf("계좌를 찾을 수 없습니다.\n");
}

//계좌 목록
void displayAccounts() {
	printf("********** 계  좌  목  록 **********\n");
	
	if (idxOfAccount == 0)
	{
		printf("등록된 계좌가 없습니다.\n");
		return;
	}
	
	for (int i = 0; i < idxOfAccount; i++)
	{
		printf("계좌 번호: %d, 계좌주: %s, 잔액: %d\n",
			accounts[i].ano, accounts[i].owner, accounts[i].balance);
	}
}

int main()
{
	int choice; //메뉴

	while (1)
	{
		printf("========================================================\n");
		printf("1. 계좌생성 | 2. 예금 | 3. 출금 | 4. 계좌목록 | 5. 종료\n");
		printf("========================================================\n");
		printf("선택> ");
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
			printf("프로그램을 종료합니다.\n");
			return 0;  //정상 종료
		default:
			printf("잘못된 입력입니다. 다시 선택하세요.\n");
		}
	}

	system("pause");  //콘솔창 닫힘 방지(파일 배포시)

	return 0;
}
