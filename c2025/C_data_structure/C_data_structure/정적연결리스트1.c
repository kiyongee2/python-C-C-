//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//typedef struct{
//	int data;
//	struct abc* next;  //�ڱ� ���� ����ü
//}abc;
//
//int main()
//{
//	abc x;
//	abc y;
//	abc z;
//
//	x.data = 10;
//	y.data = 20;
//	z.data = 30;
//
//	x.next = &y;
//	y.next = &z;
//	z.next = NULL;
//
//	abc* p;  //���� ����Ʈ ��ȸ�� ���� ������ ���� ����
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