//#define _CRT_SECURE_NO_WARNINGS
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
//    int n, value;
//    Node* head = NULL, * current = NULL, * newNode = NULL;
//
//    printf("��� ������ �Է��ϼ���: ");
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        // �� ��� ����
//        newNode = (Node*)malloc(sizeof(Node));
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
//
//        if (head == NULL) {
//            // ù ��° ���
//            head = newNode;
//            current = newNode;
//        }
//        else {
//            // ���� ���� ����
//            current->next = newNode;
//            current = newNode;
//        }
//    }
//
//    // ���
//    printf("\n���� ����Ʈ ���: ");
//    current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->data);
//        current = current->next;
//    }
//    printf("NULL\n");
//
//    // �޸� ����
//    current = head;
//    while (current != NULL) {
//        Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//
//    return 0;
//}
