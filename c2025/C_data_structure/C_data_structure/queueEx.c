//#include <stdio.h>
///*
//   ����(stack)
//   - LIFO(Last In First Out) : ���Լ���
//*/
//
//#define MAX_LEN 10
//int front = 0, rear = 0; //�迭�� ù �ε���, �� �ε���
//int queue[MAX_LEN];  //queue �迭 ����
//
//void enQueue(int x) {
//	queue[rear] = x;
//	printf("%d ", queue[rear]);
//	rear++;
//}
//
//int deQueue() {
//	if (front == rear) {
//		printf("ť�� ������ϴ�!!\n");
//		return 0;
//	}
//	return queue[front++];
//}
//
//int main()
//{
//	printf("ť�� �ڷ� ����(�ֱ�)\n");
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	printf("\n");
//
//	printf("ť���� �ڷ� ����(����)\n");
//	printf("%d ", deQueue());
//	printf("%d ", deQueue());
//	printf("%d ", deQueue());
//	printf("%d ", deQueue());
//
//	return 0;
//}
