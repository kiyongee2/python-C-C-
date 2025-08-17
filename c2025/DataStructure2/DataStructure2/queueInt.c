//#include <stdio.h>
//#define MAX_QUEUE 4  //큐의 최대 크기
//
///*
//  원형 큐에서 MAX_QUEUE가 4이라면, 실제로 저장할 수 있는 원소 개수는 3개이다.
//  (왜냐하면 front==rear일 때 "빈 상태"와 구분해야 하므로 한 칸은 항상 비워둔다.)
//*/
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
//	queue[rear] = x;
//	rear = (rear + 1) % MAX_QUEUE;
//	printf("front=%d, rear=%d, x=%d\n", queue[front], queue[rear], x);
//	/*
//	  enQueue(10);
//	  front=0, rear=0
//      (0+1)%3 == 0 → 1==0 → false
//      queue[0] = 10;
//      rear = (0+1)%3 = 1;
//      queue[front]=queue[0]=10, queue[rear]=queue[1] (아직 쓰레기 값), x=10
//
//	  enQueue(20);
//	  front=0, rear=1
//      (1+1)%3 == 0 → 2==0 -> false
//	  queue[1] = 20;
//      rear = (1+1)%3 = 2;
//      queue[front]=queue[0]=10, queue[rear]=queue[2] (쓰레기값), x=20
//
//	  enQueue(30);
//	  front=0, rear=2
//	  (1+1)%3 == 0 → 2==0 -> false
//	  queue[1] = 20;
//	  rear = (1+1)%3 = 2;
//	  queue[front]=queue[0]=10, queue[rear]=queue[2] (쓰레기값), x=20
//
//	  enQueue(40);
//	  front=0, rear=3
//	  (2+1)%3 == 0 → 3==0 -> true
//	  큐가 가득 찼습니다.
//	*/
//}
//
//int main()
//{
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	enQueue(40); //오류
//
//	return 0;
//}