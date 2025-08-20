//#include <stdio.h>
//#include <stdlib.h>
//
//// ��� ���� ����
//typedef struct {
//    int data;           // ��尡 �����ϴ� ��
//    struct Node* next;  // ���� ����� �ּ�(�ڱ� ����)
//} Node;
//
//// ��� ���� �Լ�
//Node* createNode(int value) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//    newNode->data = value;
//    newNode->next = NULL;
//    return newNode;
//}
//
//// ����Ʈ ��� �Լ�
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
//    // ��� 3�� ���� (���� �Ҵ�)
//    Node* head = createNode(10);
//    Node* second = createNode(20);
//    Node* third = createNode(30);
//
//    // ��� ����
//    head->next = second;
//    second->next = third;
//
//    // ���
//    printf("���� ����Ʈ ���: ");
//    printList(head); // 10 -> 20 -> 30 -> NULL
//
//    // �޸� ����
//    free(third);
//    free(second);
//    free(head);
//
//    return 0;
//}
