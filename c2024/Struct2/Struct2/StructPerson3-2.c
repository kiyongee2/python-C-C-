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
//void showpInfo(Person*);
//int main()
//{
//	//����ü ������ �迭
//	Person* p[3];
//
//	for (int i = 0; i <= 3; i++)
//	{
//		p[i] = malloc(sizeof(Person*));
//	}
//
//	strcpy(p[0]->name, "�̻�");
//	p[0]->age = 20;
//	p[0]->height = 170.5f;
//
//	strcpy(p[1]->name, "�Ѱ�");
//	p[1]->age = 35;
//	p[1]->height = 170.5f;
//
//	strcpy(p[2]->name, "�ں�");
//	p[2]->age = 29;
//	p[2]->height = 170.5f;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�̸�:%s, ����:%d, Ű:%.1f\n",
//						p[i]->name, p[i]->age, p[i]->height);
//	}
//
//	free(p); //���� �޸� ���� 
//
//	return 0;
//}