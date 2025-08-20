//#include <stdio.h>
//#include <stdlib.h>
//
//// 노드 구조체 정의
//typedef struct {
//    int data;
//    struct Node* next;
//} Node;
//
//// 노드 생성 함수
//Node* createNode(int value) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("메모리 할당 실패!\n");
//        exit(1);
//    }
//    newNode->data = value;
//    newNode->next = NULL;
//    return newNode;
//}
//
//// 리스트 끝에 노드 추가
//void append(Node** head, int value) {
//    Node* newNode = createNode(value);
//
//    if (*head == NULL) { // 리스트가 비었을 경우
//        *head = newNode;
//        return;
//    }
//
//    Node* current = *head;
//    while (current->next != NULL)
//        current = current->next;
//    current->next = newNode;
//}
//
//// 특정 값의 노드 삭제
//void deleteNode(Node** head, int value) {
//    if (*head == NULL) {
//        printf("리스트가 비어있습니다.\n");
//        return;
//    }
//
//    Node* current = *head;
//    Node* prev = NULL;
//
//    // 삭제할 노드가 head인 경우
//    if (current != NULL && current->data == value) {
//        *head = current->next;
//        free(current);
//        return;
//    }
//
//    // 중간 또는 끝 노드 삭제
//    while (current != NULL && current->data != value) {
//        prev = current;
//        current = current->next;
//    }
//
//    if (current == NULL) {
//        printf("값 %d를 가진 노드가 없습니다.\n", value);
//        return;
//    }
//
//    prev->next = current->next;
//    free(current);
//}
//
//// 리스트 출력
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
//    Node* head = NULL; // 빈 리스트 시작
//
//    // 노드 추가
//    append(&head, 10);
//    append(&head, 20);
//    append(&head, 30);
//    append(&head, 40);
//
//    printf("현재 연결 리스트: ");
//    printList(head);
//
//    // 노드 삭제
//    printf("값 20 삭제 후: ");
//    deleteNode(&head, 20);
//    printList(head);
//
//    printf("값 10 삭제 후: ");
//    deleteNode(&head, 10);
//    printList(head);
//
//    // 존재하지 않는 값 삭제
//    deleteNode(&head, 99);
//
//    // 메모리 해제
//    freeList(head);
//
//    return 0;
//}
