//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//struct abc
//{
//	int data;
//	struct abc* next;  //�ڱ� ���� ����ü
//};
//
//int main()
//{
//	struct abc x;
//	struct abc y;
//	struct abc z;
//
//	x.data = 10;
//	y.data = 20;
//	z.data = 30;
//
//	x.next = &y;
//	y.next = &z;
//	z.next = NULL;
//
//	struct abc* p;  //���� ����Ʈ ��ȸ�� ���� ������ ���� ����
//	for (p = &x; p != NULL; p = p->next)
//	{
//		printf("%d\n", p->data);
//	}
//
//	printf("����ü y ���� �� \n");
//	x.next = &z;
//	y.next = NULL;
//
//	for (p = &x; p != NULL; p = p->next)
//	{
//		printf("%d\n", p->data);
//	}
//
//	return 0;
//}