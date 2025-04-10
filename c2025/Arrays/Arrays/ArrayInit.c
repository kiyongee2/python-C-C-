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
	int array1[4];  //초기화되지 않은 배열
	initArray(array1);  

	int array2[4] = { 0, 1, 2, 3 };
	initArray(array2);

	int array3[4] = { 1 }; //하나의 초기값 지정, 나머지는 0
	initArray(array3);

	int array4[4] = { 0 }; //모든 요소를 0으로 초기화
	initArray(array4);

	return 0;
}