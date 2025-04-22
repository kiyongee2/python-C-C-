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
//			printf("*");
//		}
//		printf("\n");
//	}
//	/*
//		i=1, j=1  *
//		     j=2  **
//			 j=3  ***
//			 j=4  ****
//			 j=5  *****
//		i=2, j=1  *
//		     j=2  **
//			 j=3  ***
//			 j=4  ****
//			 j=5  *****
//		i=3, 
//	*/
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
//	return 0;
//}