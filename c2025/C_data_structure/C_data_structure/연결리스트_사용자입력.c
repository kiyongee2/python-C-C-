//#define _CRT_SECURE_NO_WARNINGS
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
//    int n, value;
//    Node* head = NULL, * current = NULL, * newNode = NULL;
//
//    printf("노드 개수를 입력하세요: ");
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        // 새 노드 생성
//        newNode = (Node*)malloc(sizeof(Node));
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
//
//        if (head == NULL) {
//            // 첫 번째 노드
//            head = newNode;
//            current = newNode;
//        }
//        else {
//            // 이전 노드와 연결
//            current->next = newNode;
//            current = newNode;
//        }
//    }
//
//    // 출력
//    printf("\n연결 리스트 출력: ");
//    current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next;
//    }
//    printf("NULL\n");
//
//    // 메모리 해제
//    current = head;
//    while (current != NULL) {
//        Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//
//    return 0;
//}
