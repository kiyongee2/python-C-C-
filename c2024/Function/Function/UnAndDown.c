//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////Up And Down ����
//int main()
//{
//	srand(time(NULL));
//	int randNum = rand() % 50 + 1;
//	
//	int guessNum = 0;
//	int count = 5;
//	//printf("����: %d\n", randNum);
//
//	while (1)  //1-true, 0-false
//	{
//		printf("���� Ƚ�� %d ��\n", count--);
//
//		printf("����������(1~50): ");
//		scanf("%d", &guessNum);
//
//		if (guessNum == randNum)
//		{
//			printf("�����̿���!\n");
//			break;
//		}
//		else if (guessNum > randNum)
//		{
//			printf("�ʹ� Ŀ��!\n");
//		}
//		else 
//		{
//			printf("�ʹ� �۾ƿ�!\n");
//		}
//
//		if (count == 0)
//		{
//			printf("���� Ƚ���� 0�Դϴ�. �ƽ��� �����߾���.��.\n");
//			break;
//		}
//	}
//	return 0;
//}
