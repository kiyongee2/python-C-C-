//#include <stdio.h>
//#include <stdbool.h>
//
//#define QUEUE_SIZE 10
//
//typedef struct {
//	int data[QUEUE_SIZE];
//	int front;
//	int rear;
//}CircularQueue;
//
////큐 초기화
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
//
//int main()
//{
//	CircularQueue q1;
//
//	initQueue(&q1);
//
//	puts("큐1에 데이터 넣기");
//	enQueue(&q1, 10);
//	enQueue(&q1, 20);
//	enQueue(&q1, 30);
//	printQueue(&q1);
//
//	puts("큐1에 데이터 빼기");
//	printf("%d ", deQueue(&q1));
//	printf("%d ", deQueue(&q1));
//	printQueue(&q1);
//
//	return 0;
//}