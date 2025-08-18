//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_QUEUE 4
//#define NAME_LEN 20
//
//// 큐 정의 (포인터 배열)
//char* queue[MAX_QUEUE];
//int front = 0;
//int rear = 0;
//
//// 큐가 비었는지 확인
//int isEmpty() {
//    return front == rear;
//}
//
//// 큐가 가득 찼는지 확인
//int isFull() {
//    return (rear + 1) % MAX_QUEUE == front;
//}
//
//// 고객 추가
//void enQueue(const char* name) {
//    if (isFull()) {
//        printf("큐가 가득 찼습니다!\n");
//        return;
//    }
//    // 문자열 길이만큼 메모리 동적 할당
//    queue[rear] = (char*)malloc(strlen(name) + 1);
//    if (queue[rear] == NULL) {
//        printf("메모리 할당 실패!\n");
//        exit(1);
//    }
//    strcpy(queue[rear], name);  // 문자열 복사
//    rear = (rear + 1) % MAX_QUEUE;
//}
//
//// 고객 꺼내기
//int deQueue(char* name) {
//    if (isEmpty()) {
//        printf("큐가 비었습니다!\n");
//        name[0] = '\0';
//        return -1;
//    }
//    strcpy(name, queue[front]);   // 문자열 복사
//    free(queue[front]);           // 메모리 해제
//    queue[front] = NULL;          // 안전하게 초기화
//    front = (front + 1) % MAX_QUEUE;
//    return 0;
//}
//
//int main() {
//    char name[NAME_LEN];
//
//    // 고객 대기열 추가
//    enQueue("고객A");
//    enQueue("고객B");
//    enQueue("고객C");
//    //enQueue("고객D");
//
//    // 대기열 처리
//    while (!isEmpty()) {
//        deQueue(name);
//        printf("%s님 업무 처리 중...\n", name);
//    }
//
//    printf("모든 고객의 업무가 완료되었습니다.\n");
//
//    return 0;
//}
