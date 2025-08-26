//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// ��� ����ü ����
//typedef struct Node {
//    char name[20];        // �� �̸�
//    struct Node* next;    // ���� ��
//} Node;
//
//// ť ����ü ���� (front, rear ����)
//typedef struct {
//    Node* front;
//    Node* rear;
//} Queue;
//
//// ť �ʱ�ȭ
//void initQueue(Queue* q) {
//    q->front = NULL;
//    q->rear = NULL;
//}
//
//// �� �߰� (enqueue)
//void enqueue(Queue* q, const char* name) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//    strcpy(newNode->name, name);
//    newNode->next = NULL;
//
//    if (q->rear == NULL) {
//        // ť�� ��� ������ front�� rear �� �� �� ���
//        q->front = q->rear = newNode;
//    }
//    else {
//        q->rear->next = newNode; // ���� ������ ��� �� �� ��� ����
//        q->rear = newNode;       // rear ����
//    }
//    printf("�� [%s] ��⿭�� �߰���\n", name);
//}
//
//// �� ȣ�� (dequeue)
//void dequeue(Queue* q) {
//    if (q->front == NULL) {
//        printf("��⿭�� ��� �ֽ��ϴ�!\n");
//        return;
//    }
//
//    Node* temp = q->front;
//    printf("�� [%s] ���� �Ϸ� �� ���ŵ�\n", temp->name);
//
//    q->front = q->front->next;
//    if (q->front == NULL) {
//        q->rear = NULL; // ������ �� ���� �� rear�� NULL
//    }
//    free(temp);
//}
//
//// ��⿭ ���
//void printQueue(Queue* q) {
//    if (q->front == NULL) {
//        printf("��⿭�� ��� �ֽ��ϴ�.\n");
//        return;
//    }
//
//    Node* current = q->front;
//    printf("���� ��⿭: ");
//    while (current != NULL) {
//        printf("%s -> ", current->name);
//        current = current->next;
//    }
//    printf("NULL\n");
//}
//
//// �޸� ����
//void freeQueue(Queue* q) {
//    Node* current = q->front;
//    while (current != NULL) {
//        Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//    q->front = q->rear = NULL;
//}
//
//int main() {
//    Queue q;
//    initQueue(&q);
//
//    int choice;
//    char name[20];
//
//    while (1) {
//        printf("\n--- �� ��⿭ ���� ---\n");
//        printf("1. �� �߰� (Enqueue)\n");
//        printf("2. �� ȣ�� (Dequeue)\n");
//        printf("3. ��⿭ ���\n");
//        printf("4. ����\n");
//        printf("����: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("�� �̸� �Է�: ");
//            scanf("%s", name);
//            enqueue(&q, name);
//            break;
//        case 2:
//            dequeue(&q);
//            break;
//        case 3:
//            printQueue(&q);
//            break;
//        case 4: 
//            freeQueue(&q);
//            printf("���α׷� ����\n");
//            return 0;
//        default:
//            printf("�߸��� �����Դϴ�.\n");
//        }
//    }
//}
