//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	//���� Ÿ�� ����
//	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
//			"monkey", "lion", "tiger", "horse", "snake" };
//
//	char answer[30];  //����� �Է�
//	//printf("%d %d\n", sizeof(animals), sizeof(animals[0]));  //88, 8
//	int size = sizeof(words) / sizeof(words[0]);  // �迭 ũ�� ���
//
//	srand(time(NULL)); //seed ����
//
//	int n = 1;  //���� ��ȣ
//	printf("���� Ÿ�� ����, �غ�Ǹ� ���� >\n");
//	getchar();
//
//	time_t start, end;
//	time(&start);
//	while (n <= 10)
//	{
//		printf("���� %d", n);
//
//		int rndIdx = rand() % size;
//		char* question = words[rndIdx];  // ������ �ʼ� ���
//		printf("\n%s\n", question);
//
//		scanf("%s", answer);
//
//		if (strcmp(answer, question) == 0)
//		{
//			printf("���!\n");
//			n++;
//		}
//		else
//		{
//			printf("��Ÿ! �ٽ� ����!\n");
//		}
//	}
//	time(&end);
//	
//	printf("���� �ҿ� �ð� : %ld��\n", (end-start));
//
//	return 0;
//}
