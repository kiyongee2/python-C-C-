//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* words[] = { "ant", "bear", "chicken", "deer", "elephant", "fox",
//			"horse", "monkey", "lion", "tiger"};
//	char* question;   //문제
//	char answer[20];  //사용자
//	int n = 1;  //문제 번호
//	clock_t start, end; 
//	double elapsedTime; //게임 소요 시간
//
//	srand(time(NULL)); //seed 설정
//	int size = sizeof(words) / sizeof(words[0]);
//
//	printf("영어 타자 게임, 준비되면 엔터>");
//	getchar();
//
//	start = clock();  //시작 시간
//
//	while (n <= 10)
//	{
//		printf("\n문제 %d\n", n);
//		int rndIdx = rand() % size;
//		question = words[rndIdx];
//
//		printf("%s\n", question);  //문제 출제
//		scanf_s("%s", answer, sizeof(answer));  //사용자 입력
//
//		if (strcmp(question, answer) == 0)
//		{
//			printf("통과!\n");
//			n++;   //다음 문제
//		}
//		else
//		{
//			printf("오타! 다시 도전!\n");
//		}
//	}
//	end = clock(); //종료 시간
//	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//	printf("게임 소요 시간: %.1f초\n", elapsedTime);
//
//	return 0;
//}
