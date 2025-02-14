#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_Typing()
{
	//영어 타자 게임
	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
			"monkey", "lion", "tiger", "horse", "snake" };

	char answer[30];  //사용자 입력
	int size = strlen(words);

	srand(time(NULL)); //seed 설정

	int n = 1;  //문제 번호
	printf("영어 타자 게임, 준비되면 엔터 >\n");
	getchar();

	while (n <= 10)
	{
		printf("문제 %d", n);

		int rndIdx = rand() % size;
		char* question = words[rndIdx];
		printf("\n%s\n", question);

		scanf("%s", answer);

		if (strcmp(answer, question) == 0)
		{
			printf("통과!\n");
			n++;
		}
		else
		{
			printf("오타! 다시 도전!\n");
		}
	}

	printf("게임을 종료합니다.");

	return 0;
}