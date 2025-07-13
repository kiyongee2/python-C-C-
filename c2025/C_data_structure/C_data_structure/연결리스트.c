//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node { // ��� ����ü ����
//    int data;
//    struct Node* next;
//} Node;
//
//void append(Node** head, int value) { // ���� ����Ʈ�� ��� �߰�
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        return;
//    }
//    newNode->data = value;
//    newNode->next = NULL;
//
//    if (*head == NULL) { // ù ���� head�� ���� ����
//        *head = newNode;
//    }
//    else {
//        Node* current = *head;  // ���������� ã�ư��� ����
//        while (current->next != NULL)
//            current = current->next;
//        current->next = newNode;
//    }
//}
//
//// ���� ����Ʈ ���
//void printList(Node* head) {
//    Node* current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next;
//    }
//    printf("NULL\n");
//}
//
//// �޸� ����
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
//    // ��� �߰�
//    append(&head, 10);
//    append(&head, 20);
//    append(&head, 30);
//
//    // ���
//    printf("���� ����Ʈ: ");
//    printList(head);
//
//    // �޸� ����
//    freeList(head);
//
//    return 0;
//}
