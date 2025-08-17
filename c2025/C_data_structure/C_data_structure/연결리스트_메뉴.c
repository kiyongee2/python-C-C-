//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//// 노드 구조 정의
//typedef struct {
//    int value;           // 노드가 저장하는 값
//    struct Node* next;  // 다음 노드의 주소(자기 참조)
//} Node;
//
//Node* head = NULL; //첫 노드의 주소를 저장
//
//void insertNodeFront(int x) {
//    Node* newNode;
//    newNode = (Node*)malloc(sizeof(Node));
//    newNode->value = x;
//    newNode->next = NULL;
//
//    if (head == NULL) {
//        head = newNode;
//        return;
//    }
//
//    newNode->next = head;
//    head = newNode;
//}
//
//void displayNode() {
//    Node* current = head;
//    if (head == NULL) {
//        printf("연결리스트가 구성되지 않았습니다.\n");
//        return;
//    }
//
//    while (current->next != NULL) {
//        printf("%d => ", current->value);
//        current = current->next;
//    }
//    printf("%d\n", current->value);
//}
//
//int main() {
//    int choice, num;
//
//    while (true) {
//
//        system("cls");
//        printf("\n*** 단일 연결 리스트 ***\n");
//        printf("1. 노드 삽입\n");
//        printf("2. 리스트 출력\n");
//        printf("0. 프로그램 종료\n");
//
//        printf("메뉴 선택: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("정수 입력: ");
//            scanf("%d", &num);
//            insertNodeFront(num);
//            break;
//        case 2:
//            displayNode();
//            break;
//        case 0:
//            exit(0);
//        }
//        printf("\n\n\t\t");
//        system("pause");
//    }
//
//
//    return 0;
//}
