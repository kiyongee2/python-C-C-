//#include <stdio.h>
//
//int main()
//{
//	/*
//		중첩된 for
//	*/
//	int i, j;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5; j++) {
//			printf("가");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//직각삼각형 모양의 별
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 6-i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//공백과 별을 구분
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5-i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j < i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j <= 6-i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//
//	//1부터 순차적으로 출력
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 1; j <= 5; j++) {
//			printf("%d ", i*5+j);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//23까지 출력
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 1; j <= 5; j++) {
//			int num = i * 5 + j;
//			if (num > 23) break;
//			printf("%d ", num);
//		}
//		printf("\n");
//	}
//
//	printf("\n");
//
//	return 0;
//}