//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node { // 노드 구조체 정의
//    int data;
//    struct Node* next;
//} Node;
//
//void append(Node** head, int value) { // 연결 리스트에 노드 추가
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("메모리 할당 실패!\n");
//        return;
//    }
//    newNode->data = value;
//    newNode->next = NULL;
//
//    if (*head == NULL) { // 첫 노드면 head에 직접 연결
//        *head = newNode;
//    }
//    else {
//        Node* current = *head;  // 마지막까지 찾아가서 연결
//        while (current->next != NULL)
//            current = current->next;
//        current->next = newNode;
//    }
//}
//
//// 연결 리스트 출력
//void printList(Node* head) {
//    Node* current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next;
//    }
//    printf("NULL\n");
//}
//
//// 메모리 해제
//void freeList(Node* head) {
//    Node* current;
//    while (head != NULL) {
//        current = head;
//        head = head->next;
//        free(current);
//    }
//}
//
//int main() {
//
//    Node* head = NULL;
//
//    // 노드 추가
//    append(&head, 10);
//    append(&head, 20);
//    append(&head, 30);
//
//    // 출력
//    printf("연결 리스트: ");
//    printList(head);
//
//    // 메모리 해제
//    freeList(head);
//
//    return 0;
//}
