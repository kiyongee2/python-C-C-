//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_ACCOUNTS 100
//#define OWNER_LEN 50
//
//// ���� ����ü ����
//typedef struct {
//    int accountNumber;
//    char ownerName[OWNER_LEN];
//    double balance;
//} BankAccount;
//
//// ���� ���� �迭�� ���� ����
//BankAccount accounts[MAX_ACCOUNTS];
//int accountCount = 0;
//
//// ���� ���� �Լ�
//void createAccount() {
//    if (accountCount >= MAX_ACCOUNTS) {
//        printf("�� �̻� ���¸� ������ �� �����ϴ�.\n");
//        return;
//    }
//
//    printf("���ο� ���¸� �����մϴ�.\n");
//    printf("���� ��ȣ: ");
//    scanf("%d", &accounts[accountCount].accountNumber);
//    printf("���� ������ �̸�: ");
//    scanf("%s", accounts[accountCount].ownerName);
//    /*gets(accounts[accountCount].ownerName, OWNER_LEN);*/
//    accounts[accountCount].balance = 0.0;
//    accountCount++;
//
//    printf("���°� ���������� �����Ǿ����ϴ�.\n");
//}
//
//// �Ա� �Լ�
//void deposit() {
//    int accountNumber;
//    double amount;
//
//    printf("�Ա��� ���� ��ȣ: ");
//    scanf_s("%d", &accountNumber);
//
//    for (int i = 0; i < accountCount; i++) {
//        if (accounts[i].accountNumber == accountNumber) {
//            printf("�Ա��� �ݾ�: ");
//            scanf_s("%lf", &amount);
//            if (amount < 0) {
//                printf("�ݾ��� ������� �մϴ�.\n");
//                return;
//            }
//            accounts[i].balance += amount;
//            printf("�Ա��� �Ϸ�Ǿ����ϴ�. ���� �ܾ�: %.2lf\n", accounts[i].balance);
//            return;
//        }
//    }
//
//    printf("���¸� ã�� �� �����ϴ�.\n");
//}
//
//// ��� �Լ�
//void withdraw() {
//    int accountNumber;
//    double amount;
//
//    printf("����� ���� ��ȣ: ");
//    scanf_s("%d", &accountNumber);
//
//    for (int i = 0; i < accountCount; i++) {
//        if (accounts[i].accountNumber == accountNumber) {
//            printf("����� �ݾ�: ");
//            scanf_s("%lf", &amount);
//            if (amount < 0) {
//                printf("�ݾ��� ������� �մϴ�.\n");
//                return;
//            }
//            if (accounts[i].balance < amount) {
//                printf("�ܾ��� �����մϴ�. ���� �ܾ�: %.2lf\n", accounts[i].balance);
//                return;
//            }
//            accounts[i].balance -= amount;
//            printf("����� �Ϸ�Ǿ����ϴ�. ���� �ܾ�: %.2lf\n", accounts[i].balance);
//            return;
//        }
//    }
//
//    printf("���¸� ã�� �� �����ϴ�.\n");
//}
//
//// ���� ���� ��� �Լ�
//void displayAccounts() {
//    if (accountCount == 0) {
//        printf("��ϵ� ���°� �����ϴ�.\n");
//        return;
//    }
//
//    printf("���� ���:\n");
//    for (int i = 0; i < accountCount; i++) {
//        printf("���� ��ȣ: %d, ������: %s, �ܾ�: %.2lf\n",
//            accounts[i].accountNumber, accounts[i].ownerName, accounts[i].balance);
//    }
//}
//
//// ���� �Լ�
//int main() {
//    int choice;
//
//    while (1) {
//        printf("\n���� ���� ���� ���α׷�\n");
//        printf("1. ���� ����\n");
//        printf("2. �Ա�\n");
//        printf("3. ���\n");
//        printf("4. ���� ��� ����\n");
//        printf("5. ����\n");
//        printf("����: ");
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
//            printf("���α׷��� �����մϴ�.\n");
//            return 0;
//        default:
//            printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
//        }
//    }
//}
