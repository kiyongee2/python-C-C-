#include <stdio.h>
//������� ���� - �ֵ���ǥ ���
#include "Calculator.h" 

int main()
{
	int x = 3, y = 4, value1, value2;

	count++;  //count 1����
	value1 = add(x, y);  //add() ȣ��
	value2 = factorial(y); //factorial() ȣ��

	printf("count = %d\n", count);
	printf("value1 = %d\n", value1);
	printf("%d! = %d\n", y, value2);
	printf("5! = %d\n", factorial(5));

	system("pause");  //exe ���� ����� ���μ��� ����

	return 0;
}
