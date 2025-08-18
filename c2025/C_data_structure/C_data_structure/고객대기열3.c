//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h> // bool 타입 사용
//
//#define MAX_QUEUE 10
//#define NAME_LEN 20
//
//// 구조체 정의
//typedef struct {
//    char data[MAX_QUEUE][NAME_LEN]; // 큐 데이터
//    int front;
//    int rear;
//} CircularQueue;
//
//// 초기화
//void initQueue(CircularQueue* q) {
//    q->front = 0;
//    q->rear = 0;
//}
//
//// 비었는지 확인
//bool isEmpty(CircularQueue* q) {
//    return q->front == q->rear;
//}
//
//// 가득 찼는지 확인
//bool isFull(CircularQueue* q) {
//    return (q->rear + 1) % MAX_QUEUE == q->front;
//}
//
//// 고객 추가
//void enQueue(CircularQueue* q, const char* name) {
//    if (isFull(q)) {
//        printf("큐가 가득 찼습니다!\n");
//        return;
//    }
//    strcpy(q->data[q->rear], name);
//    q->rear = (q->rear + 1) % MAX_QUEUE;
//}
//
//// 고객 꺼내기
//void deQueue(CircularQueue* q, char* name) {
//    if (isEmpty(q)) {
//        printf("큐가 비었습니다!\n");
//        name[0] = '\0';
//        return;
//    }
//    strcpy(name, q->data[q->front]);
//    q->front = (q->front + 1) % MAX_QUEUE;
//}
//
//// 큐 상태 출력
//void printQueue(CircularQueue* q) {
//    printf("현재 대기열: ");
//    if (isEmpty(q)) {
//        printf("(비어 있음)\n");
//        return;
//    }
//    int i = q->front;
//    while (i != q->rear) {
//        printf("%s ", q->data[i]);
//        i = (i + 1) % MAX_QUEUE;
//    }
//    printf("\n");
//}
//
//int main() {
//    CircularQueue q;
//    char name[NAME_LEN];
//
//    initQueue(&q);
//
//    // 고객 대기열 추가
//    enQueue(&q, "고객A");
//    enQueue(&q, "고객B");
//    enQueue(&q, "고객C");
//    printQueue(&q);
//
//    // 대기열 처리
//    while (!isEmpty(&q)) {
//        deQueue(&q, name);
//        printf("%s님 업무 처리 중...\n", name);
//    }
//
//    printf("모든 고객의 업무가 완료되었습니다.\n");
//    return 0;
//}
