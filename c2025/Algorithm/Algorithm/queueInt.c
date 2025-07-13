//#include <stdio.h>
//
//#define MAX_LEN 10
//int queue[MAX_LEN];
//int front = 0, rear = 0;
//
//int isFull() {
//    //rear = 9, front = 1
//    return (rear + 1) % MAX_LEN == front;
//}
//
//int isEmpty() {
//    //초기 상태
//    return front == rear;
//}
//
//void enQueue(int x) {
//    if (isFull()) {
//        printf("큐가 가득 찼습니다!!\n");
//        return 0;
//    }
//    queue[rear] = x;
//    printf("%d ", queue[rear]);
//    rear = (rear + 1) % MAX_LEN;
//}
//
//int deQueue() {
//    if (isEmpty()) {
//        printf("큐가 비었습니다!!\n");
//        return 0;
//    }
//
//    int val = queue[front];
//    front = (front + 1) % MAX_LEN;
//    return val;
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
//	printf("%d ", deQueue()); //비었을때 처리 확인
//
//	return 0;
//}
