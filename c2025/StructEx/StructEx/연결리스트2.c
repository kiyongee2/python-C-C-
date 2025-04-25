//#include <stdio.h>
//
//struct person {
//	int age;
//	char* name;
//	struct person* next; //자기 참조 구조체
//};
//
//int main()
//{
//	struct person a, b, c, d;
//
//	a.next = &b;  //구조체 a 뒤에 구조체 b 연결
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	a.age = 8;
//	a.name = "이종범";
//
//	b.age = 6;
//	b.name = "이정후";
//
//	c.age = 7;
//	c.name = "현정화";
//
//	d.age = 7;
//	d.name = "신유빈";
//
//	struct person* p;
//
//	for (p = &a; p != NULL; p = p->next)
//	{
//		printf("%d ", p->age);
//		printf("%s\n", p->name);
//	}
//
//	return 0;
//}