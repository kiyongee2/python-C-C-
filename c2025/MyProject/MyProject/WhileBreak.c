#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//while���� n�� �ʱ�ȭ���� ������ ���� �߻���.
	//do~while���� n�� �ʱ�ȭ ���� �ʾƵ� ��.
	int n;

	/*do{
		printf("���� �Է� >>");
		scanf("%d", &n);
		printf("�Էµ� ������ %d�Դϴ�\n", n);
	} while (n != 0);*/

	//break�� ��� - ���ѹݺ�(1-true, 0-false)

	do {
		printf("���� �Է� >>");
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		printf("�Էµ� ������ %d�Դϴ�\n", n);
	} while (1);

	return 0;
}