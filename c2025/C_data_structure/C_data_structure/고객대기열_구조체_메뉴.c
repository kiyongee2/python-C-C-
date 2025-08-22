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
//    printf("%s님이 대기열에 추가되었습니다.\n", name);
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
//// 큐 상태 출력
//void printQueue(Queue* q) {
//    if (isEmpty(q)) {
//        printf("대기열이 비어 있습니다.\n");
//        return;
//    }
//    printf("현재 대기열: ");
//    int i = q->front;
//    while (i != q->rear) {
//        printf("[%s] ", q->data[i]);
//        i = (i + 1) % MAX_QUEUE;
//    }
//    printf("\n");
//}
//
//// 메인 함수
//int main() {
//    Queue q;
//    char name[NAME_LEN];
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
//        getchar(); // 입력 버퍼 정리 (엔터 제거)
//
//        switch (choice) {
//        case 1:
//            printf("고객 이름 입력: ");
//            fgets(name, NAME_LEN, stdin);
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
//            // 종료 전 남은 메모리 해제
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
