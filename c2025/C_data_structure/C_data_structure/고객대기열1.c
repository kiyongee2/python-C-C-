//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_QUEUE 4
//#define NAME_LEN 20
//
//// ť ����
//char queue[MAX_QUEUE][NAME_LEN];
//int front = 0;
//int rear = 0;
//
//// ť�� ������� Ȯ��
//int isEmpty() {
//    return front == rear;
//}
//
//// ť�� ���� á���� Ȯ��
//int isFull() {
//    return (rear + 1) % MAX_QUEUE == front;
//}
//
//void enQueue(const char* name) { //�� �߰�
//    if (isFull()) {
//        printf("ť�� ���� á���ϴ�!\n");
//        return;
//    }
//    strcpy(queue[rear], name); //�ڿ� �� �̸� ����(����)
//    rear = (rear + 1) % MAX_QUEUE;
//}
//
//int deQueue(char* name) { // �� ������
//    if (isEmpty()) {
//        printf("ť�� ������ϴ�!\n");
//        name[0] = '\0'; //name�� �� ���ڷ� �ʱ�ȭ {'��' '��' 'A' '\0'}
//        return -1;  //����
//    }
//    strcpy(name, queue[front]); //���� �̸��� ����
//    front = (front + 1) % MAX_QUEUE;
//    return 0; //����
//}
//
//int main() {
//
//    char name[NAME_LEN];
//
//    // �� ��⿭ �߰�
//    enQueue("��A");
//    enQueue("��B");
//    enQueue("��C");
//
//    // ��⿭ ó��
//    while (!isEmpty()) {
//        deQueue(name);
//        printf("%s�� ���� ó�� ��...\n", name);
//    }
//
//    printf("��� ���� ������ �Ϸ�Ǿ����ϴ�.\n");
//
//    return 0;
//}
