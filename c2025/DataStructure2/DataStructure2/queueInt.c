//#include <stdio.h>
//#define MAX_QUEUE 4  //ť�� �ִ� ũ��
//
///*
//  ���� ť���� MAX_QUEUE�� 4�̶��, ������ ������ �� �ִ� ���� ������ 3���̴�.
//  (�ֳ��ϸ� front==rear�� �� "�� ����"�� �����ؾ� �ϹǷ� �� ĭ�� �׻� ����д�.)
//*/
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
//	queue[rear] = x;
//	rear = (rear + 1) % MAX_QUEUE;
//	printf("front=%d, rear=%d, x=%d\n", queue[front], queue[rear], x);
//	/*
//	  enQueue(10);
//	  front=0, rear=0
//      (0+1)%3 == 0 �� 1==0 �� false
//      queue[0] = 10;
//      rear = (0+1)%3 = 1;
//      queue[front]=queue[0]=10, queue[rear]=queue[1] (���� ������ ��), x=10
//
//	  enQueue(20);
//	  front=0, rear=1
//      (1+1)%3 == 0 �� 2==0 -> false
//	  queue[1] = 20;
//      rear = (1+1)%3 = 2;
//      queue[front]=queue[0]=10, queue[rear]=queue[2] (�����Ⱚ), x=20
//
//	  enQueue(30);
//	  front=0, rear=2
//	  (1+1)%3 == 0 �� 2==0 -> false
//	  queue[1] = 20;
//	  rear = (1+1)%3 = 2;
//	  queue[front]=queue[0]=10, queue[rear]=queue[2] (�����Ⱚ), x=20
//
//	  enQueue(40);
//	  front=0, rear=3
//	  (2+1)%3 == 0 �� 3==0 -> true
//	  ť�� ���� á���ϴ�.
//	*/
//}
//
//int main()
//{
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	enQueue(40); //����
//
//	return 0;
//}