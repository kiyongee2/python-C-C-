//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//
//#define MAX_QUEUE 4
//#define NAME_LEN 20
//
//// 원형 큐 구조체 정의
//typedef struct {
//    char* data[MAX_QUEUE];  // 문자열 저장용 포인터 배열
//    int front;
//    int rear;
//} Queue;
//
//// 큐 초기화
//void initQueue(Queue* q) {
//    q->front = 0;
//    q->rear = 0;
//    for (int i = 0; i < MAX_QUEUE; i++) {
//        q->data[i] = NULL;
//    }
//}
//
//// 큐가 비었는지 확인
//bool isEmpty(Queue* q) {
//    return q->front == q->rear;
//}
//
//// 큐가 가득 찼는지 확인
//bool isFull(Queue* q) {
//    return (q->rear + 1) % MAX_QUEUE == q->front;
//}
//
//// 고객 추가
//void enQueue(Queue* q, const char* name) {
//    if (isFull(q)) {
//        printf("큐가 가득 찼습니다!\n");
//        return;
//    }
//    q->data[q->rear] = (char*)malloc(strlen(name) + 1);
//    if (q->data[q->rear] == NULL) {
//        printf("메모리 할당 실패!\n");
//        exit(1);
//    }
//    strcpy(q->data[q->rear], name);
//    q->rear = (q->rear + 1) % MAX_QUEUE;
//}
//
//// 고객 꺼내기
//int deQueue(Queue* q, char* name) {
//    if (isEmpty(q)) {
//        printf("큐가 비었습니다!\n");
//        name[0] = '\0';
//        return -1;
//    }
//    strcpy(name, q->data[q->front]);
//    free(q->data[q->front]);
//    q->data[q->front] = NULL;
//    q->front = (q->front + 1) % MAX_QUEUE;
//    return 0;
//}
//
//// 큐 상태 출력 (디버깅용)
//void printQueue(Queue* q) {
//    printf("현재 대기열: ");
//    int i = q->front;
//    while (i != q->rear) {
//        printf("[%s] ", q->data[i]);
//        i = (i + 1) % MAX_QUEUE;
//    }
//    printf("\n");
//}
//
//int main() {
//    Queue q;
//    char name[NAME_LEN];
//
//    initQueue(&q);
//
//    // 고객 추가
//    enQueue(&q, "고객A");
//    enQueue(&q, "고객B");
//    enQueue(&q, "고객C");
//    printQueue(&q);
//
//    // 고객 처리
//    while (!isEmpty(&q)) {
//        deQueue(&q, name);
//        printf("%s님 업무 처리 중...\n", name);
//        printQueue(&q);
//    }
//
//    printf("모든 고객의 업무가 완료되었습니다.\n");
//
//    return 0;
//}
