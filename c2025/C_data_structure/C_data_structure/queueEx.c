//#include <stdio.h>
///*
//   스택(stack)
//   - LIFO(Last In First Out) : 후입선출
//*/
//
//#define MAX_LEN 10
//int front = 0, rear = 0; //배열의 첫 인덱스, 끝 인덱스
//int queue[MAX_LEN];  //queue 배열 생성
//
//void enQueue(int x) {
//	queue[rear] = x;
//	printf("%d ", queue[rear]);
//	rear++;
//}
//
//int deQueue() {
//	if (front == rear) {
//		printf("큐가 비었습니다!!\n");
//		return 0;
//	}
//	return queue[front++];
//}
//
//int main()
//{
//	printf("큐에 자료 저장(넣기)\n");
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	printf("\n");
//
//	printf("큐에서 자료 삭제(빼기)\n");
//	printf("%d ", deQueue());
//	printf("%d ", deQueue());
//	printf("%d ", deQueue());
//	printf("%d ", deQueue());
//
//	return 0;
//}
