//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//typedef struct{
//	int data;
//	struct List* next;  //�ڱ� ���� ����ü
//}List;
//
//int main()
//{
//	List x, y, z; //��� ����
//
//	//��� ����
//	x.data = 10;
//	y.data = 20;
//	z.data = 30;
//
//	//��� ����
//	x.next = &y;   //x -> y
//	y.next = &z;   //y -> z
//	z.next = NULL; //z�� ������ ���
//
//	//��� ���
//	List* p;
//	p = &x;
//
//	printf("%d %x\n", x.data, p->next); //ù��° ��� ���
//	p = p->next;
//	printf("%d %x\n", y.data, p->next); //�ι�° ��� ���
//
//	//��ü ��� ���
//	for (p = &x; p != NULL; p = p->next) {
//		printf("%d ", p->data);
//	}
//
//	printf("\n*** ��� y ���� �� ***\n");
//	x.next = y.next; //x -> z(����)
//	y.next = NULL; //y�� ���ῡ�� ����
//
//	for (p = &x; p != NULL; p = p->next) {
//		printf("%d ", p->data);
//	}
//
//	return 0;
//}
//
