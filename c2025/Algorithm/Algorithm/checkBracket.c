//#include <stdio.h>
//#define MAX_LEN 100
//char stack[MAX_LEN];
//int top = -1;
//
//// 스택에 문자 넣기
//void push(char c) {
//    if (top >= MAX_LEN - 1) {
//        printf("스택이 가득 찼습니다.\n");
//        return;
//    }
//    stack[++top] = c;
//}
//
//// 스택에서 문자 빼기
//char pop() {
//    if (top < 0) {
//        return '\0';  // 스택이 비었을 때
//    }
//    return stack[top--];
//}
//
//
//int isEmpty() {  // 스택이 비었는지 확인
//    return top == -1;
//}
//
//// 괄호 짝이 맞는지 검사하는 함수
//int checkBrackets(const char* expr) {
//    char ch;
//    for (int i = 0; expr[i] != '\0'; i++) {
//        ch = expr[i];
//        if (ch == '(') {
//            push(ch);
//        }
//        else if (ch == ')') {
//            if (isEmpty()) {
//                return 0; // 여는 괄호 없이 닫는 괄호가 등장
//            }
//            pop();
//        }
//    }
//    return isEmpty(); // 다 끝났을 때 스택이 비어 있어야 짝이 맞음
//}
//
//int main() {
//    char expr[MAX_LEN];
//
//    printf("수식 입력 (예: (1+2)*(3+4)): ");
//    fgets(expr, MAX_LEN, stdin);
//
//    if (checkBrackets(expr)) {
//        printf("괄호의 짝이 맞습니다.\n");
//    }
//    else {
//        printf("괄호의 짝이 맞지 않습니다!\n");
//    }
//
//    return 0;
//}
