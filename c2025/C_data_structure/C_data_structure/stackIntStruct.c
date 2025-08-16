//#include <stdio.h>
//
//#define MAX_LEN 4
//
//// ���� ����ü ����
//typedef struct {
//    int data[MAX_LEN]; // ���� ��� ����
//    int top;           // top �ε���
//} Stack;
//
//// ���� �ʱ�ȭ �Լ�
//void initStack(Stack* s) {
//    s->top = -1;
//}
//
//void push(Stack* s, int value) {
//    if (s->top >= MAX_LEN - 1) 
//        printf("������ ���� á���ϴ�. PUSH ����: %d\n", value);
//    else {
//        s->data[++(s->top)] = value;
//        printf("PUSH: %d\n", value);
//    }
//}
//
//int pop(Stack* s) {
//    if (s->top < 0) {
//        printf("������ ��� �ֽ��ϴ�. POP ����\n");
//        return -1;
//    }
//    else 
//        return s->data[(s->top)--];
//}
//
//// ���� ���� ���
//void printStack(Stack* s) {
//    printf("\n���� ���� ����:\n");
//    if (s->top == -1) {
//        printf("(��� ����)\n");
//    }
//    else {
//        printf("���� ��� ��: %d\n", s->top + 1);
//        for (int i = 0; i <= s->top; i++) {
//            printf("%d\n", s->data[i]);
//        }
//    }
//}
//
//int main() {
//    Stack stack;   // ���� ���� ����
//    initStack(&stack); // �ʱ�ȭ
//
//    // �� �߰� (push) : 80 - 70 - 95 - 85
//    push(&stack, 80);
//    push(&stack, 70);
//    push(&stack, 95);
//    push(&stack, 85);
//    //push(&stack, 100); // �ʰ� �Է� �� ����
//
//    // �� ���� (pop) : 85 - 95 - 70 - 80
//    pop(&stack);
//    pop(&stack);
//    pop(&stack);
//    //pop(&stack);
//    //pop(&stack); // �� ���¿��� pop �õ�
//
//    // ���� ���� ���
//    printStack(&stack);
//
//    return 0;
//}
