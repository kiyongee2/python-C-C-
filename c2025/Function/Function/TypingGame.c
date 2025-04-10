//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	//영어 타자 게임
//	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
//			"monkey", "lion", "tiger", "horse", "snake" };
//
//	char answer[30];  //사용자 입력
//	//printf("%d %d\n", sizeof(animals), sizeof(animals[0]));  //88, 8
//	int size = sizeof(words) / sizeof(words[0]);  // 배열 크기 계산
//
//	srand(time(NULL)); //seed 설정
//
//	int n = 1;  //문제 번호
//	printf("영어 타자 게임, 준비되면 엔터 >\n");
//	getchar();
//
//	time_t start, end;
//	time(&start);
//	while (n <= 10)
//	{
//		printf("문제 %d", n);
//
//		int rndIdx = rand() % size;
//		char* question = words[rndIdx];  // 포인터 필수 사용
//		printf("\n%s\n", question);
//
//		scanf("%s", answer);
//
//		if (strcmp(answer, question) == 0)
//		{
//			printf("통과!\n");
//			n++;
//		}
//		else
//		{
//			printf("오타! 다시 도전!\n");
//		}
//	}
//	time(&end);
//	
//	printf("게임 소요 시간 : %ld초\n", (end-start));
//
//	return 0;
//}
