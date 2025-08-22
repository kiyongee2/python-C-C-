//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// �� ��� ����
//typedef struct Node {
//    char name[20];
//    struct Node* next;
//} Node;
//
//// ��⿭ ����ü
//typedef struct {
//    Node* front;  // ť�� �� ��
//    Node* rear;   // ť�� �� ��
//} Queue;
//
//// ť �ʱ�ȭ
//void initQueue(Queue* q) {
//    q->front = NULL;
//    q->rear = NULL;
//}
//
//// ť�� ������� Ȯ��
//int isEmpty(Queue* q) {
//    return q->front == NULL;
//}
//
//// �� �߰� (Enqueue)
//void enQueue(Queue* q, const char* name) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//    strcpy(newNode->name, name);
//    newNode->next = NULL;
//
//    if (isEmpty(q)) {
//        q->front = newNode;
//        q->rear = newNode;
//    }
//    else {
//        q->rear->next = newNode;
//        q->rear = newNode;
//    }
//    printf("%s���� ��⿭�� �߰��Ǿ����ϴ�.\n", name);
//}
//
//// �� ������ (Dequeue)
//int deQueue(Queue* q, char* name) {
//    if (isEmpty(q)) {
//        printf("��⿭�� ��� �ֽ��ϴ�!\n");
//        return -1;
//    }
//    Node* temp = q->front;
//    strcpy(name, temp->name);
//
//    q->front = q->front->next;
//    if (q->front == NULL) {  // ������ ��� ���� �� rear�� NULL��
//        q->rear = NULL;
//    }
//    free(temp);
//    return 0;
//}
//
//// ť ���� ���
//void printQueue(Queue* q) {
//    if (isEmpty(q)) {
//        printf("��⿭�� ��� �ֽ��ϴ�.\n");
//        return;
//    }
//    printf("���� ��⿭: ");
//    Node* cur = q->front;
//    while (cur != NULL) {
//        printf("[%s] ", cur->name);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//// ���� �Լ�
//int main() {
//    Queue q;
//    char name[20];
//    int choice;
//
//    initQueue(&q);
//
//    while (1) {
//        printf("\n==== �� ��⿭ ���� ====\n");
//        printf("1. �� �߰�\n");
//        printf("2. �� ó��\n");
//        printf("3. ��⿭ ���\n");
//        printf("4. ����\n");
//        printf("�޴� ����: ");
//        scanf("%d", &choice);
//        getchar(); // ���� ����
//
//        switch (choice) {
//        case 1:
//            printf("�� �̸� �Է�: ");
//            fgets(name, sizeof(name), stdin);
//            name[strcspn(name, "\n")] = '\0'; // ���� ����
//            enQueue(&q, name);
//            break;
//
//        case 2:
//            if (deQueue(&q, name) == 0) {
//                printf("%s�� ���� ó�� �Ϸ�.\n", name);
//            }
//            break;
//
//        case 3:
//            printQueue(&q);
//            break;
//
//        case 4:
//            printf("���α׷��� �����մϴ�.\n");
//            // ���� �� �޸� ����
//            while (!isEmpty(&q)) {
//                deQueue(&q, name);
//            }
//            return 0;
//
//        default:
//            printf("�߸��� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
//        }
//    }
//}
