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
//
//	p = &a;
//
//	//ù ��° ��� ���
//	printf("%d ", p->age);
//	printf("%s\n", p->name);
//	
//	//�ι�° ��� ���
//	printf("%d ", p->next);
//	printf("%s\n", p->next);
//
//	//��ü ���
//	for (p = &a; p != NULL; p = p->next)
//	{
//		printf("%d ", p->age);
//		printf("%s\n", p->name);
//	}
//
//	//2��° ��� ����
//
//
//	return 0;
//}