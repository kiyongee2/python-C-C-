//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 노드 구조체 정의
//typedef struct Node {
//    char name[20];        // 고객 이름
//    struct Node* next;    // 다음 고객
//} Node;
//
//// 큐 구조체 정의 (front, rear 관리)
//typedef struct {
//    Node* front;
//    Node* rear;
//} Queue;
//
//// 큐 초기화
//void initQueue(Queue* q) {
//    q->front = NULL;
//    q->rear = NULL;
//}
//
//// 고객 추가 (enqueue)
//void enqueue(Queue* q, const char* name) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("메모리 할당 실패!\n");
//        exit(1);
//    }
//    strcpy(newNode->name, name);
//    newNode->next = NULL;
//
//    if (q->rear == NULL) {
//        // 큐가 비어 있으면 front와 rear 둘 다 새 노드
//        q->front = q->rear = newNode;
//    }
//    else {
//        q->rear->next = newNode; // 기존 마지막 노드 → 새 노드 연결
//        q->rear = newNode;       // rear 갱신
//    }
//    printf("고객 [%s] 대기열에 추가됨\n", name);
//}
//
//// 고객 호출 (dequeue)
//void dequeue(Queue* q) {
//    if (q->front == NULL) {
//        printf("대기열이 비어 있습니다!\n");
//        return;
//    }
//
//    Node* temp = q->front;
//    printf("고객 [%s] 서비스 완료 및 제거됨\n", temp->name);
//
//    q->front = q->front->next;
//    if (q->front == NULL) {
//        q->rear = NULL; // 마지막 고객 제거 시 rear도 NULL
//    }
//    free(temp);
//}
//
//// 대기열 출력
//void printQueue(Queue* q) {
//    if (q->front == NULL) {
//        printf("대기열이 비어 있습니다.\n");
//        return;
//    }
//
//    Node* current = q->front;
//    printf("현재 대기열: ");
//    while (current != NULL) {
//        printf("%s -> ", current->name);
//        current = current->next;
//    }
//    printf("NULL\n");
//}
//
//// 메모리 해제
//void freeQueue(Queue* q) {
//    Node* current = q->front;
//    while (current != NULL) {
//        Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//    q->front = q->rear = NULL;
//}
//
//int main() {
//    Queue q;
//    initQueue(&q);
//
//    int choice;
//    char name[20];
//
//    while (1) {
//        printf("\n--- 고객 대기열 관리 ---\n");
//        printf("1. 고객 추가 (Enqueue)\n");
//        printf("2. 고객 호출 (Dequeue)\n");
//        printf("3. 대기열 출력\n");
//        printf("4. 종료\n");
//        printf("선택: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("고객 이름 입력: ");
//            scanf("%s", name);
//            enqueue(&q, name);
//            break;
//        case 2:
//            dequeue(&q);
//            break;
//        case 3:
//            printQueue(&q);
//            break;
//        case 4: 
//            freeQueue(&q);
//            printf("프로그램 종료\n");
//            return 0;
//        default:
//            printf("잘못된 선택입니다.\n");
//        }
//    }
//}
