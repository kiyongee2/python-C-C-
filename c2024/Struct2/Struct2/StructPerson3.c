//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	char name[20];
//	int age;
//	float height;
//}Person;
//
//void showpInfo(Person *, int);
//int main()
//{
//	//����ü ������ ���� ����
//	/*Person p1;
//	Person* pp1 = &p1;
//
//	strcpy(p1.name, "���İ�");
//	p1.age = 11;
//	p1.height = 170.9f;
//
//	printf("�̸�: %s\n", pp1->name);
//	printf("����: %d\n", pp1->age);
//	printf("Ű: %.1f\n", pp1->height);*/
//
//	//����ü ������ �迭
//	Person* p = (Person*)malloc(sizeof(Person) * 3); 
//	if (p == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);
//	}
//
//	//p ���� 1�� ����
//	strcpy(p->name, "�̻�");
//	p->age = 20;
//	p->height = 171.2f;
//
//	//printf("�̸�:%s, ����:%d, Ű:%.1f\n",
//	//			p->name, p->age, p->height);
//
//	//p ���� 2�� ����
//	strcpy((p + 1)->name, "�Ѱ�");
//	(p + 1)->age = 35;
//	(p + 1)->height = 163.2f;
//
//	//p ���� 3�� ����
//	strcpy((p + 2)->name, "�ں�");
//	(p + 2)->age = 59;
//	(p + 2)->height = 173.2f;
//
//	//����� ���� ��� 
//	showpInfo(p, 3);
//
//	free(p); //���� �޸� ���� 
//
//	return 0;
//}
//
//void showpInfo(Person *person, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("�̸�:%s, ����:%d, Ű:%.1f\n",
//			(person + i)->name, (person + i)->age, (person + i)->height);
//	}
//}
