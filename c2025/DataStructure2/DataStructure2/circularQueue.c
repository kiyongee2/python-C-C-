//#include "CircularQueue.h"
//#include <stdio.h>
//
//void initQueue(CircularQueue* q) {
//	q->front = 0;
//	q->rear = 0;
//}
//
//bool isEmpty(CircularQueue* q) {
//	return q->front == q->rear;
//}
//
//bool isFull(CircularQueue* q) {
//	return (q->rear + 1) % QUEUE_SIZE == q->front;
//}
//
//void enQueue(CircularQueue* q, int value) {
//	if (isFull(q)) {
//		printf("큐가 가득 찼습니다.\n");
//		return;
//	}
//	q->data[q->rear] = value;
//	q->rear = (q->rear + 1) % QUEUE_SIZE;
//}
//
//int deQueue(CircularQueue* q) {
//	if (isEmpty(q)) {
//		printf("큐가 비었습니다.\n");
//		return -1;
//	}
//	int value = q->data[q->front];
//	q->front = (q->front + 1) % QUEUE_SIZE;
//	return value;
//}
//
//void printQueue(CircularQueue* q) {
//	printf("큐 상태: ");
//	if (isEmpty(q)) {
//		puts("(비어 있음)");
//		return;
//	}
//	int i = q->front; //i = 0
//	while (i != q->rear) {
//		printf("%d ", q->data[i]);
//		i = (i + 1) % QUEUE_SIZE;
//	}
//	printf("\n");
//}