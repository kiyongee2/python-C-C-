//#include <stdio.h>
//
//struct person {
//	int age;
//	char* name;
//	struct person* next; //�ڱ� ���� ����ü
//};
//
//int main()
//{
//	struct person a, b, c, d;
//
//	a.next = &b;  //����ü a �ڿ� ����ü b ����
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	a.age = 8;
//	a.name = "������";
//
//	b.age = 6;
//	b.name = "������";
//
//	c.age = 7;
//	c.name = "����ȭ";
//
//	d.age = 7;
//	d.name = "������";
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