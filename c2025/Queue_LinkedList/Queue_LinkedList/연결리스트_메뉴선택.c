//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//// ��� ���� ����
//typedef struct {
//    int data;
//    struct Node* next;
//} Node;
//
//Node* head = NULL; // ����Ʈ�� ���� ���
//
//// �Լ� ���� ����
//void insertNodeEnd(int value);   // �� �� ����
//void insertNodeFront(int value); // �� �� ����
//void deleteNode(int value);
//void printList();
//void freeList();
//
//int main() {
//    bool run = true;
//    int choice, value;
//
//    while (run) {
//        printf("\n=== ���� ����Ʈ �޴� ===\n");
//        printf("1. �� �ڿ� ��� ����\n");
//        printf("2. �� �տ� ��� ����\n");
//        printf("3. ��� ����\n");
//        printf("4. ����Ʈ ���\n");
//        printf("5. ����\n");
//        printf("�޴� ����: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("������ �� �Է�: ");
//            scanf("%d", &value);
//            insertNodeEnd(value);
//            break;
//        case 2:
//            printf("������ �� �Է�: ");
//            scanf("%d", &value);
//            insertNodeFront(value);
//            break;
//        case 3:
//            printf("������ �� �Է�: ");
//            scanf("%d", &value);
//            deleteNode(value);
//            break;
//        case 4:
//            printList();
//            break;
//        case 5:
//            freeList();
//            printf("���α׷� ����\n");
//            run = false;
//            break;
//        default:
//            printf("�߸��� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
//        }
//    }
//}
//
//
//void insertNodeEnd(int value) { // �� �� ����
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (!newNode) {
//        printf("�޸� �Ҵ� ����\n");
//        return;
//    }
//    newNode->data = value;
//    newNode->next = NULL;
//
//    if (head == NULL) {
//        head = newNode;
//    }
//    else {
//        Node* current = head;
//        while (current->next != NULL)
//            current = current->next;
//        current->next = newNode;
//    }
//    printf("%d �� �� ���� �Ϸ�\n", value);
//}
//
//void insertNodeFront(int value) { // �� �� ����
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (!newNode) {
//        printf("�޸� �Ҵ� ����\n");
//        return;
//    }
//    newNode->data = value;
//    newNode->next = head; // ���� head �տ� �� ��� ����
//    head = newNode;       // head�� �� ���� ����
//    printf("%d �� �� ���� �Ϸ�\n", value);
//}
//
//void deleteNode(int value) { // ��� ���� (�� ����)
//    Node* current = head; //���� Ž������ ��带 ����Ŵ
//    Node* prev = NULL; //current�� ���� ���
//
//    //��� Ž�� - current�� ���� �����Ϸ��� ���� �ٸ������� Ž��
//    while (current != NULL && current->data != value) {
//        //���� ���� �̵�
//        prev = current;
//        current = current->next;
//    }
//
//    if (current == NULL) {
//        printf("%d ���� ����Ʈ�� �����ϴ�.\n", value);
//        return;
//    }
//
//    //�����Ϸ��� ���� ã�� -> ��ũ �翬��
//    if (prev == NULL) { //ù ���(head)�� ��� ����
//        head = current->next;
//    }
//    else {
//        prev->next = current->next;
//    }
//
//    free(current); //���� ��� �޸� ����
//    printf("%d ���� �Ϸ�\n", value);
//}
//
//// ����Ʈ ���
//void printList() {
//    if (head == NULL) {
//        printf("����Ʈ�� ����ֽ��ϴ�.\n");
//        return;
//    }
//    Node* current = head;
//    printf("����Ʈ: ");
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next;
//    }
//    printf("NULL\n");
//}
//
//// �޸� ����
//void freeList() {
//    Node* current = head;
//    while (current != NULL) {
//        Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//    head = NULL;
//}