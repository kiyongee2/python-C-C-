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
//    //�ʱ� ����
//    return front == rear;
//}
//
//void enQueue(int x) {
//    if (isFull()) {
//        printf("ť�� ���� á���ϴ�!!\n");
//        return 0;
//    }
//    queue[rear] = x;
//    printf("%d ", queue[rear]);
//    rear = (rear + 1) % MAX_LEN;
//}
//
//int deQueue() {
//    if (isEmpty()) {
//        printf("ť�� ������ϴ�!!\n");
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
//	printf("%d ", deQueue()); //������� ó�� Ȯ��
//
//	return 0;
//}
