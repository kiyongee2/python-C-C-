//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define NAME_LEN 100
//
//// ��� ����ü
//typedef struct Node {
//    char name[NAME_LEN];
//    struct Node* next;
//} Node;
//
//// ť ����ü
//typedef struct {
//    Node* front;
//    Node* rear;
//} Queue;
//
//// ť �ʱ�ȭ
//void initQueue(Queue* q) {
//    q->front = q->rear = NULL;
//}
//
//// ť�� ������� Ȯ��
//int isEmpty(Queue* q) {
//    return q->front == NULL;
//}
//
//// enQueue: �� �߰�
//void enQueue(Queue* q, const char* name) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        return;
//    }
//
//    strcpy(newNode->name, name);
//    newNode->next = NULL;
//
//    if (isEmpty(q)) {
//        q->front = q->rear = newNode;
//    }
//    else {
//        q->rear->next = newNode;
//        q->rear = newNode;
//    }
//}
//
//// deQueue: �� ������
//char* deQueue(Queue* q) {
//    if (isEmpty(q)) {
//        printf("ť�� ������ϴ�!\n");
//        return NULL;
//    }
//
//    Node* temp = q->front;
//    char* name = strdup(temp->name);  // ��ȯ�� ���� ���纻
//    q->front = temp->next;
//
//    if (q->front == NULL)
//        q->rear = NULL;
//
//    free(temp);
//    return name;
//}
//
//// ť ����
//void clearQueue(Queue* q) {
//    while (!isEmpty(q)) {
//        free(deQueue(q));  // ��ȯ�� ���纻�� ����
//    }
//}
//
//int main() {
//    Queue q;
//    initQueue(&q);
//
//    // �� �߰�
//    enQueue(&q, "��A");
//    enQueue(&q, "��B");
//    enQueue(&q, "��C");
//
//    // �� ó��
//    char* name;
//    while (!isEmpty(&q)) {
//        name = deQueue(&q);
//        if (name != NULL) {
//            printf("%s�� ���� ó�� ��...\n", name);
//            free(name);  // strdup()���� ���� ���纻 ����
//        }
//    }
//
//    printf("��� ���� ������ �Ϸ�Ǿ����ϴ�.\n");
//    return 0;
//}
