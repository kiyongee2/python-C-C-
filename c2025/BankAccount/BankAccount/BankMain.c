#include <stdio.h>
#include <string.h>
#include "BankAccount.h"

int main()
{
	int choice; //�޴�

	while (1)
	{
		printf("========================================================\n");
		printf("1. ���»��� | 2. ���� | 3. ��� | 4. ���¸�� | 5. ����\n");
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
			displayAccounts();
			break;
		case 5:
			printf("���α׷��� �����մϴ�.\n");
			return 0;  //���� ����
		default:
			printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
		}
	}

	return 0;
}