#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int findMax(int a[], int len) { //최대값
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
	int* height; //동적 할당할 포인터배열

	printf("사람 수: ");
	scanf("%d", &number);
	height = (int*)malloc(sizeof(int) * number); 

	printf("%d명의 키를 입력하세요\n", number);
	for (int i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf("%d", &height[i]);
	}
	printf("최대값은 %d입니다.\n", findMax(height, number));
	
	free(height); //메모리 해제

	return 0;
}