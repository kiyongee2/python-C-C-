//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	char* words[] = {"ant", "bear", "chicken", "deer", "elephant", "fox", 
//				"horse", "monkey", "lion", "tiger"};
//	char* question;  //������ ����
//	char answer[30]; //����� �Է�
//
//	int size = sizeof(words) / sizeof(words[0]); //�迭�� ũ��
//
//	srand(time(NULL)); //seed ����
//
//	int n = 1;  //����
//	printf("���� Ÿ�� ����, �غ�Ǹ� ���� >>\n");
//	getchar();
//	
//	time_t start, end;
//	time(&start);
//	while (n <= 10)
//	{
//		printf("���� ��ȣ: %d\n", n);
//		int rnd = rand() % size;
//		question = words[rnd];
//		printf("%s\n", question);
//
//		scanf_s("%s", answer, sizeof(answer)); //�Է�
//		
//		if (strcmp(question, answer) == 0)
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
//	printf("���� �ҿ�ð�: %ld��", (end - start));
//
//	return 0;
//}
