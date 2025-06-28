#include <stdio.h>
#define MAX_LEN 4

int carts[MAX_LEN];   // ���� �迭
int idxOfCarts = 0;   // ������ top�� ��Ÿ��

// ��� �߰� �Լ� (push)
void push(int value) {
    if (idxOfCarts < MAX_LEN) {
        carts[idxOfCarts++] = value;
        printf("PUSH: %d\n", value);
    }
    else {
        printf("������ ���� á���ϴ�. PUSH ����: %d\n", value);
    }
}

// ��� ���� �Լ� (pop)
void pop() {
    if (idxOfCarts > 0) {
        int value = carts[--idxOfCarts];
        printf("POP: %d\n", value);
    }
    else {
        printf("������ ��� �ֽ��ϴ�. POP ����\n");
    }
}

// ���� ���� ��� �Լ�
void printStack() {
    printf("\n���� �迭 ����:\n");
    if (idxOfCarts == 0) {
        printf("(��� ����)\n");
    }
    else {
        printf("���� ��� ��: %d\n", idxOfCarts);
        for (int i = 0; i < idxOfCarts; i++) {
            printf("%d\n", carts[i]);
        }
    }
}

int main() {
    // �� �߰� (push)
    push(80);
    push(70);
    push(95);
    push(80);
    push(100); // �ʰ� �Է� �� ����

    // �� ���� (pop)
    pop();
    pop();
    pop();
    pop();
    pop(); // �� ���¿��� pop �õ�

    // ���� ���� ���
    printStack();

    return 0;
}
