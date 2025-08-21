#include <stdio.h>
#include <stdlib.h>

// ��� ���� ����
typedef struct Node {
    int data;           // ��尡 �����ϴ� ��
    struct Node* next;  // ���� ����� �ּ�(�ڱ� ����)
} Node;

// ��� ���� �Լ�
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("�޸� �Ҵ� ����!\n");
        exit(1);
    }
    newNode->data = value;  //����� ������ ��
    newNode->next = NULL;   //���� ����� �ּ� �ʱ�ȭ
    return newNode;
}

// ��� ���� ���ϴ� �Լ�
int getLength(Node* head) {
    int count = 0;
    Node* current = head;  //head ��带 ���� ��忡 ����
    while (current != NULL) {
        count++;
        current = current->next; //���� ��带 ���� ���� �̵�
    }
    return count;
}

// ����Ʈ ��� �Լ�
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {

    // ��� 3�� ���� (���� �Ҵ�)
    Node* head = createNode(10);
    Node* second = createNode(20);
    Node* third = createNode(30);

    // ��� ����(link)
    head->next = second;
    second->next = third;

    // ����� ����
    printf("����� ����: %d\n", getLength(head));

    // ���
    printf("���� ����Ʈ ���: ");
    printList(head); // 10 -> 20 -> 30 -> NULL

    // ť ���(FIFO) ����
    Node* current = head;
    while (current != NULL) {
        Node* temp = current; //���� ��带 ����
        printf("free(%d)\n", current->data);
        current = current->next;  //current�� ���� ���� �̵�
        free(temp); //���� ����� �޸� ����
    }
    return 0;
}
