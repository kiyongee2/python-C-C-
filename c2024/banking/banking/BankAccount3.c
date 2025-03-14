//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_ACCOUNTS 100  // 최대 계좌 수
//#define OWNER_LEN 50
//
//// 계좌 정보 구조체 
//typedef struct {
//    int accountNumber;  // 계좌번호
//    char owner[OWNER_LEN];     // 계좌주
//    int balance;     // 잔액
//} BankAccount;
//
//// 계좌 목록 배열 및 계좌 개수
//BankAccount accounts[MAX_ACCOUNTS];
//int idxOfAccount = 0;
//
//// 계좌 생성
//void createAccount() {
//    if (idxOfAccount >= MAX_ACCOUNTS) {
//        printf("더 이상 계좌를 생성할 수 없습니다.\n");
//        return;
//    }
//
//    BankAccount newAccount;
//    //신규 계좌번호 자동 부여
//    newAccount.accountNumber = 1000 + idxOfAccount; 
//    //계좌주 입력
//    printf("계좌주 : ");
//    scanf_s("%s", newAccount.owner, sizeof(newAccount.owner));
//    //잔액
//    newAccount.balance = 0;
//
//    accounts[idxOfAccount++] = newAccount;
//    printf("결과: 계좌가 생성되었습니다. (계좌번호: %d)\n", newAccount.accountNumber);
//}
//
//// 입금
//void deposit() {
//    int ano;
//    int amount;
//    printf("계좌번호 : ");
//    scanf_s("%d", &ano);
//
//    for (int i = 0; i < idxOfAccount; i++) {
//        if (accounts[i].accountNumber == ano) {
//            printf("입금액 : ");
//            scanf_s("%d", &amount);
//
//            if (amount <= 0) {
//                printf("올바른 금액을 입력하세요.\n");
//                return;
//            }
//
//            accounts[i].balance += amount;
//            printf("입금 완료! 현재 잔액: %d원\n", accounts[i].balance);
//            return;
//        }
//    }
//    printf("계좌번호를 찾을 수 없습니다.\n");
//}
//
//// 출금
//void withdraw() {
//    int ano;
//    double amount;
//    printf("계좌번호 : ");
//    scanf_s("%d", &ano);
//
//    for (int i = 0; i < idxOfAccount; i++) {
//        if (accounts[i].accountNumber == ano) {
//            printf("출금액 : ");
//            scanf_s("%d", &amount);
//
//            if (amount <= 0 || amount > accounts[i].balance) {
//                printf("출금할 수 없습니다. (잔액 부족 또는 잘못된 금액)\n");
//                return;
//            }
//
//            accounts[i].balance -= amount;
//            printf("출금 완료! 현재 잔액: %d원\n", accounts[i].balance);
//            return;
//        }
//    }
//    printf("계좌번호를 찾을 수 없습니다.\n");
//}
//
//// 계좌 정보 출력 함수
//void displayAccount() {
//    int ano;
//    printf("조회할 계좌번호를 입력하세요: ");
//    scanf_s("%d", &ano);
//
//    for (int i = 0; i < idxOfAccount; i++) {
//        if (accounts[i].accountNumber == ano) {
//            printf("  계좌 정보\n");
//            printf("    계좌번호: %d\n", accounts[i].accountNumber);
//            printf("    계좌주: %s\n", accounts[i].owner);
//            printf("    잔액: %d원\n", accounts[i].balance);
//            return;
//        }
//    }
//    printf("계좌번호를 찾을 수 없습니다.\n");
//}
//
//// 메인 함수 (메뉴)
//int main() {
//    int choice;
//
//    while (1)
//    {
//        printf("========================================================\n");
//        printf("1. 계좌생성 | 2. 예금 | 3. 출금 | 4. 계좌목록 | 5. 종료\n");
//        printf("========================================================\n");
//        printf("선택> ");
//        scanf_s("%d", &choice);
//        
//        switch (choice)
//        {
//        case 1:
//        	createAccount();
//        	break;
//        case 2:
//        	deposit();
//        	break;
//        case 3:
//        	withdraw();
//        	break;
//        case 4:
//        	displayAccounts();
//        	break;
//        case 5:
//        	printf("은행 시스템을 종료합니다.\n");
//        	return 0;
//        default:
//        	printf("잘못된 입력입니다. 다시 선택하세요.\n");
//        }
//    }
//
//    return 0;
//}
