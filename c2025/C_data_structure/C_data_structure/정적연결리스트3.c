//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//typedef struct{
//	int age;
//	char name[20];
//	struct Person* next;  //�ڱ� ���� ����ü
//}Person;
//
//int main()
//{
//	//��� ���� �� �ʱ�ȭ
//	Person a = { 33, "�����" };
//	Person b = { 21, "������" };
//	Person c = { 22, "�ӽ���" };
//	Person d = { 26, "������" };
//
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	Person* p; //����ü ������
//	p = &a;
//
//	//ù° ��� ���
//	//printf("%d %s\n", p->age, p->name); //33 �����
//
//	//��� ��ȸ �� ���
//	for (p = &a; p != NULL; p = p->next) {
//		printf("%d %s\n", p->age, p->name);
//	}
//
//	printf("*** ��� c ���� �� ***\n");
//	b.next = c.next; //b -> d(����)
//	c.next = NULL;
//
//	//��� ��ȸ �� ���
//	for (p = &a; p != NULL; p = p->next) {
//		printf("%d %s\n", p->age, p->name);
//	}
//
//	return 0;
//}
//
