//#include <stdio.h>
//
//typedef struct {
//	int age;
//	char* name;
//	struct person* next; //�ڱ� ���� ����ü
//}person;
//
//int main()
//{
//	person a = {8, "�̰���"};
//	person b = {6, "������"};
//	person c = {7, "�ֹ���"};
//	person d = {7, "������"};
//
//	a.next = &b;  //����ü a �ڿ� ����ü b ����
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