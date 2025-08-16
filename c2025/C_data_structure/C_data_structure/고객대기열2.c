//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h> // bool Ÿ�� ���
//
//#define MAX_QUEUE 10
//#define NAME_LEN 20
//
//// ����ü ����
//typedef struct {
//    char data[MAX_QUEUE][NAME_LEN]; // ť ������
//    int front;
//    int rear;
//} CircularQueue;
//
//// �ʱ�ȭ
//void initQueue(CircularQueue* q) {
//    q->front = 0;
//    q->rear = 0;
//}
//
//// ������� Ȯ��
//bool isEmpty(CircularQueue* q) {
//    return q->front == q->rear;
//}
//
//// ���� á���� Ȯ��
//bool isFull(CircularQueue* q) {
//    return (q->rear + 1) % MAX_QUEUE == q->front;
//}
//
//// �� �߰�
//void enQueue(CircularQueue* q, const char* name) {
//    if (isFull(q)) {
//        printf("ť�� ���� á���ϴ�!\n");
//        return;
//    }
//    strcpy(q->data[q->rear], name);
//    q->rear = (q->rear + 1) % MAX_QUEUE;
//}
//
//// �� ������
//void deQueue(CircularQueue* q, char* name) {
//    if (isEmpty(q)) {
//        printf("ť�� ������ϴ�!\n");
//        name[0] = '\0';
//        return;
//    }
//    strcpy(name, q->data[q->front]);
//    q->front = (q->front + 1) % MAX_QUEUE;
//}
//
//// ť ���� ���
//void printQueue(CircularQueue* q) {
//    printf("���� ��⿭: ");
//    if (isEmpty(q)) {
//        printf("(��� ����)\n");
//        return;
//    }
//    int i = q->front;
//    while (i != q->rear) {
//        printf("%s ", q->data[i]);
//        i = (i + 1) % MAX_QUEUE;
//    }
//    printf("\n");
//}
//
//int main() {
//    CircularQueue q;
//    char name[NAME_LEN];
//
//    initQueue(&q);
//
//    // �� ��⿭ �߰�
//    enQueue(&q, "��A");
//    enQueue(&q, "��B");
//    enQueue(&q, "��C");
//    printQueue(&q);
//
//    // ��⿭ ó��
//    while (!isEmpty(&q)) {
//        deQueue(&q, name);
//        printf("%s�� ���� ó�� ��...\n", name);
//    }
//
//    printf("��� ���� ������ �Ϸ�Ǿ����ϴ�.\n");
//    return 0;
//}
