#include <stdio.h>

int main()
{
	// 1���� 10���� ���ϱ�
	int i, a[10];
	int total = 0;  //�հ�

	// 1 ~ 10 ���� �� ���
	for (i = 0; i < 10; i++)
	{
		a[i] = i + 1;
		total += a[i]; 
		printf("a[%d]=%d, total=%d\n", i, a[i], total);
	}
	printf("�հ�: %d\n", total);

	//Ȧ�� ���� �� �հ�
	int oddTotal = 0;
	for (i = 0; i < 10; i = i + 2)
	{
		a[i] = i + 1;
		oddTotal += a[i];
		printf("a[%d]=%d, total=%d\n", i, a[i], oddTotal);
	}
	printf("Ȧ���� �հ�: %d\n", oddTotal);

	//¦�� ���� �� �հ�
	int evenTotal = 0;
	for (i = 0; i < 10; i += 2)
	{
		a[i] = i + 2;
		evenTotal += a[i];
		printf("a[%d]=%d, total=%d\n", i, a[i], evenTotal);
	}
	printf("¦���� �հ�: %d\n", evenTotal);

	return 0;
}