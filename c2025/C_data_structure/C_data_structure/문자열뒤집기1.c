//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LEN 128  // 문자열 최대 길이
//
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
//        s->data[++(s->top)] = ch; //문자 저장
//}
//
//int pop(Stack* s) {
//    if (s->top < 0) {
//        printf("스택이 비어 있습니다.\n");
//        return -1;
//    }
//    else 
//        return s->data[(s->top)--]; //문자 반환
//}
//
//int main() {
//
//    Stack stack;  //스택 구조체 변수 생성
//    char str[MAX_LEN]; //문자열 배열
//
//    initStack(&stack); //초기화 함수 호출
//
//    //사용자 입력
//    printf("문자열 입력: ");
//    fgets(str, MAX_LEN, stdin);  //공백 포함 문자 입력
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
