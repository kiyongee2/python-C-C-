//#include <stdio.h>
//
//typedef struct {
//	int age;
//	char* name;
//	struct Person* next; //�ڱ� ���� ����ü
//}Person;
//
//int main()
//{
//	//��� ���� �� �ʱ�ȭ
//	Person a = {8, "�̰���"};
//	Person b = {6, "������"};
//	Person c = {7, "�ֹ���"};
//	Person d = {7, "������"};
//
//	a.next = &b;  //����ü a �ڿ� ����ü b ����
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	Person* p;  //����ü ������ ���� ����
//	p = &a;     //�ʱ�ȭ
//
//	//ù ��° ��� ���
//	printf("%d %s\n", p->age, p->name); //8 �̰���
//
//	//��� ��ȸ �� ���
//	for (p = &a; p != NULL; p = p->next)
//	{
//		printf("%d ", p->age);
//		printf("%s\n", p->name);
//	}
//
//	printf("= ����ü c ���� �� =\n");
//	b.next = c.next; //b -> d
//	c.next = NULL; 
//
//	for (p = &a; p != NULL; p = p->next)
//	{
//		printf("%d ", p->age);
//		printf("%s\n", p->name);
//	}
//
//	return 0;
//}