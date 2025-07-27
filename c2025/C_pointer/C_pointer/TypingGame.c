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
//	srand(time(NULL)); //난수 시드값 지정
//	int size = sizeof(words) / sizeof(words[0]);
//
//	printf("영어 타자 게임, 준비되면 엔터>>");
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
//		answer = (char*)malloc(sizeof(char) * 30); //동적 할당
//		if (answer == NULL) {
//			puts("동적 메모리 할당에 실패했습니다.");
//			exit(0);
//		}
//
//		scanf("%s", answer);
//		if (strcmp(question, answer) == 0){
//			printf("통과!\n");
//			n++;
//			if (n > 10) break;
//		}
//		else{
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