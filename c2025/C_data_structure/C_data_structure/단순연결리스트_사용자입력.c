//#define _CRT_SECURE_NO_WARNINGS
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
//    int n;      //��� ����
//    int value;  //��� ��
//    Node* head = NULL;
//    Node* current = NULL;
//    Node* newNode = NULL;
//
//    printf("��� ������ �Է��ϼ���: ");
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        newNode = (Node*)malloc(sizeof(Node)); // �� ��� ����
//        if (newNode == NULL) {
//            printf("�޸� �Ҵ� ����\n");
//            return 1;
//        }
//
//        printf("%d��° ��� �� �Է�: ", i + 1);
//        scanf("%d", &value);
//
//        newNode->data = value;
//        newNode->next = NULL;
//        if (head == NULL) {
//            head = newNode;  // �� ��尡 head�� ��
//            current = newNode; //�� ��尡 ���� ��尡 ��
//        }
//        else {
//            current->next = newNode; // ���� ���� ����
//            current = newNode;       // �� ��尡 ���� ��尡 ��
//        }
//    }
//
//    printf("\n���� ����Ʈ ���: ");
//    current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next; //���� ��带 ���� ���� �̵�
//    }
//    printf("NULL\n");
//
//    // ����Ʈ�� ������ ��ȸ�ϸ鼭 ���� �Ҵ�� ��带 �ϳ��� �޸� ����(free)
//    current = head;
//    while (current != NULL) {
//        Node* temp = current; // ���� ��� �ּҸ� ����
//        current = current->next; //current�� ���� ���� �̵�
//        free(temp); //���� ��� �޸� ����
//    }
//
//    return 0;
//}
