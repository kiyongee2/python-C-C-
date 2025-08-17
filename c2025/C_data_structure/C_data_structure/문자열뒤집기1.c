//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LEN 128  // 문자열 최대 길이
//
//// 스택 구조체 정의
//typedef struct {
//    char data[MAX_LEN];
//    int top;
//} Stack;
//
//// 스택 초기화
//void initStack(Stack* s) {
//    s->top = -1;
//}
//
//void push(Stack* s, char ch) {
//    if (s->top >= MAX_LEN - 1) {
//        printf("스택이 가득 찼습니다.\n");
//        return;
//    }
//    else
//        s->data[++(s->top)] = ch;
//}
//
//int pop(Stack* s) {
//    if (s->top < 0) {
//        printf("스택이 비어 있습니다. POP 실패\n");
//        return -1;
//    }
//    else 
//        return s->data[(s->top)--];
//}
//
//int main() {
//
//    Stack stack;  //스택 구조체 변수 생성
//    initStack(&stack);
//
//    char str[MAX_LEN];
//    printf("문자열 입력: ");
//    fgets(str, MAX_LEN, stdin);  //공백 포함 문자 입력
//
//    str[strcspn(str, "\n")] = '\0'; // 개행 문자 제거
//
//    // 문자열을 한 글자씩 push
//    for (int i = 0; str[i] != '\0'; i++) {
//        push(&stack, str[i]);
//    }
//
//    // pop 하면서 뒤집어 출력
//    printf("뒤집은 문자열: ");
//    while (stack.top != -1) {
//        printf("%c", pop(&stack));
//    }
//
//    printf("\n");
//
//    return 0;
//}
