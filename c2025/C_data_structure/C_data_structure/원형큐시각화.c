//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_QUEUE 6   // 실제 데이터는 MAX_QUEUE-1 개만 가능
//#define NAME_LEN 20
//
//typedef struct {
//    char data[MAX_QUEUE][NAME_LEN];
//    int front;
//    int rear;
//} CircularQueue;
//
//int isEmpty(CircularQueue* q) {
//    return q->front == q->rear;
//}
//
//int isFull(CircularQueue* q) {
//    return (q->rear + 1) % MAX_QUEUE == q->front;
//}
//
//void printQueue(CircularQueue* q) {
//    printf("\nQueue 상태:\n");
//    for (int i = 0; i < MAX_QUEUE; i++) {
//        if (strlen(q->data[i]) > 0)
//            printf("[%s]", q->data[i]);
//        else
//            printf("[ ]");
//    }
//    printf("   front=%d   rear=%d\n", q->front, q->rear);
//
//    // front, rear 표시 줄
//    for (int i = 0; i < MAX_QUEUE; i++) {
//        if (i == q->front && i == q->rear)
//            printf(" ^F/R");
//        else if (i == q->front)
//            printf(" ^F  ");
//        else if (i == q->rear)
//            printf("  ^R ");
//        else
//            printf("     ");
//    }
//    printf("\n");
//}
//
//void enQueue(CircularQueue* q, const char* name) {
//    if (isFull(q)) {
//        printf("%s 추가 실패: 큐가 가득 찼습니다!\n", name);
//        return;
//    }
//    strcpy(q->data[q->rear], name);
//    q->rear = (q->rear + 1) % MAX_QUEUE;
//    printQueue(q);
//}
//
//void deQueue(CircularQueue* q, char* name) {
//    if (isEmpty(q)) {
//        printf("삭제 실패: 큐가 비었습니다!\n");
//        name[0] = '\0';
//        return;
//    }
//    strcpy(name, q->data[q->front]);
//    q->data[q->front][0] = '\0'; // 꺼낸 자리 초기화
//    q->front = (q->front + 1) % MAX_QUEUE;
//    printQueue(q);
//}
//
//int main() {
//    CircularQueue q = { {""}, 0, 0 };
//    char name[NAME_LEN];
//
//    enQueue(&q, "A");
//    enQueue(&q, "B");
//    enQueue(&q, "C");
//    deQueue(&q, name);
//    enQueue(&q, "D");
//    enQueue(&q, "E");
//    enQueue(&q, "F"); // 가득 참
//    deQueue(&q, name);
//    deQueue(&q, name);
//    enQueue(&q, "G");
//
//    return 0;
//}
