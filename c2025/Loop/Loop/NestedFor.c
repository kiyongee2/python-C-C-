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
//			printf("��");
//		}
//		printf("\n");
//	}
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
//
//	//1���� ���������� ���
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 1; j <= 5; j++) {
//			printf("%d ", i*5+j);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//23���� ���
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