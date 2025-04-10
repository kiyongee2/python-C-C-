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
//	//구조체 포인터 변수 선언
//	/*Person p1;
//	Person* pp1 = &p1;
//
//	strcpy(p1.name, "알파고");
//	p1.age = 11;
//	p1.height = 170.9f;
//
//	printf("이름: %s\n", pp1->name);
//	printf("나이: %d\n", pp1->age);
//	printf("키: %.1f\n", pp1->height);*/
//
//	//구조체 포인터 배열
//	Person* p = (Person*)malloc(sizeof(Person) * 3); 
//	if (p == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);
//	}
//
//	//p 변수 1명 생성
//	strcpy(p->name, "이산");
//	p->age = 20;
//	p->height = 171.2f;
//
//	//printf("이름:%s, 나이:%d, 키:%.1f\n",
//	//			p->name, p->age, p->height);
//
//	//p 변수 2명 생성
//	strcpy((p + 1)->name, "한강");
//	(p + 1)->age = 35;
//	(p + 1)->height = 163.2f;
//
//	//p 변수 3명 생성
//	strcpy((p + 2)->name, "박봄");
//	(p + 2)->age = 59;
//	(p + 2)->height = 173.2f;
//
//	//사람의 정보 출력 
//	showpInfo(p, 3);
//
//	free(p); //동적 메모리 해제 
//
//	return 0;
//}
//
//void showpInfo(Person *person, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("이름:%s, 나이:%d, 키:%.1f\n",
//			(person + i)->name, (person + i)->age, (person + i)->height);
//	}
//}
