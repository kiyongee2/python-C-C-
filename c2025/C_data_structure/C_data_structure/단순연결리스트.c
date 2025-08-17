//#include <stdio.h>
//#include <stdlib.h>
//
//// 노드 구조 정의
//typedef struct Node {
//    int data;           // 노드가 저장하는 값
//    struct Node* next;  // 다음 노드의 주소(자기 참조)
//} Node;
//
//int main() {
//    // 노드 3개 생성
//    Node* head = (Node*)malloc(sizeof(Node));
//    Node* second = (Node*)malloc(sizeof(Node));
//    Node* third = (Node*)malloc(sizeof(Node));
//
//    // 데이터 저장
//    head->data = 10;
//    head->next = second;
//
//    second->data = 20;
//    second->next = third;
//
//    third->data = 30;
//    third->next = NULL; // 마지막 노드
//
//    // 출력
//    Node* current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next; 
//    }
//    printf("NULL\n"); //10 -> 20 -> 30 -> NULL
//    
//    // 메모리 해제
//    free(third);
//    free(second);
//    free(head);
//
//    return 0;
//}
