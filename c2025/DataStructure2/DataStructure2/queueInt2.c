//#include <stdio.h>
///*
//  ���� ť���� MAX_QUEUE�� 4�̶��, ������ ������ �� �ִ� ���� ������ 3���̴�.
//  (�ֳ��ϸ� front==rear�� �� "�� ����"�� �����ؾ� �ϹǷ� �� ĭ�� �׻� ����д�.)
//*/
//
//#define MAX_QUEUE 4  //ť�� �ִ� ũ��
//
//int queue[MAX_QUEUE]; //ť �迭 ����
//int front = 0; //������ ���� ��ġ
//int rear = 0;  //������ ���� ��ġ
//
//void enQueue(int x) {
//	//rear �ٷ� ���� ĭ�� front�� ������ �� á�ٰ� �Ǵ�.
//	if ((rear + 1) % MAX_QUEUE == front) {
//		printf("ť�� ���� á���ϴ�.\n");
//		return;
//	};
//	queue[rear] = x;  //��(rear)�� ������ ����
//	rear = (rear + 1) % MAX_QUEUE;  //rear�� �������� �̵�
//	//printf("front=%d, rear=%d, x=%d\n", queue[front], queue[rear], x);
//	printf("%d ", x);
//}
//
//int deQueue() {
//	if (front == rear) {
//		printf("ť�� ���� á���ϴ�.\n");
//		return -1;
//	}
//	int data = queue[front]; //��(front)�� ������ ����
//	front = (front + 1) % MAX_QUEUE; //front�� �������� �̵�
//	return data;
//}
//
//int main()
//{
//	int value; //ť���� ���� ������
//
//	puts("=== ť�� ������ �ֱ� ===");
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	enQueue(40); //����
//
//	puts("=== ť���� ������ ������ ===");
//	/*value = deQueue();
//	if (value != -1)
//		printf("%d", value);*/
//
//	while (front != rear) {
//		value = deQueue();
//		if (value != -1)
//			printf("%d ", value);
//	}
//
//	return 0;
//}