//#include <stdio.h>
///*
//ť(Queue)->���� ť
//- �迭���� ���� �� �ڷḦ ���� ����(FIFO, ���Լ���)
//- front : ������ ���� ��ġ
//- rear : ������ ���� ��ġ
//
//���� ť���� MAX_QUEUE�� 4��� ������ ������ �� �ִ� ���� ������ 3���̴�.
//�ֳ��ϸ�, front == rear�϶� �� ���¿� �����ؾ��ϹǷ� �� ĭ�� �������.
//*/
//
//#define MAX_QUEUE 4  //ť�� �ִ� ũ��
//
////���� ���� ����
//int queue[MAX_QUEUE];
//int front = 0;  //������ ���� ��ġ
//int rear = 0;   //������ ���� ��ġ
//
//void enQueue(int x) {
//	if ((rear + 1) % MAX_QUEUE == front) {
//		printf("ť�� ���� á���ϴ�.\n");
//		return;
//	}
//	queue[rear] = x; //�ڿ��� ������ �ֱ�
//	rear = (rear + 1) % MAX_QUEUE; //rear�� ���� ��ġ�� �̵�
//	printf("front=%d, rear=%d, x=%d\n", queue[front], queue[rear], x);
//	//printf("%d ", x);
//}
//
//int deQueue() {
//	if (front == rear) {
//		printf("ť�� ������ϴ�.\n");
//		return -1;
//	}
//	int data = queue[front];  //��(front) �����͸� ����
//	front = (front + 1) % MAX_QUEUE;  //front ���� ��ġ�� �̵�
//	return data;  //�����͸� ������
//}
//
//int main()
//{
//	puts("=== ť�� ������ �ֱ� ===");
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	//enQueue(40);  //����, ť�� ���� ��
//
//	puts("\n=== ť���� ������ ������ ===");
//	int val;  //ť���� ���� ��(������)
//
//	/*val = deQueue();
//	printf("%d ", val);
//	
//	val = deQueue(); 
//	printf("%d ", val);
//	
//	val = deQueue(); 
//	printf("%d ", val);
//	
//	val = deQueue(); 
//	printf("%d ", val); */ // ����� �� ó�� Ȯ��
//
//	while (front != rear) {
//		val = deQueue();
//		printf("%d ", val);
//	}
//
//	return 0;
//}