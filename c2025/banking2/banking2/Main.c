#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "BankAccount.h"

int main()
{
	bool run = true;  //����,����
	int choice; //�޴�

	while (run)
	{
		printf("====================================================\n");
		printf("1.���»��� | 2.���� | 3.��� | 4.���¸�� | 5.����\n");
		printf("====================================================\n");
		printf("����> ");
		scanf("%d", &choice);

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
			printf("���α׷��� �����մϴ�.\n");
			run = false;
			break;  //���� ����
		default:
			printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
		}
	}

	system("pause");  //�ܼ�â ���� ����(���� ������)

	return 0;
}
