//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//// ��� ���� ����
//typedef struct {
//    int value;           // ��尡 �����ϴ� ��
//    struct Node* next;  // ���� ����� �ּ�(�ڱ� ����)
//} Node;
//
//Node* head = NULL; //ù ����� �ּҸ� ����
//
//void insertNodeFront(int x) {
//    Node* newNode;
//    newNode = (Node*)malloc(sizeof(Node));
//    newNode->value = x;
//    newNode->next = NULL;
//
//    if (head == NULL) {
//        head = newNode;
//        return;
//    }
//
//    newNode->next = head;
//    head = newNode;
//}
//
//void displayNode() {
//    Node* current = head;
//    if (head == NULL) {
//        printf("���Ḯ��Ʈ�� �������� �ʾҽ��ϴ�.\n");
//        return;
//    }
//
//    while (current->next != NULL) {
//        printf("%d => ", current->value);
//        current = current->next;
//    }
//    printf("%d\n", current->value);
//}
//
//int main() {
//    int choice, num;
//
//    while (true) {
//
//        system("cls");
//        printf("\n*** ���� ���� ����Ʈ ***\n");
//        printf("1. ��� ����\n");
//        printf("2. ����Ʈ ���\n");
//        printf("0. ���α׷� ����\n");
//
//        printf("�޴� ����: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("���� �Է�: ");
//            scanf("%d", &num);
//            insertNodeFront(num);
//            break;
//        case 2:
//            displayNode();
//            break;
//        case 0:
//            exit(0);
//        }
//        printf("\n\n\t\t");
//        system("pause");
//    }
//
//
//    return 0;
//}
