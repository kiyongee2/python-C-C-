//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct data {
//	int no;
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//����ü ���� ����
//	struct data list1 = { 1, "����", 39 };
//
//	//����ü ������ ����
//	struct data list2 = {2, "�̼���", 54};
//	struct data* ptr = &list2;
//
//	//����ü ���� �Ҵ�
//	struct data* list3;
//	list3 = (struct data*)malloc(sizeof(struct data));
//	if (list3 == NULL) {
//		printf("Memory allocation failed\n");
//		return 1;
//	}
//
//	list3->no = 3;
//	strcpy(list3->name, "�念��");
//	list3->age = 60;
//
//	printf("%d %s %d\n", list1.no, list1.name, list1.age);
//	printf("%d %s %d\n", ptr->no, ptr->name, ptr->age);
//	printf("%d %s %d\n", list3->no, list3->name, list3->age);
//
//	free(list3);
//
//	return 0;
//}
