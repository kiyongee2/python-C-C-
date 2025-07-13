//#include <stdio.h>
//#define MAX_LEN 100
//char stack[MAX_LEN];
//int top = -1;
//
//// ���ÿ� ���� �ֱ�
//void push(char c) {
//    if (top >= MAX_LEN - 1) {
//        printf("������ ���� á���ϴ�.\n");
//        return;
//    }
//    stack[++top] = c;
//}
//
//// ���ÿ��� ���� ����
//char pop() {
//    if (top < 0) {
//        return '\0';  // ������ ����� ��
//    }
//    return stack[top--];
//}
//
//
//int isEmpty() {  // ������ ������� Ȯ��
//    return top == -1;
//}
//
//// ��ȣ ¦�� �´��� �˻��ϴ� �Լ�
//int checkBrackets(const char* expr) {
//    char ch;
//    for (int i = 0; expr[i] != '\0'; i++) {
//        ch = expr[i];
//        if (ch == '(') {
//            push(ch);
//        }
//        else if (ch == ')') {
//            if (isEmpty()) {
//                return 0; // ���� ��ȣ ���� �ݴ� ��ȣ�� ����
//            }
//            pop();
//        }
//    }
//    return isEmpty(); // �� ������ �� ������ ��� �־�� ¦�� ����
//}
//
//int main() {
//    char expr[MAX_LEN];
//
//    printf("���� �Է� (��: (1+2)*(3+4)): ");
//    fgets(expr, MAX_LEN, stdin);
//
//    if (checkBrackets(expr)) {
//        printf("��ȣ�� ¦�� �½��ϴ�.\n");
//    }
//    else {
//        printf("��ȣ�� ¦�� ���� �ʽ��ϴ�!\n");
//    }
//
//    return 0;
//}
