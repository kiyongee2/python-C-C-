//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* words[] = { "ant", "bear", "chicken", "deer", "elephant", "fox",
//			"horse", "lion", "monkey", "tiger" };
//
//	char* question;
//	char* answer = (char *)malloc(sizeof(char) * 30); //���� �Ҵ�
//	int n = 1;
//	clock_t start, end;
//	double elapsedTime;
//
//	srand(time(NULL));
//	int size = sizeof(words) / sizeof(words[0]);
//
//	printf("���� Ÿ�� ����, �غ�Ǹ� ����");
//	getchar();
//
//	start = clock(); //���� �ð�
//	while (1)
//	{
//		printf("\n���� %d\n", n);
//		int rndIdx = rand() % size;
//		question = words[rndIdx];
//		printf("%s\n", question);
//
//		scanf_s("%s", answer, sizeof(answer));
//		if (strcmp(question, answer) == 0)
//		{
//			printf("���!\n");
//			n++;
//			if (n > 10) break;
//		}
//		else
//		{
//			printf("��Ÿ! �ٽ� ����!\n");
//		}
//	}
//	end = clock(); //���� �ð�
//	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//
//	printf("���� �ҿ� �ð�: %.2f��\n", elapsedTime);
//
//	return 0;
//}