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
//	char* answer = (char *)malloc(sizeof(char) * 30); //동적 할당
//	int n = 1;
//	clock_t start, end;
//	double elapsedTime;
//
//	srand(time(NULL));
//	int size = sizeof(words) / sizeof(words[0]);
//
//	printf("영어 타자 게임, 준비되면 엔터");
//	getchar();
//
//	start = clock(); //시작 시각
//	while (1)
//	{
//		printf("\n문제 %d\n", n);
//		int rndIdx = rand() % size;
//		question = words[rndIdx];
//		printf("%s\n", question);
//
//		scanf_s("%s", answer, sizeof(answer));
//		if (strcmp(question, answer) == 0)
//		{
//			printf("통과!\n");
//			n++;
//			if (n > 10) break;
//		}
//		else
//		{
//			printf("오타! 다시 도전!\n");
//		}
//	}
//	end = clock(); //종료 시각
//	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//
//	printf("게임 소요 시간: %.2f초\n", elapsedTime);
//
//	return 0;
//}