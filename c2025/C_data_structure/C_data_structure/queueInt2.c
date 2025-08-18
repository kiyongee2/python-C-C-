//#include <stdio.h>
//#define MAX_QUEUE 10  //ť�� �ִ� ũ��
//
//int queue[MAX_QUEUE];   //ť �迭 ����
//int front = 0;  //������ ���� ��ġ
//int rear = 0;   //������ ���� ��ġ
//
//int isFull() { //ť�� �� ��
//    return (rear + 1) % MAX_QUEUE == front;
//}
//
//int isEmpty() { //ť�� ����ִ�
//    return front == rear;
//}
//
//void enQueue(int x) { //ť�� ������ �߰�
//    if (isFull()) {
//        printf("ť�� ���� á���ϴ�!!\n");
//        return;
//    }
//    queue[rear] = x;
//    rear = (rear + 1) % MAX_QUEUE;
//}
//
//int deQueue() { //ť���� ������ ����
//    if (isEmpty()) {
//        printf("ť�� ������ϴ�!!\n");
//        return -1; 
//    }
//    int val = queue[front];
//    front = (front + 1) % MAX_QUEUE;
//    return val;
//}
//
//void printQueue() { //ť ���� ���
//    printf("ť ����: ");
//    if (isEmpty()) {
//        printf("(��� ����)\n");
//        return;
//    }
//    int i = front;
//    while (i != rear) {
//        printf("%d ", queue[i]);
//        i = (i + 1) % MAX_QUEUE;
//    }
//    printf("\n");
//}
//
//int main() {
//
//    printf("ť�� �ڷ� ����(�ֱ�)\n");
//    enQueue(10);
//    enQueue(20);
//    enQueue(30);
//    printQueue();
//
//    printf("ť���� �ڷ� ����(����)\n");
//    int val;
//
//    val = deQueue(); 
//    if (val != -1) 
//        printf("%d ", val);
//
//    val = deQueue(); 
//    if (val != -1)
//        printf("%d ", val);
//
//    /*val = deQueue(); 
//    if (val != -1)
//        printf("%d ", val);*/
//
//    /*val = deQueue(); 
//    if (val != -1)
//        printf("%d ", val); */// ����� �� ó�� Ȯ��
//
//    printf("\n");
//
//    printQueue();
//
//    return 0;
//}
