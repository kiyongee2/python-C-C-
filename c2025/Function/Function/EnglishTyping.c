//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//int main(){
//    char* wordList[] = { "apple", "banana", "cherry", "grape", "orange",
//        "melon", "lemon", "peach", "strawberry", "kiwi" };
//    int wordCount = sizeof(wordList) / sizeof(wordList[0]);  // 단어 개수
//
//    char input[50];  // 사용자 입력을 저장할 배열
//
//    srand(time(NULL));  // 랜덤 시드 설정
//
//    while (1) {
//        int randomIndex = rand() % wordCount;  // 랜덤 단어 선택
//        char* targetWord = wordList[randomIndex];
//
//        printf("\n다음 단어를 입력하세요 (exit 입력 시 종료): %s\n", targetWord);
//        scanf("%s", input);
//
//        if (strcmp(input, "exit") == 0) {  // 0 입력 시 종료
//            printf("프로그램을 종료합니다.\n");
//            break;
//        }
//
//        if (strcmp(input, targetWord) == 0) {
//            printf("정답!\n");
//        }
//        else {
//            printf("오타! 다시 시도하세요.\n");
//        }
//    }
//
//    return 0;
//}