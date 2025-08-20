//#include <stdio.h>
//#include <stdlib.h>
//
//// ��� ����ü ����
//typedef struct {
//    int data;
//    struct Node* next;
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
//// ����Ʈ ���� ��� �߰�
//void append(Node** head, int value) {
//    Node* newNode = createNode(value);
//
//    if (*head == NULL) { // ����Ʈ�� ����� ���
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
//// Ư�� ���� ��� ����
//void deleteNode(Node** head, int value) {
//    if (*head == NULL) {
//        printf("����Ʈ�� ����ֽ��ϴ�.\n");
//        return;
//    }
//
//    Node* current = *head;
//    Node* prev = NULL;
//
//    // ������ ��尡 head�� ���
//    if (current != NULL && current->data == value) {
//        *head = current->next;
//        free(current);
//        return;
//    }
//
//    // �߰� �Ǵ� �� ��� ����
//    while (current != NULL && current->data != value) {
//        prev = current;
//        current = current->next;
//    }
//
//    if (current == NULL) {
//        printf("�� %d�� ���� ��尡 �����ϴ�.\n", value);
//        return;
//    }
//
//    prev->next = current->next;
//    free(current);
//}
//
//// ����Ʈ ���
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
//    Node* head = NULL; // �� ����Ʈ ����
//
//    // ��� �߰�
//    append(&head, 10);
//    append(&head, 20);
//    append(&head, 30);
//    append(&head, 40);
//
//    printf("���� ���� ����Ʈ: ");
//    printList(head);
//
//    // ��� ����
//    printf("�� 20 ���� ��: ");
//    deleteNode(&head, 20);
//    printList(head);
//
//    printf("�� 10 ���� ��: ");
//    deleteNode(&head, 10);
//    printList(head);
//
//    // �������� �ʴ� �� ����
//    deleteNode(&head, 99);
//
//    // �޸� ����
//    freeList(head);
//
//    return 0;
//}
