#include <stdio.h>

void initArray(int array[4])
{
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}

int main_Init()
{
	int array1[4];  //�ʱ�ȭ���� ���� �迭
	initArray(array1);  

	int array2[4] = { 0, 1, 2, 3 };
	initArray(array2);

	int array3[4] = { 1 }; //�ϳ��� �ʱⰪ ����, �������� 0
	initArray(array3);

	int array4[4] = { 0 }; //��� ��Ҹ� 0���� �ʱ�ȭ
	initArray(array4);

	return 0;
}