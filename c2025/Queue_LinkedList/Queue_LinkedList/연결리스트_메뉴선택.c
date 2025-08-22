//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//// 노드 구조 정의
//typedef struct {
//    int data;
//    struct Node* next;
//} Node;
//
//Node* head = NULL; // 리스트의 시작 노드
//
//// 함수 원형 선언
//void insertNodeEnd(int value);   // 맨 뒤 삽입
//void insertNodeFront(int value); // 맨 앞 삽입
//void deleteNode(int value);
//void printList();
//void freeList();
//
//int main() {
//    bool run = true;
//    int choice, value;
//
//    while (run) {
//        printf("\n=== 연결 리스트 메뉴 ===\n");
//        printf("1. 맨 뒤에 노드 삽입\n");
//        printf("2. 맨 앞에 노드 삽입\n");
//        printf("3. 노드 삭제\n");
//        printf("4. 리스트 출력\n");
//        printf("5. 종료\n");
//        printf("메뉴 선택: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("삽입할 값 입력: ");
//            scanf("%d", &value);
//            insertNodeEnd(value);
//            break;
//        case 2:
//            printf("삽입할 값 입력: ");
//            scanf("%d", &value);
//            insertNodeFront(value);
//            break;
//        case 3:
//            printf("삭제할 값 입력: ");
//            scanf("%d", &value);
//            deleteNode(value);
//            break;
//        case 4:
//            printList();
//            break;
//        case 5:
//            freeList();
//            printf("프로그램 종료\n");
//            run = false;
//            break;
//        default:
//            printf("잘못된 선택입니다. 다시 입력하세요.\n");
//        }
//    }
//}
//
//
//void insertNodeEnd(int value) { // 맨 뒤 삽입
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (!newNode) {
//        printf("메모리 할당 실패\n");
//        return;
//    }
//    newNode->data = value;
//    newNode->next = NULL;
//
//    if (head == NULL) {
//        head = newNode;
//    }
//    else {
//        Node* current = head;
//        while (current->next != NULL)
//            current = current->next;
//        current->next = newNode;
//    }
//    printf("%d 맨 뒤 삽입 완료\n", value);
//}
//
//void insertNodeFront(int value) { // 맨 앞 삽입
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (!newNode) {
//        printf("메모리 할당 실패\n");
//        return;
//    }
//    newNode->data = value;
//    newNode->next = head; // 기존 head 앞에 새 노드 연결
//    head = newNode;       // head를 새 노드로 변경
//    printf("%d 맨 앞 삽입 완료\n", value);
//}
//
//void deleteNode(int value) { // 노드 삭제 (값 기준)
//    Node* current = head; //현재 탐색중인 노드를 가리킴
//    Node* prev = NULL; //current의 이전 노드
//
//    //노드 탐색 - current의 값과 삭제하려는 값이 다를때까지 탐색
//    while (current != NULL && current->data != value) {
//        //다음 노드로 이동
//        prev = current;
//        current = current->next;
//    }
//
//    if (current == NULL) {
//        printf("%d 값이 리스트에 없습니다.\n", value);
//        return;
//    }
//
//    //삭제하려는 값을 찾음 -> 링크 재연결
//    if (prev == NULL) { //첫 노드(head)인 경우 삭제
//        head = current->next;
//    }
//    else {
//        prev->next = current->next;
//    }
//
//    free(current); //현재 노드 메모리 해제
//    printf("%d 삭제 완료\n", value);
//}
//
//// 리스트 출력
//void printList() {
//    if (head == NULL) {
//        printf("리스트가 비어있습니다.\n");
//        return;
//    }
//    Node* current = head;
//    printf("리스트: ");
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next;
//    }
//    printf("NULL\n");
//}
//
//// 메모리 해제
//void freeList() {
//    Node* current = head;
//    while (current != NULL) {
//        Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//    head = NULL;
//}