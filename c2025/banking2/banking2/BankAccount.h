#ifndef BANK_ACCOUNT_H  //조건부 컴파일 블럭
#define BANK_ACCOUNT_H  //매크로 이름(구조체 이름 중복 불가)

#define MAX_ACCOUNTS 100   //최대 계정수
#define ANO_LEN 20         //계좌번호 크기
#define OWNER_LEN 30       //예금주 크기

typedef struct {
	char ano[ANO_LEN];     //계좌번호
	char owner[OWNER_LEN]; //예금주
	int balance;           //잔고
}BankAccount;

//전역 변수 선언
//extern은 헤더 파일을 포함한 BankAccout.c에서만 정의할 수 있음
extern BankAccount accounts[MAX_ACCOUNTS]; //계좌 배열 생성
extern int accountCount; //현재 계좌 수

//계좌 관련 함수 선언
void createAccount();
void deposit();
void withdraw();
void displayAccounts();

#endif

