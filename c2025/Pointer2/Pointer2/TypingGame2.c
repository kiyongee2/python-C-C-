//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* words[] = { "ant", "bear", "chicken", "deer", "elephant", "fox",
//			"horse", "monkey", "lion", "tiger"};
//	char* question;   //����
//	char answer[20];  //�����
//	int n = 1;  //���� ��ȣ
//	clock_t start, end; 
//	double elapsedTime; //���� �ҿ� �ð�
//
//	srand(time(NULL)); //seed ����
//	int size = sizeof(words) / sizeof(words[0]);
//
//	printf("���� Ÿ�� ����, �غ�Ǹ� ����>");
//	getchar();
//
//	start = clock();  //���� �ð�
//
//	while (n <= 10)
//	{
//		printf("\n���� %d\n", n);
//		int rndIdx = rand() % size;
//		question = words[rndIdx];
//
//		printf("%s\n", question);  //���� ����
//		scanf_s("%s", answer, sizeof(answer));  //����� �Է�
//
//		if (strcmp(question, answer) == 0)
//		{
//			printf("���!\n");
//			n++;   //���� ����
//		}
//		else
//		{
//			printf("��Ÿ! �ٽ� ����!\n");
//		}
//	}
//	end = clock(); //���� �ð�
//	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//	printf("���� �ҿ� �ð�: %.1f��\n", elapsedTime);
//
//	return 0;
//}
