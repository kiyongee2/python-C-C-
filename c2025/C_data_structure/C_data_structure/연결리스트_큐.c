//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define NAME_LEN 100
//
//// 노드 구조체
//typedef struct Node {
//    char name[NAME_LEN];
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
//// enQueue: 고객 추가
//void enQueue(Queue* q, const char* name) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("메모리 할당 실패!\n");
//        return;
//    }
//
//    strcpy(newNode->name, name);
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
//// deQueue: 고객 꺼내기
//char* deQueue(Queue* q) {
//    if (isEmpty(q)) {
//        printf("큐가 비었습니다!\n");
//        return NULL;
//    }
//
//    Node* temp = q->front;
//    char* name = strdup(temp->name);  // 반환을 위한 복사본
//    q->front = temp->next;
//
//    if (q->front == NULL)
//        q->rear = NULL;
//
//    free(temp);
//    return name;
//}
//
//// 큐 비우기
//void clearQueue(Queue* q) {
//    while (!isEmpty(q)) {
//        free(deQueue(q));  // 반환된 복사본도 해제
//    }
//}
//
//int main() {
//    Queue q;
//    initQueue(&q);
//
//    // 고객 추가
//    enQueue(&q, "고객A");
//    enQueue(&q, "고객B");
//    enQueue(&q, "고객C");
//
//    // 고객 처리
//    char* name;
//    while (!isEmpty(&q)) {
//        name = deQueue(&q);
//        if (name != NULL) {
//            printf("%s님 업무 처리 중...\n", name);
//            free(name);  // strdup()으로 만든 복사본 해제
//        }
//    }
//
//    printf("모든 고객의 업무가 완료되었습니다.\n");
//    return 0;
//}
