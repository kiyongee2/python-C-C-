//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand(time(NULL));
//	int randNum = rand() % 50 + 1; //��ǻ�� ����
//	int guessNum = 0; //����� ������ ��
//	int count = 5;    //�õ��� ȸ��
//
//	//printf("%d\n", randNum);
//
//	while (1)
//	{
//		printf("���� Ƚ�� %d��\n", count--);
//
//		printf("����������(1~50 �Է�): ");
//		scanf_s("%d", &guessNum);
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
//			printf("���� Ƚ���� 0�̿���! �ƽ��� �����߾��.\n");
//			break;
//		}
//	}
//
//	return 0;
//}