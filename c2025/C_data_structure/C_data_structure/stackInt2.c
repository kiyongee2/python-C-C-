//#include <stdio.h>
// 
// /*����(stack)
//   - LIFO(Last In First Out) : ���Լ���*/
//
//#define MAX_LEN 4
//int stack[MAX_LEN];   // ���� �迭
//int top = -1;   // ������ top�� ��Ÿ��
//
//// ��� �߰� �Լ� (push)
//void push(int value) {
//    if (top >= MAX_LEN - 1) {
//        printf("������ ���� á���ϴ�. PUSH ����: %d\n", value);
//    }
//    else {
//        stack[++top] = value; //������
//        printf("PUSH: %d\n", value);
//    }
//}
//
//int pop() {  // ��� ���� �Լ� (pop)
//    if (top < 0) {
//        printf("������ ��� �ֽ��ϴ�. POP ����\n");
//        return -1;
//    }
//    else {
//        return stack[top--];
//    }
//}
//
//void printStack() { // ���� ���� ��� �Լ�
//    printf("\n���� �迭 ����:\n");
//    if (top == -1) {
//        printf("(��� ����)\n");
//    }
//    else {
//        printf("���� ��� ��: %d\n", top + 1);
//        for (int i = 0; i <= top; i++) {
//            printf("%d\n", stack[i]);
//        }
//    }
//}
//
//int main() {
//
//    // �� �߰� (push) : 80 - 70 - 95 - 85
//    push(80);
//    push(70);
//    push(95);
//    push(85);
//    //push(100); // �ʰ� �Է� �� ����
//
//    // �� ���� (pop) : 85 - 95 - 70 - 80
//    pop();
//    pop();
//    pop();
//    //pop();
//    //pop(); // �� ���¿��� pop �õ�
//
//    // ���� ���� ���
//    printStack();
//
//    return 0;
//}
