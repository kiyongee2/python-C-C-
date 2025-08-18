//#include <stdio.h>
//#define MAX_QUEUE 10  //큐의 최대 크기
//
//int queue[MAX_QUEUE];   //큐 배열 생성
//int front = 0;  //데이터 넣을 위치
//int rear = 0;   //데이터 꺼낼 위치
//
//int isFull() { //큐가 꽉 찬
//    return (rear + 1) % MAX_QUEUE == front;
//}
//
//int isEmpty() { //큐가 비어있는
//    return front == rear;
//}
//
//void enQueue(int x) { //큐에 데이터 추가
//    if (isFull()) {
//        printf("큐가 가득 찼습니다!!\n");
//        return;
//    }
//    queue[rear] = x;
//    rear = (rear + 1) % MAX_QUEUE;
//}
//
//int deQueue() { //큐에서 데이터 삭제
//    if (isEmpty()) {
//        printf("큐가 비었습니다!!\n");
//        return -1; 
//    }
//    int val = queue[front];
//    front = (front + 1) % MAX_QUEUE;
//    return val;
//}
//
//void printQueue() { //큐 상태 출력
//    printf("큐 상태: ");
//    if (isEmpty()) {
//        printf("(비어 있음)\n");
//        return;
//    }
//    int i = front;
//    while (i != rear) {
//        printf("%d ", queue[i]);
//        i = (i + 1) % MAX_QUEUE;
//    }
//    printf("\n");
//}
//
//int main() {
//
//    printf("큐에 자료 저장(넣기)\n");
//    enQueue(10);
//    enQueue(20);
//    enQueue(30);
//    printQueue();
//
//    printf("큐에서 자료 삭제(빼기)\n");
//    int val;
//
//    val = deQueue(); 
//    if (val != -1) 
//        printf("%d ", val);
//
//    val = deQueue(); 
//    if (val != -1)
//        printf("%d ", val);
//
//    /*val = deQueue(); 
//    if (val != -1)
//        printf("%d ", val);*/
//
//    /*val = deQueue(); 
//    if (val != -1)
//        printf("%d ", val); */// 비었을 때 처리 확인
//
//    printf("\n");
//
//    printQueue();
//
//    return 0;
//}
