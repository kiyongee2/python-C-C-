#define _CRT_SECURE_NO_WARNINGS //strtok()
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_WORDS 10    //단어의 개수
#define MAX_LENGTH 20   //단어의 길이
int main()
{
    //1. word.txt 파일 읽고 문자열 저장
    FILE* fp; //파일 포인터 변수 
    char words[256];

    fp = fopen("word.txt", "r"); //읽기 모드 - "r"
    if (fp == NULL) {
        printf("파일 열기에 실패함\n");
        return 1;  //에러시 1 or -1
    }

    //문자열 가져오기
    while (fgets(words, sizeof(words), fp) != NULL) {
        //printf("%s", words);
    }

    // 2. 단어 분리 및 저장
    char* wordList[MAX_WORDS]; // 분리된 단어 저장용 배열
    int idxOfWords = 0;

    char* ptr = strtok(words, " "); //공백을 구분기호로 문자열 자르기
    while (ptr != NULL && idxOfWords < MAX_WORDS) {
        wordList[idxOfWords++] = ptr;
        ptr = strtok(NULL, " ");
    }

    // 2. 타자 게임 준비
    char* question;
    char* answer = (char*)malloc(MAX_LENGTH * sizeof(char)); //동적 배열로 할당
    int n = 1;
    clock_t start, end;
    double elapsedTime;
    srand(time(NULL));

    printf("[영어 타자 게임], 준비되면 엔터> ");
    getchar();
    start = clock();
    while (n <= 10) {
        printf("\n문제 %d\n", n);
        int rndIdx = rand() % idxOfWords; //실제 단어 개수 사용
        question = wordList[rndIdx];  //랜덤한 단어 추출
        printf("%s\n", question); //문제 출제
        scanf("%s", answer);  //사용자 입력
        if (strcmp(question, answer) == 0) {
            printf("통과!\n");
            n++;
        }else {
            printf("오타! 다시 도전!\n");
        }
    }
    end = clock();
    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("게임 소요 시간: %.2f초\n", elapsedTime);
    free(answer); // 메모리 해제

    system("pause");

    return 0;
}