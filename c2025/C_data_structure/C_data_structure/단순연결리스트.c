//#include <stdio.h>
//#include <stdlib.h>
//
//// ��� ���� ����
//typedef struct{
//    int data;           // ��尡 �����ϴ� ��
//    struct Node* next;  // ���� ����� �ּ�(�ڱ� ����)
//} Node;
//
//int main() {
//    // ��� 3�� ���� - ���� �Ҵ�(�� �޸� ����)
//    Node* head, * second, * third;
//
//    head = (Node*)malloc(sizeof(Node));  //ù ���
//    second = (Node*)malloc(sizeof(Node));
//    third = (Node*)malloc(sizeof(Node));
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
