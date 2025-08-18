//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_QUEUE 4
//#define NAME_LEN 20
//
//// ť ���� (������ �迭)
//char* queue[MAX_QUEUE];
//int front = 0;
//int rear = 0;
//
//// ť�� ������� Ȯ��
//int isEmpty() {
//    return front == rear;
//}
//
//// ť�� ���� á���� Ȯ��
//int isFull() {
//    return (rear + 1) % MAX_QUEUE == front;
//}
//
//// �� �߰�
//void enQueue(const char* name) {
//    if (isFull()) {
//        printf("ť�� ���� á���ϴ�!\n");
//        return;
//    }
//    // ���ڿ� ���̸�ŭ �޸� ���� �Ҵ�
//    queue[rear] = (char*)malloc(strlen(name) + 1);
//    if (queue[rear] == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//    strcpy(queue[rear], name);  // ���ڿ� ����
//    rear = (rear + 1) % MAX_QUEUE;
//}
//
//// �� ������
//int deQueue(char* name) {
//    if (isEmpty()) {
//        printf("ť�� ������ϴ�!\n");
//        name[0] = '\0';
//        return -1;
//    }
//    strcpy(name, queue[front]);   // ���ڿ� ����
//    free(queue[front]);           // �޸� ����
//    queue[front] = NULL;          // �����ϰ� �ʱ�ȭ
//    front = (front + 1) % MAX_QUEUE;
//    return 0;
//}
//
//int main() {
//    char name[NAME_LEN];
//
//    // �� ��⿭ �߰�
//    enQueue("��A");
//    enQueue("��B");
//    enQueue("��C");
//    //enQueue("��D");
//
//    // ��⿭ ó��
//    while (!isEmpty()) {
//        deQueue(name);
//        printf("%s�� ���� ó�� ��...\n", name);
//    }
//
//    printf("��� ���� ������ �Ϸ�Ǿ����ϴ�.\n");
//
//    return 0;
//}
