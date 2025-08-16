//#include <stdio.h>
//#include <stdlib.h>
//
//// ��� ����ü (���� 1�� ����)
//typedef struct Node {
//    char data;
//    struct Node* next;
//} Node;
//
//// ť ����ü
//typedef struct {
//    Node* rear; // rear�� ������ front�� rear->next
//} CircularQueue;
//
//// ť �ʱ�ȭ
//void initQueue(CircularQueue* q) {
//    q->rear = NULL;
//}
//
//// ť�� ������� Ȯ��
//int isEmpty(CircularQueue* q) {
//    return q->rear == NULL;
//}
//
//// ť�� ���� �߰� (rear)
//void enQueue(CircularQueue* q, char ch) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->data = ch;
//
//    if (isEmpty(q)) {
//        q->rear = newNode;
//        q->rear->next = q->rear; // �ڱ� �ڽ� ����Ŵ
//    }
//    else {
//        newNode->next = q->rear->next; // ���� front ����
//        q->rear->next = newNode;
//        q->rear = newNode; // rear�� �� ���� ����
//    }
//}
//
//// ť���� ���� ���� (front)
//char deQueue(CircularQueue* q) {
//    if (isEmpty(q)) {
//        printf("ť�� ������ϴ�!\n");
//        return '\0';
//    }
//
//    Node* front = q->rear->next;
//    char ch = front->data;
//
//    if (front == q->rear) { // ��尡 �ϳ����� ���
//        q->rear = NULL;
//    }
//    else {
//        q->rear->next = front->next; // front ����
//    }
//    free(front);
//    return ch;
//}
//
//// ť ��� (front����)
//void printQueue(CircularQueue* q) {
//    if (isEmpty(q)) {
//        printf("[��� ����]\n");
//        return;
//    }
//    Node* curr = q->rear->next; // front����
//    do {
//        printf("[%c] ", curr->data);
//        curr = curr->next;
//    } while (curr != q->rear->next);
//    printf("\n");
//}
//
//// �׽�Ʈ
//int main() {
//    CircularQueue q;
//    initQueue(&q);
//
//    enQueue(&q, 'A');
//    enQueue(&q, 'B');
//    enQueue(&q, 'C');
//    printQueue(&q);
//
//    char ch = deQueue(&q);
//    printf("%c ���� �Ϸ�\n", ch);
//    printQueue(&q);
//
//    enQueue(&q, 'D');
//    printQueue(&q);
//
//    ch = deQueue(&q);
//    printf("%c ���� �Ϸ�\n", ch);
//    printQueue(&q);
//
//    return 0;
//}
