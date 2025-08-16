//#include <stdio.h>
//#include <stdlib.h>
//
//// 노드 구조체 (문자 1개 저장)
//typedef struct Node {
//    char data;
//    struct Node* next;
//} Node;
//
//// 큐 구조체
//typedef struct {
//    Node* rear; // rear만 있으면 front는 rear->next
//} CircularQueue;
//
//// 큐 초기화
//void initQueue(CircularQueue* q) {
//    q->rear = NULL;
//}
//
//// 큐가 비었는지 확인
//int isEmpty(CircularQueue* q) {
//    return q->rear == NULL;
//}
//
//// 큐에 문자 추가 (rear)
//void enQueue(CircularQueue* q, char ch) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->data = ch;
//
//    if (isEmpty(q)) {
//        q->rear = newNode;
//        q->rear->next = q->rear; // 자기 자신 가리킴
//    }
//    else {
//        newNode->next = q->rear->next; // 기존 front 연결
//        q->rear->next = newNode;
//        q->rear = newNode; // rear를 새 노드로 변경
//    }
//}
//
//// 큐에서 문자 제거 (front)
//char deQueue(CircularQueue* q) {
//    if (isEmpty(q)) {
//        printf("큐가 비었습니다!\n");
//        return '\0';
//    }
//
//    Node* front = q->rear->next;
//    char ch = front->data;
//
//    if (front == q->rear) { // 노드가 하나뿐인 경우
//        q->rear = NULL;
//    }
//    else {
//        q->rear->next = front->next; // front 제거
//    }
//    free(front);
//    return ch;
//}
//
//// 큐 출력 (front부터)
//void printQueue(CircularQueue* q) {
//    if (isEmpty(q)) {
//        printf("[비어 있음]\n");
//        return;
//    }
//    Node* curr = q->rear->next; // front부터
//    do {
//        printf("[%c] ", curr->data);
//        curr = curr->next;
//    } while (curr != q->rear->next);
//    printf("\n");
//}
//
//// 테스트
//int main() {
//    CircularQueue q;
//    initQueue(&q);
//
//    enQueue(&q, 'A');
//    enQueue(&q, 'B');
//    enQueue(&q, 'C');
//    printQueue(&q);
//
//    char ch = deQueue(&q);
//    printf("%c 제거 완료\n", ch);
//    printQueue(&q);
//
//    enQueue(&q, 'D');
//    printQueue(&q);
//
//    ch = deQueue(&q);
//    printf("%c 제거 완료\n", ch);
//    printQueue(&q);
//
//    return 0;
//}
