#include <stdio.h>

int main()
{
	int a = 99;
	int b = 2;

	printf("a + b�� ���: %d\n", a + b);
	printf("a - b�� ���: %d\n", a - b);
	printf("a * b�� ���: %d\n", a * b);
	printf("a / b�� ���: %.1lf\n", (double)a / b);  //������
	printf("a / b�� ���: %d\n", a / b);  //��
	printf("a %% b�� ���: %d\n", a % b); //������

	printf("a++�� ����: %d\n", a++);  //99
	printf("a�� ����: %d\n", a);  //100

	printf("++a�� ����: %d\n", ++a); //101
	printf("a�� ����: %d\n", a); //101

	printf("a--�� ����: %d\n", a--);  //101
	printf("a�� ����: %d\n", a);  //100

	printf("--a�� ����: %d\n", --a); //99
	printf("a�� ����: %d\n", a); //99

	return 0;
}
