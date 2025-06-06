//#define _CRT_SECURE_NO_WARNINGS //strtok()
//#include <stdio.h>
//#include <string.h> //strtok()
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 20  //단어의 개수 
//void wordWrite();
//void wordRead();
//int main()
//{
//	//영어 단어 쓰기
//	wordWrite();
//
//	//영어 단어 읽기
//	wordRead();
//
//	return 0;
//}
//
//void wordWrite()
//{
//	FILE* fp; //파일 포인터 변수 
//
//	if (fopen_s(&fp, "word.txt", "w") != 0) {
//		perror("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1
//	}
//
//	//포인터 배열
//	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
//		"monkey", "lion", "tiger", "horse", "snake" };
//
//	int wordCount = sizeof(words) / sizeof(words[0]);
//	//printf("%d\n", wordCount);
//
//	for (int i = 0; i < wordCount; i++) {
//		fprintf(fp, "%s ", words[i]);
//	}
//
//	fclose(fp);
//}
//
//void wordRead()
//{
//	FILE* fp; //파일 포인터 변수 
//	char str[256]; //읽은 문자열을 저장할 배열 선언
//	char* wordList[MAX_WORDS]; //분리된 단어를 저장할 배열
//	int idxOfWordList = 0;
//
//	if (fopen_s(&fp, "word.txt", "r") != 0) {
//		perror("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1
//	}
//
//	//파일 읽기
//	printf("***** 읽은 내용 *****\n");
//	while (fgets(str, sizeof(str), fp) != NULL) {
//		printf("%s", str);
//	}
//	printf("\n");
//
//	//랜덤 추출
//	printf("***** 단어 추출(랜덤) *****\n");
//	char* word = strtok(str, " ");
//	printf("첫번째 단어: %s\n", word);
//
//	while (word != NULL && idxOfWordList < MAX_WORDS ) {
//		wordList[idxOfWordList++] = word;
//		word = strtok(NULL, " ");
//	}
//	//printf("%d\n", idxOfWordList);
//	//printf("마지막 단어: %s\n", wordList[--idxOfWordList]);
//
//	srand(time(NULL));
//	
//	int randIdx = rand() % idxOfWordList;
//	printf("선택 단어: %s\n", wordList[randIdx]);
//
//	fclose(fp);
//}
