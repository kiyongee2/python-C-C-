//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h> //srand(), rand()
//#include <time.h> //time()
//
//int main()
//{
//	int randNum;    //��ǻ�� ����
//	int guessNum;   //����� ������ ��
//	int count = 5;  //�õ��� ȸ��
//
//	srand(time(NULL)); //�Ź� �ٸ� ���� ������ ���� �õ� ����
//	randNum = rand() % 50 + 1;
//	//printf("%d\n", randNum);
//
//	while (1)
//	{
//		printf("���� Ƚ�� %d��\n", count--);
//
//		printf("����������(1~50 �Է�): ");
//		scanf("%d", &guessNum);
//
//		if (guessNum == randNum){
//			printf("�����̿���!\n");
//			break;
//		}
//		else if (guessNum > randNum){
//			printf("�ʹ� Ŀ��!\n");
//		}
//		else{
//			printf("�ʹ� �۾ƿ�!\n");
//		}
//
//		if (count == 0){
//			printf("���� Ƚ���� 0�̿���! �ƽ��� �����߾��.\n");
//			break;
//		}
//	}
//	return 0;
//}
