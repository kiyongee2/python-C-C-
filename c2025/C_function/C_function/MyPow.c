#include <stdio.h>
#include <math.h>
/*
   �ŵ����� �Լ��� ���� ���� 
   ���̺귯�� �Լ��� ���ϱ� 
*/
int myPow(int x, int y) //x:��, y:����
{
	int num = 1; //�ŵ����� �����
	for (int i = 0; i < y; i++)
	{
		num *= x; //num = num * x;
	}
	return num;

	/*
		x = 2, y = 3�� ���
		(2 x 2 x 2)
		     num = num * x
		i=0,   2 = 1 * 2
		i=1,   4 = 2 * 2
		i=2,   8 = 4 * 2
	*/
}

int main()
{
	int val1, val2;

	val1 = myPow(2, 3); //MyPow() ȣ��

	val2 = pow(2, 3); //���̺귯�� �Լ� ȣ��

	printf("%d, %d\n", val1, val2);

	return 0;
}
