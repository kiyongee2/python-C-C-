//#include <stdio.h>
///*
//	- 자기 참조 구조체: struct 내부에 동일한 타입의 포인터 멤버 포함
//	- 포인터를 이용한 노드 연결과 순회
//*/
//typedef struct {
//	int data;
//	struct List* next; //자기 참조 구조체
//}List;
//
//int main()
//{
//	List x, y, z; //노드 생성 및 초기화
//
//	x.data = 10;
//	y.data = 20;
//	z.data = 30;
//
//	//노드 연결(Linked list 구성)
//	x.next = &y;   //x -> y
//	y.next = &z;   //y -> z
//	z.next = NULL; //z는 마지막 노드(리스트 끝)
//
//	//리스트 순회 및 출력
//	List* p;  //포인터 이용
//	p = &x;   //초기화
//
//	printf("%d %x\n", x.data, p->next);  //첫번째 노드 출력
//
//	p = p->next;
//	printf("%d %x\n", y.data, p->next);  //두번째 노드
//
//	//전체 출력
//	for (p = &x; p != NULL; p = p->next) {
//		printf("%d ", p->data); 
//	} //10 20 30
//
//	//노드 삭제(y 제거)
//	printf("\n구조체 y 삭제 후\n");
//	x.next = y.next; // x -> z
//	y.next = NULL;   // y는 연결에서 제외
//
//	for (p = &x; p != NULL; p = p->next) {
//		printf("%d ", p->data);
//	} //10 30
//
//	return 0;
//}