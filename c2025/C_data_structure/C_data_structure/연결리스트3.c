//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//typedef struct{
//	int data;
//	struct abc* next;  //자기 참조 구조체
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
//	abc* p;  //연결 리스트 순회를 위한 포인터 변수 선언
//	for (p = &x; p != NULL; p = p->next)
//	{
//		printf("%d\n", p->data);
//	}
//
//	printf("구조체 y 삭제 후 \n");
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