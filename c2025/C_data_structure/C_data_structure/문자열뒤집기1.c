//#include <stdio.h>
//#include <string.h>
//
//#define MAX_LEN 128  // ���ڿ� �ִ� ����
//
//typedef struct {
//    char data[MAX_LEN];
//    int top;
//} Stack;
//
//// ���� �ʱ�ȭ
//void initStack(Stack* s) {
//    s->top = -1;
//}
//
//void push(Stack* s, char ch) {
//    if (s->top >= MAX_LEN - 1) {
//        printf("������ ���� á���ϴ�.\n");
//        return;
//    }
//    else
//        s->data[++(s->top)] = ch; //���� ����
//}
//
//int pop(Stack* s) {
//    if (s->top < 0) {
//        printf("������ ��� �ֽ��ϴ�.\n");
//        return -1;
//    }
//    else 
//        return s->data[(s->top)--]; //���� ��ȯ
//}
//
//int main() {
//
//    Stack stack;  //���� ����ü ���� ����
//    char str[MAX_LEN]; //���ڿ� �迭
//
//    initStack(&stack); //�ʱ�ȭ �Լ� ȣ��
//
//    //����� �Է�
//    printf("���ڿ� �Է�: ");
//    fgets(str, MAX_LEN, stdin);  //���� ���� ���� �Է�
//
//    // ���ڿ��� �� ���ھ� push
//    for (int i = 0; str[i] != '\0'; i++) {
//        push(&stack, str[i]);
//    }
//
//    // pop �ϸ鼭 ������ ���
//    printf("������ ���ڿ�: ");
//    while (stack.top != -1) {
//        printf("%c", pop(&stack));
//    }
//
//    printf("\n");
//
//    return 0;
//}
