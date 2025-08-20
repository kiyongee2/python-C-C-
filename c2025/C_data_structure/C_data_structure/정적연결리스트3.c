//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//typedef struct{
//	int age;
//	char name[20];
//	struct Person* next;  //자기 참조 구조체
//}Person;
//
//int main()
//{
//	//노드 생성 및 초기화
//	Person a = { 33, "손흥민" };
//	Person b = { 21, "신유빈" };
//	Person c = { 22, "임시현" };
//	Person d = { 26, "이정후" };
//
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	Person* p; //구조체 포인터
//	p = &a;
//
//	//첫째 노드 출력
//	//printf("%d %s\n", p->age, p->name); //33 손흥민
//
//	//노드 순회 및 출력
//	for (p = &a; p != NULL; p = p->next) {
//		printf("%d %s\n", p->age, p->name);
//	}
//
//	printf("*** 노드 c 삭제 후 ***\n");
//	b.next = c.next; //b -> d(연결)
//	c.next = NULL;
//
//	//노드 순회 및 출력
//	for (p = &a; p != NULL; p = p->next) {
//		printf("%d %s\n", p->age, p->name);
//	}
//
//	return 0;
//}
//
