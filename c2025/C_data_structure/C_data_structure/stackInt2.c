//#include <stdio.h>
// 
// /*����(stack)
//   - LIFO(Last In First Out) : ���Լ���
//   - top���� ����, ���� �Ͼ
// */
//
//#define MAX_LEN 4
//
//int stack[MAX_LEN];   // ���� �迭
//int top = -1;   // ������ top�� ��Ÿ��
//
//// ��� �߰� �Լ� (push)
//void push(int value) {
//    if (top >= MAX_LEN - 1) 
//        printf("������ ���� á���ϴ�. PUSH ����: %d\n", value);
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
//    else 
//        return stack[top--];
//}
//
//int main() {
//    puts("=== ���ÿ� �ڷ� ���� ===");
//    // �� �߰� (push) : 80 - 70 - 95 - 85
//    push(80);
//    push(70);
//    push(95);
//    push(85);
//    //push(100); // �ʰ� �Է� �� ����
//
//    puts("\n=== ���ÿ��� �ڷ� ���� ===");
//    // �� ���� (pop) : 85 - 95 - 70 - 80
//    /*printf("%d\n", stack[top]); //���� �� �� ���
//    pop();
//    printf("%d\n", stack[top]);
//    pop();
//    printf("%d\n", stack[top]);
//    pop();
//    printf("%d\n", stack[top]);
//    pop();
//    printf("%d\n", stack[top]);
//    pop(); //�� ���¿��� pop �õ� */
//
//    while (top != -1) { //������ ����
//        printf("%d ", stack[top]);
//        pop();
//    }
//
//    return 0;
//}
