#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100  // �ִ� ���� ��
#define OWNER_LEN 40

// ���� ���� ����ü 
typedef struct {
    int ano;  // ���¹�ȣ
    char owner[OWNER_LEN];     // ������
    int balance;     // �ܾ�
} BankAccount;

// ���� ��� �迭 �� ���� ����
BankAccount accounts[MAX_ACCOUNTS];
int idxOfAccount = 0;

// ���� ����
void createAccount() {
    if (idxOfAccount >= MAX_ACCOUNTS) {
        printf("�� �̻� ���¸� ������ �� �����ϴ�.\n");
        return;
    }

    BankAccount newAccount;
    //�ű� ���¹�ȣ �ڵ� �ο�
    newAccount.ano = 1000 + idxOfAccount;
    //������ �Է�
    printf("������ : ");
    scanf_s("%s", newAccount.owner, sizeof(newAccount.owner));
    //�ܾ�
    newAccount.balance = 0;

    accounts[idxOfAccount++] = newAccount;
    printf("���: ���°� �����Ǿ����ϴ�. (���¹�ȣ: %d)\n", newAccount.ano);
}

// �Ա�
void deposit() {
    int accountNumber;
    int amount;

    printf("���¹�ȣ : ");
    scanf_s("%d", &accountNumber);

    for (int i = 0; i < idxOfAccount; i++) {
        if (accounts[i].ano == accountNumber) {
            printf("�Աݾ� : ");
            scanf_s("%d", &amount);

            if (amount <= 0) {
                printf("�ùٸ� �ݾ��� �Է��ϼ���.\n");
                return;
            }

            accounts[i].balance += amount;
            printf("�Ա� �Ϸ�! ���� �ܾ�: %d��\n", accounts[i].balance);
            return;
        }
    }
    printf("���¹�ȣ�� ã�� �� �����ϴ�.\n");
}

// ���
void withdraw() {
    int accountNumber;
    int amount;

    printf("���¹�ȣ : ");
    scanf_s("%d", &accountNumber);

    for (int i = 0; i < idxOfAccount; i++) {
        if (accounts[i].ano == accountNumber) {
            printf("��ݾ� : ");
            scanf_s("%d", &amount);

            if (amount <= 0 || amount > accounts[i].balance) {
                printf("����� �� �����ϴ�. (�ܾ� ���� �Ǵ� �߸��� �ݾ�)\n");
                return;
            }

            accounts[i].balance -= amount;
            printf("��� �Ϸ�! ���� �ܾ�: %d��\n", accounts[i].balance);
            return;
        }
    }
    printf("���¹�ȣ�� ã�� �� �����ϴ�.\n");
}

// ���� ���� ��� �Լ�
void displayAccount() {
    int accountNumber;

    printf("��ȸ�� ���¹�ȣ�� �Է��ϼ���: ");
    scanf_s("%d", &accountNumber);

    for (int i = 0; i < idxOfAccount; i++) {
        if (accounts[i].ano == accountNumber) {
            printf("  ���� ����\n");
            printf("    ���¹�ȣ: %d\n", accounts[i].ano);
            printf("    ������: %s\n", accounts[i].owner);
            printf("    �ܾ�: %d��\n", accounts[i].balance);
            return;
        }
    }
    printf("���¹�ȣ�� ã�� �� �����ϴ�.\n");
}

// ���� �Լ� (�޴�)
int main() {
    int choice;

    while (1)
    {
        printf("========================================================\n");
        printf("1. ���»��� | 2. ���� | 3. ��� | 4. ����ã�� | 5. ����\n");
        printf("========================================================\n");
        printf("����> ");
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
        	displayAccount();
        	break;
        case 5:
        	printf("���� �ý����� �����մϴ�.\n");
        	return 0;
        default:
        	printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
        }
    }

    return 0;
}
