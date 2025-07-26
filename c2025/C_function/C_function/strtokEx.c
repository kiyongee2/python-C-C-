#define _CRT_SECURE_NO_WARNINGS //strtok() 안전 모드
#include <stdio.h>
#include <string.h> //strtok() 사용
#include <stdlib.h> //srand(), rand() 사용
#include <time.h> //time() 사용

#define MAX_WORDS 10  //최대 단어 개수

int main()
{
	char words[] = "I am a student";
	char* wordList[MAX_WORDS]; //분리된 단어를 저장할 배열
	int idxOfWords = 0; //배열의 인덱스

	//첫째 단어 분리
	//공백문자로 구분하여 ptr 포인터에 저장
	char* ptr = strtok(words, " ");
	printf("%s\n", ptr); //I

	/*
	  두번째 단어 분리 - I am a student
	  NULL을 넣는 이유 - 이전 호출에서 저장한 위치부터 계속 토큰을 자르기 위함
	  문자열의 끝은 '\0'(널문자) 존재*/
	/*ptr = strtok(NULL, " ");
	printf("%s\n", ptr); //am */
	printf("--------------------------\n");

	//전체 단어 분리
	while (ptr != NULL && idxOfWords < MAX_WORDS) {
		wordList[idxOfWords++] = ptr;
		ptr = strtok(NULL, " ");
	}
	printf("%d\n", idxOfWords); //인덱스의 크기

	//분리된 단어 출력
	for (int i = 0; i < idxOfWords; i++) {
		printf("%s ", wordList[i]);
	}
	printf("\n");

	printf("\n== 문자열 추출(random) ===\n");
	srand(time(NULL));
	int rndIdx;

	rndIdx = rand() % idxOfWords; //난수 저장
	printf("%s\n", wordList[rndIdx]);

	return 0;
}

