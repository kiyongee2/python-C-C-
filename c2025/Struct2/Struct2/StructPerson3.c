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
//void showInfo(Person* person, int len) {
//	for (int i = 0; i < len; i++)
//	{
//		printf("�̸�:%s, ����:%d, Ű:%.1f\n",
//			person[i].name, person[i].age, person[i].height);
//	}
//}
//
//int main()
//{
//	//����ü ������ �迭
//	/*Person* p[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		p[i] = malloc(sizeof(Person));
//		if (p[i] == NULL){
//			printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//			exit(1);
//		}
//	}*/
//
//	Person* p;
//	p = (Person*)malloc(sizeof(Person) * 3);
//	if (p == NULL) {
//		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
//		exit(1);
//	}
//
//	strcpy(p[0].name, "�̻�");
//	p[0].age = 20;
//	p[0].height = 170.5f;
//
//	strcpy(p[1].name, "�Ѱ�");
//	p[1].age = 35;
//	p[1].height = 170.5f;
//
//	strcpy(p[2].name, "�ں�");
//	p[2].age = 29;
//	p[2].height = 170.5f;
//
//	showInfo(p, 3);
//
//	free(p);
//
//	return 0;
//}
//
