//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct
//{
//	char name[20];
//	int age;
//	float height;
//}Person;
//
//int main()
//{
//	//����ü �迭 ���� �Ҵ�
//	Person* p = (Person*)malloc(sizeof(Person) * 3);
//
//	if (p == NULL)
//	{
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);
//	}
//	//Person 1�� ����
//	strcpy(p->name, "�̻�");
//	p->age = 20;
//	p->height = 171.3f;
//
//	//Person 2�� ����
//	strcpy((p + 1)->name, "�Ѱ�");
//	(p + 1)->age = 35;
//	(p + 1)->height = 163.5f;
//
//	//Person 3�� ����
//	strcpy((p + 2)->name, "�ں�");
//	(p + 2)->age = 29;
//	(p + 2)->height = 173.5f;
//
//	//����� ���� ���
//	/*printf("�̸�: %s, ����: %d, Ű: %.1f\n",
//				p->name, p->age, p->height);
//
//	printf("�̸�: %s, ����: %d, Ű: %.1f\n",
//		(p+1)->name, (p+1)->age, (p+1)->height);*/
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�̸�: %s, ����: %d, Ű: %.1f\n",
//			(p + i)->name, (p + i)->age, (p + i)->height);
//	}
//
//	free(p);  //����ü ������ ����
//
//	return 0;
//}