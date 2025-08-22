//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 고객 노드 정의
//typedef struct Node {
//    char name[20];
//    struct Node* next;
//} Node;
//
//// 대기열 구조체
//typedef struct {
//    Node* front;  // 큐의 맨 앞
//    Node* rear;   // 큐의 맨 뒤
//} Queue;
//
//// 큐 초기화
//void initQueue(Queue* q) {
//    q->front = NULL;
//    q->rear = NULL;
//}
//
//// 큐가 비었는지 확인
//int isEmpty(Queue* q) {
//    return q->front == NULL;
//}
//
//// 고객 추가 (Enqueue)
//void enQueue(Queue* q, const char* name) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("메모리 할당 실패!\n");
//        exit(1);
//    }
//    strcpy(newNode->name, name);
//    newNode->next = NULL;
//
//    if (isEmpty(q)) {
//        q->front = newNode;
//        q->rear = newNode;
//    }
//    else {
//        q->rear->next = newNode;
//        q->rear = newNode;
//    }
//    printf("%s님이 대기열에 추가되었습니다.\n", name);
//}
//
//// 고객 꺼내기 (Dequeue)
//int deQueue(Queue* q, char* name) {
//    if (isEmpty(q)) {
//        printf("대기열이 비어 있습니다!\n");
//        return -1;
//    }
//    Node* temp = q->front;
//    strcpy(name, temp->name);
//
//    q->front = q->front->next;
//    if (q->front == NULL) {  // 마지막 노드 제거 시 rear도 NULL로
//        q->rear = NULL;
//    }
//    free(temp);
//    return 0;
//}
//
//// 큐 상태 출력
//void printQueue(Queue* q) {
//    if (isEmpty(q)) {
//        printf("대기열이 비어 있습니다.\n");
//        return;
//    }
//    printf("현재 대기열: ");
//    Node* cur = q->front;
//    while (cur != NULL) {
//        printf("[%s] ", cur->name);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//// 메인 함수
//int main() {
//    Queue q;
//    char name[20];
//    int choice;
//
//    initQueue(&q);
//
//    while (1) {
//        printf("\n==== 고객 대기열 관리 ====\n");
//        printf("1. 고객 추가\n");
//        printf("2. 고객 처리\n");
//        printf("3. 대기열 출력\n");
//        printf("4. 종료\n");
//        printf("메뉴 선택: ");
//        scanf("%d", &choice);
//        getchar(); // 버퍼 정리
//
//        switch (choice) {
//        case 1:
//            printf("고객 이름 입력: ");
//            fgets(name, sizeof(name), stdin);
//            name[strcspn(name, "\n")] = '\0'; // 개행 제거
//            enQueue(&q, name);
//            break;
//
//        case 2:
//            if (deQueue(&q, name) == 0) {
//                printf("%s님 업무 처리 완료.\n", name);
//            }
//            break;
//
//        case 3:
//            printQueue(&q);
//            break;
//
//        case 4:
//            printf("프로그램을 종료합니다.\n");
//            // 남은 고객 메모리 해제
//            while (!isEmpty(&q)) {
//                deQueue(&q, name);
//            }
//            return 0;
//
//        default:
//            printf("잘못된 선택입니다. 다시 입력하세요.\n");
//        }
//    }
//}
