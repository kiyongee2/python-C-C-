//#define _CRT_SECURE_NO_WARNINGS //strtok()
//#include <stdio.h>
//#include <string.h> //strtok()
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 20  //단어의 개수 
//int main()
//{
//	//파일 쓰기
//	FILE* fp; 
//	if (fopen_s(&fp, "word2.txt", "w") != 0) {
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
//	fclose(fp);
//
//    //파일 읽기
//	char word[256]; //읽은 문자열을 저장할 배열 선언
//	char wordList[MAX_WORDS]; //분리된 단어를 저장할 배열
//	int idxOfWordList = 0;
//
//	if (fopen_s(&fp, "word2.txt", "r") != 0) {
//		perror("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1
//	}
//
//	//파일 읽기
//	printf("***** 읽은 내용 *****\n");
//	while (fgets(word, sizeof(word), fp) != NULL) {
//		printf("%s", word);
//	}
//	printf("\n");
//
//	//랜덤 추출
//	printf("***** 단어 추출(랜덤) *****\n");
//	char* ptr = strtok(word, " ");
//	printf("첫번째 단어: %s\n", ptr);
//
//	while (ptr != NULL && idxOfWordList < MAX_WORDS) {
//		wordList[idxOfWordList++] = ptr;
//		ptr = strtok(NULL, " ");
//	}
//	printf("\n단어: %s\n", wordList[0]);
//
//	/*srand(time(NULL));
//
//	int randIdx = rand() % idxOfWordList;
//	printf("선택 단어: %s\n", wordList[randIdx]);*/
//
//	fclose(fp);
//
//	return 0;
//}
//
//
