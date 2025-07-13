//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define NAME_LEN 100
//
//// 고객 정보 구조체
//typedef struct {
//    int id;
//    char name[NAME_LEN];
//} Customer;
//
//// 큐 노드 구조체
//typedef struct Node {
//    Customer data;
//    struct Node* next;
//} Node;
//
//// 큐 구조체
//typedef struct {
//    Node* front;
//    Node* rear;
//} Queue;
//
//// 큐 초기화
//void initQueue(Queue* q) {
//    q->front = q->rear = NULL;
//}
//
//// 큐가 비었는지 확인
//int isEmpty(Queue* q) {
//    return q->front == NULL;
//}
//
//// 고객 추가 (enQueue)
//void enQueue(Queue* q, int id, const char* name) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("메모리 할당 실패!\n");
//        return;
//    }
//    newNode->data.id = id;
//    strncpy(newNode->data.name, name, NAME_LEN);
//    newNode->next = NULL;
//
//    if (isEmpty(q)) {
//        q->front = q->rear = newNode;
//    }
//    else {
//        q->rear->next = newNode;
//        q->rear = newNode;
//    }
//}
//
//// 고객 꺼내기 (deQueue)
//Customer* deQueue(Queue* q) {
//    if (isEmpty(q)) {
//        printf("큐가 비었습니다!\n");
//        return NULL;
//    }
//
//    Node* temp = q->front;
//    Customer* customer = (Customer*)malloc(sizeof(Customer));
//    *customer = temp->data;
//
//    q->front = temp->next;
//    if (q->front == NULL) q->rear = NULL;
//
//    free(temp);
//    return customer;
//}
//
//// 메모리 정리
//void clearQueue(Queue* q) {
//    while (!isEmpty(q)) {
//        Customer* c = deQueue(q);
//        free(c);
//    }
//}
//
//int main() {
//    Queue q;
//    initQueue(&q);
//
//    // 고객 등록
//    enQueue(&q, 101, "홍길동");
//    enQueue(&q, 102, "이순신");
//    enQueue(&q, 103, "김유신");
//
//    // 고객 처리
//    Customer* c;
//    while (!isEmpty(&q)) {
//        c = deQueue(&q);
//        if (c != NULL) {
//            printf("고객 번호: %d, 이름: %s → 업무 처리 중...\n", c->id, c->name);
//            free(c);  // 동적 복사된 구조체 메모리 해제
//        }
//    }
//
//    printf("모든 고객의 업무가 완료되었습니다.\n");
//    return 0;
//}
