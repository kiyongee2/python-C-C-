//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define MAX_WORDS 100
//#define MAX_LEN 100
//
//// 스택 구조 정의
//char* stack[MAX_WORDS];
//int top = -1;
//
//// 문자열 한 단어씩 push
//void push(char* word) {
//    if (top >= MAX_WORDS - 1) {
//        printf("스택이 가득 찼습니다.\n");
//        return;
//    }
//    stack[++top] = _strdup(word);  // strdup: 문자열 복사
//}
//
//// 단어 pop
//char* pop() {
//    if (top < 0) {
//        return NULL;
//    }
//    return stack[top--];
//}
//
//int main() {
//    char str[MAX_LEN];
//    printf("문장 입력: ");
//    fgets(str, MAX_LEN, stdin);
//
//    // 줄바꿈 제거
//    str[strcspn(str, "\n")] = '\0';
//
//    // 단어 분리
//    char* token = strtok(str, " ");
//    while (token != NULL) {
//        push(token);
//        token = strtok(NULL, " ");
//    }
//
//    // 스택에서 pop하며 단어 순서 뒤집기
//    printf("단어 순서 뒤집기: ");
//    while (top >= 0) {
//        printf("%s ", pop());
//    }
//    printf("\n");
//
//    return 0;
//}
