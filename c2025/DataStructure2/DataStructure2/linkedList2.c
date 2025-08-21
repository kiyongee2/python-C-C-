#include <stdio.h>
#include <stdlib.h>

// 노드 구조 정의
typedef struct Node {
    int data;           // 노드가 저장하는 값
    struct Node* next;  // 다음 노드의 주소(자기 참조)
} Node;

// 노드 생성 함수
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("메모리 할당 실패!\n");
        exit(1);
    }
    newNode->data = value;  //노드의 데이터 값
    newNode->next = NULL;   //다음 노드의 주소 초기화
    return newNode;
}

// 노드 개수 구하는 함수
int getLength(Node* head) {
    int count = 0;
    Node* current = head;  //head 노드를 현재 노드에 저장
    while (current != NULL) {
        count++;
        current = current->next; //현재 노드를 다음 노드로 이동
    }
    return count;
}

// 리스트 출력 함수
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {

    // 노드 3개 생성 (동적 할당)
    Node* head = createNode(10);
    Node* second = createNode(20);
    Node* third = createNode(30);

    // 노드 연결(link)
    head->next = second;
    second->next = third;

    // 노드의 개수
    printf("노드의 개수: %d\n", getLength(head));

    // 출력
    printf("연결 리스트 출력: ");
    printList(head); // 10 -> 20 -> 30 -> NULL

    // 큐 방식(FIFO) 해제
    Node* current = head;
    while (current != NULL) {
        Node* temp = current; //현재 노드를 저장
        printf("free(%d)\n", current->data);
        current = current->next;  //current를 다음 노드로 이동
        free(temp); //현재 노드의 메모리 해제
    }
    return 0;
}
