//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define NAME_LEN 100
//
//// �� ���� ����ü
//typedef struct {
//    int id;
//    char name[NAME_LEN];
//} Customer;
//
//// ť ��� ����ü
//typedef struct Node {
//    Customer data;
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
//// �� �߰� (enQueue)
//void enQueue(Queue* q, int id, const char* name) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        return;
//    }
//    newNode->data.id = id;
//    strncpy(newNode->data.name, name, NAME_LEN);
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
//// �� ������ (deQueue)
//Customer* deQueue(Queue* q) {
//    if (isEmpty(q)) {
//        printf("ť�� ������ϴ�!\n");
//        return NULL;
//    }
//
//    Node* temp = q->front;
//    Customer* customer = (Customer*)malloc(sizeof(Customer));
//    *customer = temp->data;
//
//    q->front = temp->next;
//    if (q->front == NULL) q->rear = NULL;
//
//    free(temp);
//    return customer;
//}
//
//// �޸� ����
//void clearQueue(Queue* q) {
//    while (!isEmpty(q)) {
//        Customer* c = deQueue(q);
//        free(c);
//    }
//}
//
//int main() {
//    Queue q;
//    initQueue(&q);
//
//    // �� ���
//    enQueue(&q, 101, "ȫ�浿");
//    enQueue(&q, 102, "�̼���");
//    enQueue(&q, 103, "������");
//
//    // �� ó��
//    Customer* c;
//    while (!isEmpty(&q)) {
//        c = deQueue(&q);
//        if (c != NULL) {
//            printf("�� ��ȣ: %d, �̸�: %s �� ���� ó�� ��...\n", c->id, c->name);
//            free(c);  // ���� ����� ����ü �޸� ����
//        }
//    }
//
//    printf("��� ���� ������ �Ϸ�Ǿ����ϴ�.\n");
//    return 0;
//}
