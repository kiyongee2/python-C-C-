#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	/*do {
		printf("정수 입력 >> ");
		scanf("%d", &n);

		printf("입력된 정수 : %d\n", n);
	} while (n != 0);*/

	do {
		printf("정수 입력 >> ");
		scanf("%d", &n);

		if (n == 0) {
			break;
		}

		printf("입력된 정수 : %d\n", n);
	} while (1);

	return 0;
}