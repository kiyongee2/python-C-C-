//#include <stdio.h>
///*
//  원형 큐에서 MAX_QUEUE가 4이라면, 실제로 저장할 수 있는 원소 개수는 3개이다.
//  (왜냐하면 front==rear일 때 "빈 상태"와 구분해야 하므로 한 칸은 항상 비워둔다.)
//*/
//
//#define MAX_QUEUE 4  //큐의 최대 크기
//
//int queue[MAX_QUEUE]; //큐 배열 생성
//int front = 0; //데이터 넣을 위치
//int rear = 0;  //데이터 꺼낼 위치
//
//void enQueue(int x) {
//	//rear 바로 다음 칸이 front와 같으면 꽉 찼다고 판단.
//	if ((rear + 1) % MAX_QUEUE == front) {
//		printf("큐가 가득 찼습니다.\n");
//		return;
//	};
//	queue[rear] = x;  //뒤(rear)에 데이터 삽입
//	rear = (rear + 1) % MAX_QUEUE;  //rear를 다음으로 이동
//	//printf("front=%d, rear=%d, x=%d\n", queue[front], queue[rear], x);
//	printf("%d ", x);
//}
//
//int deQueue() {
//	if (front == rear) {
//		printf("큐가 가득 찼습니다.\n");
//		return -1;
//	}
//	int data = queue[front]; //앞(front)의 데이터 저장
//	front = (front + 1) % MAX_QUEUE; //front를 다음으로 이동
//	return data;
//}
//
//int main()
//{
//	int value; //큐에서 꺼낸 데이터
//
//	puts("=== 큐에 데이터 넣기 ===");
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	enQueue(40); //오류
//
//	puts("=== 큐에서 데이터 꺼내기 ===");
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