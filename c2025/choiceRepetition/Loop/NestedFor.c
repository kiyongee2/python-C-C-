//#include <stdio.h>
//
//int main()
//{
//	/*
//		��ø�� for
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
//	//�����ﰢ�� ����� ��
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
//	//����� ���� ����
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