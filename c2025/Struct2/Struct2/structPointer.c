//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct  {
//	int no;
//	char name[20];
//	int age;
//}Person;
//
//int main()
//{
//	//구조체 변수 선언
//	Person list1 = { 1, "고담덕", 39 };
//
//	//구조체 포인터 선언
//	Person list2 = { 2, "이순신", 54 };
//	Person* ptr = &list2;
//
//	//구조체 동적 할당
//	Person* list3;
//	list3 = (Person*)malloc(sizeof(Person));
//	if (list3 == NULL) {
//		printf("Memory allocation failed\n");
//		return 1;
//	}
//
//	list3->no = 3;
//	strcpy(list3->name, "장영실");
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
