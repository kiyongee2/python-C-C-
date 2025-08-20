//#include <stdio.h>
//#include <stdlib.h>
//
//// 노드 구조 정의
//typedef struct {
//    int data;           // 노드가 저장하는 값
//    struct Node* next;  // 다음 노드의 주소(자기 참조)
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
//// 리스트 출력 함수
//void printList(Node* head) {
//    Node* current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next;
//    }
//    printf("NULL\n");
//}
//
//int main() {
//    // 노드 3개 생성 (동적 할당)
//    Node* head = createNode(10);
//    Node* second = createNode(20);
//    Node* third = createNode(30);
//
//    // 노드 연결
//    head->next = second;
//    second->next = third;
//
//    // 출력
//    printf("연결 리스트 출력: ");
//    printList(head); // 10 -> 20 -> 30 -> NULL
//
//    // 메모리 해제
//    free(third);
//    free(second);
//    free(head);
//
//    return 0;
//}
