//#include <stdio.h>
///*
//	- �ڱ� ���� ����ü: struct ���ο� ������ Ÿ���� ������ ��� ����
//	- �����͸� �̿��� ��� ����� ��ȸ
//*/
//typedef struct {
//	int data;
//	struct List* next; //�ڱ� ���� ����ü
//}List;
//
//int main()
//{
//	List x, y, z; //��� ���� �� �ʱ�ȭ
//
//	x.data = 10;
//	y.data = 20;
//	z.data = 30;
//
//	//��� ����(Linked list ����)
//	x.next = &y;   //x -> y
//	y.next = &z;   //y -> z
//	z.next = NULL; //z�� ������ ���(����Ʈ ��)
//
//	//����Ʈ ��ȸ �� ���
//	List* p;  //������ �̿�
//	p = &x;   //�ʱ�ȭ
//
//	printf("%d %x\n", x.data, p->next);  //ù��° ��� ���
//
//	p = p->next;
//	printf("%d %x\n", y.data, p->next);  //�ι�° ���
//
//	//��ü ���
//	for (p = &x; p != NULL; p = p->next) {
//		printf("%d ", p->data); 
//	} //10 20 30
//
//	//��� ����(y ����)
//	printf("\n����ü y ���� ��\n");
//	x.next = y.next; // x -> z
//	y.next = NULL;   // y�� ���ῡ�� ����
//
//	for (p = &x; p != NULL; p = p->next) {
//		printf("%d ", p->data);
//	} //10 30
//
//	return 0;
//}