#include <stdio.h>

void changeArray(int*);

int main()
{
	//�迭 ��� ���� - ������ ���
	int arr[] = { 10, 20, 30 };

	changeArray(arr);
	//changeArray(&arr[0]);

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}

void changeArray(int* ptr)
{
	ptr[2] = 40;
}