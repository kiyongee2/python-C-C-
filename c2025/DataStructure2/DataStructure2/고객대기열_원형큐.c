//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//
//#define MAX_QUEUE 4
//#define NAME_LEN 20
//
//// ���� ť ����ü ����
//typedef struct {
//    char* data[MAX_QUEUE];  // ���ڿ� ����� ������ �迭
//    int front;
//    int rear;
//} Queue;
//
//// ť �ʱ�ȭ
//void initQueue(Queue* q) {
//    q->front = 0;
//    q->rear = 0;
//    for (int i = 0; i < MAX_QUEUE; i++) {
//        q->data[i] = NULL;
//    }
//}
//
//// ť�� ������� Ȯ��
//bool isEmpty(Queue* q) {
//    return q->front == q->rear;
//}
//
//// ť�� ���� á���� Ȯ��
//bool isFull(Queue* q) {
//    return (q->rear + 1) % MAX_QUEUE == q->front;
//}
//
//// �� �߰�
//void enQueue(Queue* q, const char* name) {
//    if (isFull(q)) {
//        printf("ť�� ���� á���ϴ�!\n");
//        return;
//    }
//    q->data[q->rear] = (char*)malloc(strlen(name) + 1);
//    if (q->data[q->rear] == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//    strcpy(q->data[q->rear], name);
//    q->rear = (q->rear + 1) % MAX_QUEUE;
//}
//
//// �� ������
//int deQueue(Queue* q, char* name) {
//    if (isEmpty(q)) {
//        printf("ť�� ������ϴ�!\n");
//        name[0] = '\0';
//        return -1;
//    }
//    strcpy(name, q->data[q->front]);
//    free(q->data[q->front]);
//    q->data[q->front] = NULL;
//    q->front = (q->front + 1) % MAX_QUEUE;
//    return 0;
//}
//
//// ť ���� ��� (������)
//void printQueue(Queue* q) {
//    printf("���� ��⿭: ");
//    int i = q->front;
//    while (i != q->rear) {
//        printf("[%s] ", q->data[i]);
//        i = (i + 1) % MAX_QUEUE;
//    }
//    printf("\n");
//}
//
//int main() {
//    Queue q;
//    char name[NAME_LEN];
//
//    initQueue(&q);
//
//    // �� �߰�
//    enQueue(&q, "��A");
//    enQueue(&q, "��B");
//    enQueue(&q, "��C");
//    printQueue(&q);
//
//    // �� ó��
//    while (!isEmpty(&q)) {
//        deQueue(&q, name);
//        printf("%s�� ���� ó�� ��...\n", name);
//        printQueue(&q);
//    }
//
//    printf("��� ���� ������ �Ϸ�Ǿ����ϴ�.\n");
//
//    return 0;
//}
