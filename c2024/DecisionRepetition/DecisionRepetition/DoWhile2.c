#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	/*do {
		printf("���� �Է� >> ");
		scanf("%d", &n);

		printf("�Էµ� ���� : %d\n", n);
	} while (n != 0);*/

	do {
		printf("���� �Է� >> ");
		scanf("%d", &n);

		if (n == 0) {
			break;
		}

		printf("�Էµ� ���� : %d\n", n);
	} while (1);

	return 0;
}