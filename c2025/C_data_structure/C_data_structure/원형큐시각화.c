//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_QUEUE 6   // ���� �����ʹ� MAX_QUEUE-1 ���� ����
//#define NAME_LEN 20
//
//typedef struct {
//    char data[MAX_QUEUE][NAME_LEN];
//    int front;
//    int rear;
//} CircularQueue;
//
//int isEmpty(CircularQueue* q) {
//    return q->front == q->rear;
//}
//
//int isFull(CircularQueue* q) {
//    return (q->rear + 1) % MAX_QUEUE == q->front;
//}
//
//void printQueue(CircularQueue* q) {
//    printf("\nQueue ����:\n");
//    for (int i = 0; i < MAX_QUEUE; i++) {
//        if (strlen(q->data[i]) > 0)
//            printf("[%s]", q->data[i]);
//        else
//            printf("[ ]");
//    }
//    printf("   front=%d   rear=%d\n", q->front, q->rear);
//
//    // front, rear ǥ�� ��
//    for (int i = 0; i < MAX_QUEUE; i++) {
//        if (i == q->front && i == q->rear)
//            printf(" ^F/R");
//        else if (i == q->front)
//            printf(" ^F  ");
//        else if (i == q->rear)
//            printf("  ^R ");
//        else
//            printf("     ");
//    }
//    printf("\n");
//}
//
//void enQueue(CircularQueue* q, const char* name) {
//    if (isFull(q)) {
//        printf("%s �߰� ����: ť�� ���� á���ϴ�!\n", name);
//        return;
//    }
//    strcpy(q->data[q->rear], name);
//    q->rear = (q->rear + 1) % MAX_QUEUE;
//    printQueue(q);
//}
//
//void deQueue(CircularQueue* q, char* name) {
//    if (isEmpty(q)) {
//        printf("���� ����: ť�� ������ϴ�!\n");
//        name[0] = '\0';
//        return;
//    }
//    strcpy(name, q->data[q->front]);
//    q->data[q->front][0] = '\0'; // ���� �ڸ� �ʱ�ȭ
//    q->front = (q->front + 1) % MAX_QUEUE;
//    printQueue(q);
//}
//
//int main() {
//    CircularQueue q = { {""}, 0, 0 };
//    char name[NAME_LEN];
//
//    enQueue(&q, "A");
//    enQueue(&q, "B");
//    enQueue(&q, "C");
//    deQueue(&q, name);
//    enQueue(&q, "D");
//    enQueue(&q, "E");
//    enQueue(&q, "F"); // ���� ��
//    deQueue(&q, name);
//    deQueue(&q, name);
//    enQueue(&q, "G");
//
//    return 0;
//}
