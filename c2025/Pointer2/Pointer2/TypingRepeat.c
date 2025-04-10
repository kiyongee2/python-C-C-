#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char* wordList[] = { "apple", "banana", "cherry", "grape", "orange",
        "melon", "lemon", "peach", "strawberry", "kiwi" };
    char* question;   // 제시된 단어
    char answer[50];  // 사용자 입력을 저장할 배열
    int wordCount;    // 단어 개수
        
    wordCount = sizeof(wordList) / sizeof(wordList[0]);  
    srand(time(NULL));  // 랜덤 시드 설정

    while (1) {
        int rndIdx = rand() % wordCount;  // 랜덤 단어 선택
        question = wordList[rndIdx];

        printf("\n단어 입력 (exit 종료): %s\n", question);
        scanf_s("%s", answer, sizeof(answer));

        if (strcmp(answer, "exit") == 0) {  // 0 입력 시 종료
            printf("프로그램을 종료합니다.\n");
            break;
        }

        if (strcmp(question, answer) == 0) {
            printf("정답!\n");
        }
        else {
            printf("오타! 다시 시도하세요.\n");
        }
    }

    return 0;
}