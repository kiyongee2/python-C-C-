//#include <stdio.h>
//
//int main()
//{
//	/*
//		중첩된 for
//		1부터 순차적으로 출력
//	*/
//	int i, j;
//	
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 1; j <= 5; j++) {
//			printf("%d ", i * 5 + j);
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
//	//피라미드 쌓기
//	int floor = 5;
//
//	for (int i = 0; i < floor; i++) {
//		for (int j = i; j < floor - 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}