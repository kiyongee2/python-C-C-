//#define _CRT_SECURE_NO_WARNINGS //strtok()
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 10    //단어의 개수
//#define MAX_LENGTH 20   //단어의 길이
//int main()
//{
//    // 1. 단어 분리 및 저장
//    char words[] = "ant bear chicken cow dog elephant monkey lion tiger horse";
//    char* wordList[MAX_WORDS]; // 분리된 단어 저장용 배열
//    int idxOfWords = 0;
//
//    char* ptr = strtok(words, " "); //공백을 구분기호로 문자열 자르기
//    while (ptr != NULL && idxOfWords < MAX_WORDS){
//        wordList[idxOfWords++] = ptr;
//        ptr = strtok(NULL, " ");
//    }
//
//    // 2. 타자 게임 준비
//    char* question;
//    char* answer = NULL; //동적 배열로 할당
//    int n = 1;
//    clock_t start, end;
//    double elapsedTime;
//
//    srand(time(NULL)); //난수 생성을 위한 시드 설정
//
//    printf("영어 타자 게임, 준비되면 엔터> ");
//    getchar();
//    start = clock();
//    while (n <= 10){
//        printf("\n문제 %d\n", n);
//        int rndIdx = rand() % idxOfWords; //실제 단어 개수 사용
//        question = wordList[rndIdx];  //랜덤한 단어 추출
//        printf("%s\n", question); //문제 출제
//
//        answer = (char*)malloc(MAX_LENGTH * sizeof(char));
//        if (answer == NULL) {
//			puts("동적 메모리 할당에 실패했습니다.");
//			exit(0);
//		}
//
//        scanf("%s", answer);  //사용자 입력
//        if (strcmp(question, answer) == 0){
//            printf("통과!\n");
//            n++;
//        }else{
//            printf("오타! 다시 도전!\n");
//        }
//    }
//    end = clock();
//    elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("게임 소요 시간: %.2f초\n", elapsedTime);
//    free(answer); // 메모리 해제
//    return 0;
//}
