#include <stdio.h>
#include <stdbool.h> // bool Ÿ��

#define QUEUE_SIZE 10

// ����ü ����
typedef struct {
    int data[QUEUE_SIZE];
    int front;
    int rear;
} CircularQueue;

// ť �ʱ�ȭ
void initQueue(CircularQueue* q) {
    q->front = 0;
    q->rear = 0;
}

// ť�� ������� Ȯ��
bool isEmpty(CircularQueue* q) {
    return q->front == q->rear;
}

// ť�� ���� á���� Ȯ��
bool isFull(CircularQueue* q) {
    return (q->rear + 1) % QUEUE_SIZE == q->front;
}

// ������ �߰�
void enQueue(CircularQueue* q, int value) {
    if (isFull(q)) {
        printf("ť�� ���� á���ϴ�!!\n");
        return;
    }
    q->data[q->rear] = value;
    q->rear = (q->rear + 1) % QUEUE_SIZE;
}

int deQueue(CircularQueue* q) { // ������ ����
    if (isEmpty(q)) {
        printf("ť�� ������ϴ�!!\n");
        return -1; 
    }
    int value = q->data[q->front];
    q->front = (q->front + 1) % QUEUE_SIZE;
    return value;
}

void printQueue(CircularQueue* q) { // ť ���� ���
    printf("ť ����: ");
    if (isEmpty(q)) {
        printf("(��� ����)\n");
        return;
    }
    int i = q->front;
    while (i != q->rear) {
        printf("%d ", q->data[i]);
        i = (i + 1) % QUEUE_SIZE;
    }
    printf("\n");
}

int main() {

    CircularQueue q1, q2;

    // ť �ʱ�ȭ
    initQueue(&q1);
    initQueue(&q2);

    printf("=== ť 1�� ������ �ֱ� ===\n");
    enQueue(&q1, 10);
    enQueue(&q1, 20);
    enQueue(&q1, 30);
    printQueue(&q1);

    printf("\n=== ť 1���� ������ ���� ===\n");
    printf("%d ", deQueue(&q1));
    printf("%d ", deQueue(&q1));
    printQueue(&q1);

    printf("\n=== ť 2 �׽�Ʈ ===\n");
    enQueue(&q2, 100);
    enQueue(&q2, 200);
    printQueue(&q2);

    return 0;
}
