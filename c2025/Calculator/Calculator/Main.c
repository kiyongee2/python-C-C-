#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������� ���� - �ֵ���ǥ ���
#include "Calculator.h" 

int main()
{
	int num1, num2;

	printf("===== Simple Calculator =====\n\n");
	printf("1���� �� ���� ���ұ��? ");
	scanf("%d", &num1);
	printf("1���� %d���� ���� ���� %d�Դϴ�.\n", num1, calcSum(num1));

	printf("---------------------------------------\n");

	printf("1���� �� ���� ���ұ��? ");
	scanf("%d", &num2);
	printf("1���� %d���� ���� ���� %d�Դϴ�.\n", num2, calcGob(num2));

	system("pause");  //exe ���� ����� ���μ��� ����

	return 0;
}
