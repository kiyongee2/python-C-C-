#include <stdio.h>
#include <string.h>
#include "BankAccount.h"

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

	return 0;
}