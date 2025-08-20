//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//typedef struct{
//	int data;
//	struct List* next;  //자기 참조 구조체
//}List;
//
//int main()
//{
//	List x, y, z; //노드 생성
//
//	//요소 저장
//	x.data = 10;
//	y.data = 20;
//	z.data = 30;
//
//	//노드 연결
//	x.next = &y;   //x -> y
//	y.next = &z;   //y -> z
//	z.next = NULL; //z는 마지막 노드
//
//	//노드 출력
//	List* p;
//	p = &x;
//
//	printf("%d %x\n", x.data, p->next); //첫번째 노드 출력
//	p = p->next;
//	printf("%d %x\n", y.data, p->next); //두번째 노드 출력
//
//	//전체 노드 출력
//	for (p = &x; p != NULL; p = p->next) {
//		printf("%d ", p->data);
//	}
//
//	printf("\n*** 노드 y 삭제 후 ***\n");
//	x.next = y.next; //x -> z(연결)
//	y.next = NULL; //y는 연결에서 제외
//
//	for (p = &x; p != NULL; p = p->next) {
//		printf("%d ", p->data);
//	}
//
//	return 0;
//}
//
