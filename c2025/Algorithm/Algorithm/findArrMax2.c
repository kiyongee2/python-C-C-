#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int findMax(int a[], int len) { //�ִ밪
	int i, maxVal;
	maxVal = a[0];
	for (i = 0; i < len; i++) {
		if (a[i] > maxVal)
			maxVal = a[i];
	}
	return maxVal;
}

int main()
{
	int number;
	int* height; //���� �Ҵ��� �����͹迭

	printf("��� ��: ");
	scanf("%d", &number);
	height = (int*)malloc(sizeof(int) * number); 

	printf("%d���� Ű�� �Է��ϼ���\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf("%d", &height[i]);
	}
	printf("�ִ밪�� %d�Դϴ�.\n", findMax(height, number));
	
	free(height); //�޸� ����

	return 0;
}