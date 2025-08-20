//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//// 노드 구조 정의
//typedef struct{
//    int data;           // 노드가 저장하는 값
//    struct Node* next;  // 다음 노드의 주소(자기 참조)
//} Node;
//
//int main() {
//    int n;      //노드 개수
//    int value;  //노드 값
//    Node* head = NULL;
//    Node* current = NULL;
//    Node* newNode = NULL;
//
//    printf("노드 개수를 입력하세요: ");
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        newNode = (Node*)malloc(sizeof(Node)); // 새 노드 생성
//        if (newNode == NULL) {
//            printf("메모리 할당 실패\n");
//            return 1;
//        }
//
//        printf("%d번째 노드 값 입력: ", i + 1);
//        scanf("%d", &value);
//
//        newNode->data = value;
//        newNode->next = NULL;
//        if (head == NULL) {
//            head = newNode;  // 새 노드가 head가 됨
//            current = newNode; //새 노드가 현재 노드가 됨
//        }
//        else {
//            current->next = newNode; // 이전 노드와 연결
//            current = newNode;       // 새 노드가 현재 노드가 됨
//        }
//    }
//
//    printf("\n연결 리스트 출력: ");
//    current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next; //현재 노드를 다음 노드로 이동
//    }
//    printf("NULL\n");
//
//    // 리스트를 끝까지 순회하면서 동적 할당된 노드를 하나씩 메모리 해제(free)
//    current = head;
//    while (current != NULL) {
//        Node* temp = current; // 현재 노드 주소를 저장
//        current = current->next; //current를 다음 노드로 이동
//        free(temp); //현재 노드 메모리 해제
//    }
//
//    return 0;
//}
