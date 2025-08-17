//#include <stdio.h>
//#include <stdlib.h>
//
//// ��� ���� ����
//typedef struct Node {
//    int data;           // ��尡 �����ϴ� ��
//    struct Node* next;  // ���� ����� �ּ�(�ڱ� ����)
//} Node;
//
//int main() {
//    // ��� 3�� ����
//    Node* head = (Node*)malloc(sizeof(Node));
//    Node* second = (Node*)malloc(sizeof(Node));
//    Node* third = (Node*)malloc(sizeof(Node));
//
//    // ������ ����
//    head->data = 10;
//    head->next = second;
//
//    second->data = 20;
//    second->next = third;
//
//    third->data = 30;
//    third->next = NULL; // ������ ���
//
//    // ���
//    Node* current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next; 
//    }
//    printf("NULL\n"); //10 -> 20 -> 30 -> NULL
//    
//    // �޸� ����
//    free(third);
//    free(second);
//    free(head);
//
//    return 0;
//}
