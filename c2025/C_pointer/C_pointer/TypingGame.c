//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char* words[] = { "ant", "bear", "chicken", "deer", "elephant", "fox",
//			"horse", "lion", "monkey", "tiger" };
//
//	char* question;
//	char* answer = NULL;
//	int n = 1;
//	clock_t start, end;
//	double elapsedTime;
//
//	srand(time(NULL)); //���� �õ尪 ����
//	int size = sizeof(words) / sizeof(words[0]);
//
//	printf("���� Ÿ�� ����, �غ�Ǹ� ����>>");
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
//		answer = (char*)malloc(sizeof(char) * 30); //���� �Ҵ�
//		if (answer == NULL) {
//			puts("���� �޸� �Ҵ翡 �����߽��ϴ�.");
//			exit(0);
//		}
//
//		scanf("%s", answer);
//		if (strcmp(question, answer) == 0){
//			printf("���!\n");
//			n++;
//			if (n > 10) break;
//		}
//		else{
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