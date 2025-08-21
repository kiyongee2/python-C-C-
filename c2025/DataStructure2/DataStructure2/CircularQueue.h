#ifndef CIRCULAR_QUEUE_H  //조건부 컴파일 블럭
#define CIRCULAR_QUEUE_H  //중복 오류 방지(매크로 이름)

#include <stdbool.h>
#define QUEUE_SIZE 10

//구조체 정의
typedef struct {
	int data[QUEUE_SIZE];
	int front;
	int rear;
}CircularQueue;

void initQueue(CircularQueue* q);  //큐 초기화

bool isEmpty(CircularQueue* q); //큐가 비었는지 여부

bool isFull(CircularQueue* q);  //큐가 가득 차있는지 여부

void enQueue(CircularQueue* q, int value); //큐에 데이터 넣기

int deQueue(CircularQueue* q); //큐에서 데이터 꺼내기

void printQueue(CircularQueue* q); //큐상태 출력
#endif

