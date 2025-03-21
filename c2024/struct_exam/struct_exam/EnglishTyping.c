//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 100  // 최대 단어 개수
//#define MAX_LENGTH 50  // 단어 최대 길이
//
//int main()
//{
//	//영어 타자 게임
//	FILE* fp = fopen("words.txt", "r");
//	
//	char words[MAX_WORDS][MAX_LENGTH]; // 단어를 저장할 배열
//	int count = 0; //단어의 개수
//
//	// 파일에서 단어 읽기
//    while (fgets(words[count], MAX_LENGTH, fp) != NULL && count < MAX_WORDS) {
//        // 개행 문자 제거 (fgets는 개행 문자도 포함함)
//        words[count][strcspn(words[count], "\n")] = '\0';
//        count++;
//    }
//	printf("단어의 개수: %d\n", count);
//
//	fclose(fp);
//
//	char answer[30];  //사용자 입력
//
//	srand(time(NULL)); //seed 설정
//
//	int n = 1;  //문제 번호
//	printf("영어 타자 게임, 준비되면 엔터 >\n");
//	getchar();
//
//	while (n <= 10)
//	{
//		printf("문제 %d", n);
//
//		int rndIdx = rand() % count;
//		char* question = words[rndIdx];
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
//
//	printf("게임을 종료합니다.");
//
//	return 0;
//}