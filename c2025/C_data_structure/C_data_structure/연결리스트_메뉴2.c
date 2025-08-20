#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 노드 구조 정의
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head = NULL; // 리스트의 시작 노드

// 함수 원형 선언
void insertNodeEnd(int value);   // 맨 뒤 삽입
void insertNodeFront(int value); // 맨 앞 삽입
void deleteNode(int value);
void printList();
void freeList();

int main() {
    int choice, value;

    while (1) {
        printf("\n=== 연결 리스트 메뉴 ===\n");
        printf("1. 맨 뒤에 노드 삽입\n");
        printf("2. 맨 앞에 노드 삽입\n");
        printf("3. 노드 삭제\n");
        printf("4. 리스트 출력\n");
        printf("5. 종료\n");
        printf("메뉴 선택: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("삽입할 값 입력: ");
            scanf("%d", &value);
            insertNodeEnd(value);
            break;
        case 2:
            printf("삽입할 값 입력: ");
            scanf("%d", &value);
            insertNodeFront(value);
            break;
        case 3:
            printf("삭제할 값 입력: ");
            scanf("%d", &value);
            deleteNode(value);
            break;
        case 4:
            printList();
            break;
        case 5:
            freeList();
            printf("프로그램 종료\n");
            return 0;
        default:
            printf("잘못된 선택입니다. 다시 입력하세요.\n");
        }
    }
}

// 맨 뒤 삽입
void insertNodeEnd(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("메모리 할당 실패\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != NULL)
            current = current->next;
        current->next = newNode;
    }
    printf("%d 맨 뒤 삽입 완료\n", value);
}

// 맨 앞 삽입
void insertNodeFront(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("메모리 할당 실패\n");
        return;
    }
    newNode->data = value;
    newNode->next = head; // 기존 head 앞에 새 노드 연결
    head = newNode;       // head를 새 노드로 변경
    printf("%d 맨 앞 삽입 완료\n", value);
}

// 노드 삭제 (값 기준)
void deleteNode(int value) {
    Node* current = head;
    Node* prev = NULL;

    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("%d 값이 리스트에 없습니다.\n", value);
        return;
    }

    if (prev == NULL) {
        head = current->next;
    }
    else {
        prev->next = current->next;
    }

    free(current);
    printf("%d 삭제 완료\n", value);
}

// 리스트 출력
void printList() {
    if (head == NULL) {
        printf("리스트가 비어있습니다.\n");
        return;
    }
    Node* current = head;
    printf("리스트: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// 메모리 해제
void freeList() {
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    head = NULL;
}
