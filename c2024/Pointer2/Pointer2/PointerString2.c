//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_WORDS 11
//#define MAX_LENGTH 20
//
//int main() {
//    // char* 타입의 포인터 배열 동적 할당
//    char** words = (char**)malloc(MAX_WORDS * sizeof(char*));
//
//    // 각 포인터에 문자열 저장을 위한 메모리 할당
//    for (int i = 0; i < MAX_WORDS; i++) {
//        words[i] = (char*)malloc(MAX_LENGTH * sizeof(char));
//    }
//
//    // 예시: 단어 저장
//    strcpy(words[0], "ant");
//    strcpy(words[1], "bear");
//
//    // 출력
//    printf("%s\n", words[0]);  // "ant"
//    printf("%s\n", words[1]);  // "bear"
//
//    // 메모리 해제
//    for (int i = 0; i < MAX_WORDS; i++) {
//        free(words[i]);
//    }
//    free(words);
//
//    return 0;
//}