//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_QUEUE 4
//#define NAME_LEN 20
//
//// 큐 정의
//char queue[MAX_QUEUE][NAME_LEN];
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
//void enQueue(const char* name) { //고객 추가
//    if (isFull()) {
//        printf("큐가 가득 찼습니다!\n");
//        return;
//    }
//    strcpy(queue[rear], name); //뒤에 고객 이름 저장(복사)
//    rear = (rear + 1) % MAX_QUEUE;
//}
//
//int deQueue(char* name) { // 고객 꺼내기
//    if (isEmpty()) {
//        printf("큐가 비었습니다!\n");
//        name[0] = '\0'; //name을 빈 문자로 초기화 {'고' '객' 'A' '\0'}
//        return -1;  //실패
//    }
//    strcpy(name, queue[front]); //앞의 이름을 복사
//    front = (front + 1) % MAX_QUEUE;
//    return 0; //성공
//}
//
//int main() {
//
//    char name[NAME_LEN];
//
//    // 고객 대기열 추가
//    enQueue("고객A");
//    enQueue("고객B");
//    enQueue("고객C");
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
