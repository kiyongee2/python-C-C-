//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int findMax(int a[], int len) { //최대값
//	int i, maxVal;
//	maxVal = a[0];
//	for (i = 0; i < len; i++)
//		if (a[i] > maxVal) maxVal = a[i];
//	return maxVal;
//}
//
//int main()
//{
//	int number;
//	int* height; //동적 할당할 포인터배열
//
//	printf("사람 수: ");
//	scanf("%d", &number);
//	height = (int*)malloc(sizeof(int) * number);
//	srand(time(NULL)); //시간으로 난수 seed 설정
//
//	for (int i = 0; i < number; i++) {
//		height[i] = 100 + rand() % 91; //100 ~ 190의 난수 생성
//		printf("height[%d] = %d\n", i, height[i]);
//	}
//	printf("최대값은 %d입니다.\n", findMax(height, number));
//
//	free(height); //메모리 해제
//
//	return 0;
//}