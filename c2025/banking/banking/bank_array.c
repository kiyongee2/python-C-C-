//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_ACCOUNTS 100
//#define OWNER_LEN 50
//
//// 계좌 구조체 정의
//typedef struct {
//    int accountNumber;
//    char ownerName[OWNER_LEN];
//    double balance;
//} BankAccount;
//
//// 전역 계좌 배열과 계좌 개수
//BankAccount accounts[MAX_ACCOUNTS];
//int accountCount = 0;
//
//// 계좌 생성 함수
//void createAccount() {
//    if (accountCount >= MAX_ACCOUNTS) {
//        printf("더 이상 계좌를 생성할 수 없습니다.\n");
//        return;
//    }
//
//    printf("새로운 계좌를 생성합니다.\n");
//    printf("계좌 번호: ");
//    scanf("%d", &accounts[accountCount].accountNumber);
//    printf("계좌 소유자 이름: ");
//    scanf("%s", accounts[accountCount].ownerName);
//    /*gets(accounts[accountCount].ownerName, OWNER_LEN);*/
//    accounts[accountCount].balance = 0.0;
//    accountCount++;
//
//    printf("계좌가 성공적으로 생성되었습니다.\n");
//}
//
//// 입금 함수
//void deposit() {
//    int accountNumber;
//    double amount;
//
//    printf("입금할 계좌 번호: ");
//    scanf_s("%d", &accountNumber);
//
//    for (int i = 0; i < accountCount; i++) {
//        if (accounts[i].accountNumber == accountNumber) {
//            printf("입금할 금액: ");
//            scanf_s("%lf", &amount);
//            if (amount < 0) {
//                printf("금액은 양수여야 합니다.\n");
//                return;
//            }
//            accounts[i].balance += amount;
//            printf("입금이 완료되었습니다. 현재 잔액: %.2lf\n", accounts[i].balance);
//            return;
//        }
//    }
//
//    printf("계좌를 찾을 수 없습니다.\n");
//}
//
//// 출금 함수
//void withdraw() {
//    int accountNumber;
//    double amount;
//
//    printf("출금할 계좌 번호: ");
//    scanf_s("%d", &accountNumber);
//
//    for (int i = 0; i < accountCount; i++) {
//        if (accounts[i].accountNumber == accountNumber) {
//            printf("출금할 금액: ");
//            scanf_s("%lf", &amount);
//            if (amount < 0) {
//                printf("금액은 양수여야 합니다.\n");
//                return;
//            }
//            if (accounts[i].balance < amount) {
//                printf("잔액이 부족합니다. 현재 잔액: %.2lf\n", accounts[i].balance);
//                return;
//            }
//            accounts[i].balance -= amount;
//            printf("출금이 완료되었습니다. 현재 잔액: %.2lf\n", accounts[i].balance);
//            return;
//        }
//    }
//
//    printf("계좌를 찾을 수 없습니다.\n");
//}
//
//// 계좌 정보 출력 함수
//void displayAccounts() {
//    if (accountCount == 0) {
//        printf("등록된 계좌가 없습니다.\n");
//        return;
//    }
//
//    printf("계좌 목록:\n");
//    for (int i = 0; i < accountCount; i++) {
//        printf("계좌 번호: %d, 소유자: %s, 잔액: %.2lf\n",
//            accounts[i].accountNumber, accounts[i].ownerName, accounts[i].balance);
//    }
//}
//
//// 메인 함수
//int main() {
//    int choice;
//
//    while (1) {
//        printf("\n은행 계좌 관리 프로그램\n");
//        printf("1. 계좌 생성\n");
//        printf("2. 입금\n");
//        printf("3. 출금\n");
//        printf("4. 계좌 목록 보기\n");
//        printf("5. 종료\n");
//        printf("선택: ");
//        scanf_s("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            createAccount();
//            break;
//        case 2:
//            deposit();
//            break;
//        case 3:
//            withdraw();
//            break;
//        case 4:
//            displayAccounts();
//            break;
//        case 5:
//            printf("프로그램을 종료합니다.\n");
//            return 0;
//        default:
//            printf("잘못된 입력입니다. 다시 선택하세요.\n");
//        }
//    }
//}
