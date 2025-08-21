#ifndef CIRCULAR_QUEUE_H  //���Ǻ� ������ ��
#define CIRCULAR_QUEUE_H  //�ߺ� ���� ����(��ũ�� �̸�)

#include <stdbool.h>
#define QUEUE_SIZE 10

//����ü ����
typedef struct {
	int data[QUEUE_SIZE];
	int front;
	int rear;
}CircularQueue;

void initQueue(CircularQueue* q);  //ť �ʱ�ȭ

bool isEmpty(CircularQueue* q); //ť�� ������� ����

bool isFull(CircularQueue* q);  //ť�� ���� ���ִ��� ����

void enQueue(CircularQueue* q, int value); //ť�� ������ �ֱ�

int deQueue(CircularQueue* q); //ť���� ������ ������

void printQueue(CircularQueue* q); //ť���� ���
#endif

