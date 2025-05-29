//#include <stdio.h>
//
//typedef struct {
//	int age;
//	char* name;
//	struct Person* next; //자기 참조 구조체
//}Person;
//
//int main()
//{
//	Person a = {8, "이강인"};
//	Person b = {6, "이정후"};
//	Person c = {7, "최민정"};
//	Person d = {7, "신유빈"};
//
//	a.next = &b;  //구조체 a 뒤에 구조체 b 연결
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	Person* p;  //구조체 포인터 변수 선언
//
//	p = &a;
//
//	//첫 번째 요소 출력
//	printf("%d ", p->age);
//	printf("%s\n", p->name);
//	
//	//두번째 요소 출력
//	printf("%d ", p->next);
//	printf("%s\n", p->next);
//
//	//전체 출력
//	for (p = &a; p != NULL; p = p->next)
//	{
//		printf("%d ", p->age);
//		printf("%s\n", p->name);
//	}
//
//	//2번째 요소 삭제
//
//
//	return 0;
//}