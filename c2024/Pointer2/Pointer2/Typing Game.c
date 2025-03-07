//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	char* words[] = {"ant", "bear", "chicken", "deer", "elephant", "fox", 
//				"horse", "monkey", "lion", "tiger"};
//	char* question;  //출제된 문제
//	char answer[30]; //사용자 입력
//
//	int size = sizeof(words) / sizeof(words[0]); //배열의 크기
//
//	srand(time(NULL)); //seed 설정
//
//	int n = 1;  //문제
//	printf("영어 타자 게임, 준비되면 엔터 >>\n");
//	getchar();
//	
//	time_t start, end;
//	time(&start);
//	while (n <= 10)
//	{
//		printf("문제 번호: %d\n", n);
//		int rnd = rand() % size;
//		question = words[rnd];
//		printf("%s\n", question);
//
//		scanf_s("%s", answer, sizeof(answer)); //입력
//		
//		if (strcmp(question, answer) == 0)
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
//	printf("게임 소요시간: %ld초", (end - start));
//
//	return 0;
//}
