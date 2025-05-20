//#include <stdio.h>
//
//typedef struct {
//	int age;
//	char* name;
//	struct person* next; //자기 참조 구조체
//}person;
//
//int main()
//{
//	person a = {8, "이강인"};
//	person b = {6, "이정후"};
//	person c = {7, "최민정"};
//	person d = {7, "신유빈"};
//
//	a.next = &b;  //구조체 a 뒤에 구조체 b 연결
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	person* p;
//
//	for (p = &a; p != NULL; p = p->next)
//	{
//		printf("%d ", p->age);
//		printf("%s\n", p->name);
//	}
//
//	return 0;
//}