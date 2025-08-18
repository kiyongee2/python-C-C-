//#include <stdio.h>
//
//#define MAX_LEN 4
//
//int stack[MAX_LEN];
//int top = -1;
//
//void push(int value) {
//    if (top < MAX_LEN - 1) {
//        stack[++top] = value;
//        printf("PUSH: %d\n", value);
//    }
//    else {
//        printf("������ ���� á���ϴ�. PUSH ����: %d\n", value);
//    }
//}
//
//int pop() {
//    if (top > -1) {
//        int value = stack[top--];
//        printf("POP: %d\n", value);
//        return value;
//    }
//    else {
//        printf("������ ��� �ֽ��ϴ�. POP ����\n");
//        return -1;
//    }
//}
//
//// ���� �ð�ȭ (������ �Ʒ� ����)
//void printStackVisual() {
//    printf("\n[���� ����]\n");
//    if (top == -1) {
//        printf("(��� ����)\n");
//        return;
//    }
//
//    for (int i = top; i >= 0; i--) {
//        if (i == top) {
//            printf("| %d | <- top\n", stack[i]);
//        }
//        else {
//            printf("| %d |\n", stack[i]);
//        }
//    }
//    printf("-----\n\n");
//}
//
//int main() {
//
//    push(80);
//    push(70);
//    push(95);
//    push(80);
//    printStackVisual();
//
//    pop();
//    printStackVisual();
//
//    pop();
//    printStackVisual();
//
//    push(100);
//    printStackVisual();
//
//    pop();
//    printStackVisual();
//
//    pop();
//    printStackVisual();
//
//    pop();
//    printStackVisual();
//
//    return 0;
//}
