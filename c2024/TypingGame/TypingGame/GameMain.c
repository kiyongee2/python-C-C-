#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_WORDS 11
#define MAX_LENGTH 20

int main()
{
	FILE* fp;

	if (fopen_s(&fp, "words.txt", "r") != 0) {
		perror("파일 열기에 실패했습니다!\n");
		return 1;
	}

	char words[MAX_WORDS][MAX_LENGTH]; // 단어를 저장할 배열
	int count = 0; //단어의 개수

	while (fgets(words[count], MAX_LENGTH, fp) != NULL) {
		// 개행 문자 제거 (fgets는 개행 문자도 포함)
		words[count][strcspn(words[count], "\n")] = '\0';
		count++;
		/*
		fgets(words[count], MAX_LENGTH, fp) : 파일에서 한줄씩
					 읽어서 words[count]에 저장
		strcspn(words[count], "\n") : 개행 문자의 위치를 찾음.
		words[count][strcspn(words[count], "\n")] = '\0' : 개행 문자를
				   '\0' 널문자로 바꿈
		*/
	}
	//printf("단어의 개수: %d\n", count);
	fclose(fp);

	char* question;   //문제
	char answer[20];  //사용자
	int n = 1;  //문제 번호
	clock_t start, end;
	double elapsedTime; //게임 소요 시간

	srand(time(NULL)); //seed 설정
	int size = sizeof(words) / sizeof(words[0]);

	printf("영어 타자 게임, 준비되면 엔터>");
	getchar();

	start = clock();  //시작 시간

	while (n <= 10)
	{
		printf("\n문제 %d\n", n);
		int rndIdx = rand() % size;
		question = words[rndIdx];

		printf("%s\n", question);  //문제 출제
		scanf_s("%s", answer, sizeof(answer));  //사용자 입력

		if (strcmp(question, answer) == 0)
		{
			printf("통과!\n");
			n++;   //다음 문제
		}
		else
		{
			printf("오타! 다시 도전!\n");
		}
	}
	end = clock(); //종료 시간
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("게임 소요 시간: %.2lf초\n", elapsedTime);

	system("pause");  //exe 파일 실행시 필수

	return 0;
}