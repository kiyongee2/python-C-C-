//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
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
//	//����ü ���� ����
//	Person p1;
//
//	//p1.name = "���İ�";
//	strcpy(p1.name, "���İ�");
//	p1.age = 11;
//	p1.height = 170.5f;
//
//	//����ü ���� ����� �ʱ�ȭ
//	//Person p1 = { "���İ�", 11, 165.5f };
//
//	printf("�̸�: %s\n", p1.name);
//	printf("����: %d\n", p1.age);
//	printf("Ű: %.1f\n", p1.height);
//
//	//����ü �迭 ����
//	Person person[3] = {
//		{"�̻�", 15, 171.9f},
//		{"�Ѱ�", 34, 163.9f},
//		{"�ں�", 22, 178.4f}
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�̸�: %s, ����: %d, Ű: %.1f\n",
//			person[i].name, person[i].age, person[i].height);
//	}
//
//	return 0;
//}