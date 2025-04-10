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
//	//구조체 배열 동적 할당
//	Person* p = (Person*)malloc(sizeof(Person) * 3);
//
//	if (p == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);
//	}
//	//Person 1명 생성
//	strcpy(p->name, "이산");
//	p->age = 20;
//	p->height = 171.3f;
//
//	//Person 2명 생성
//	strcpy((p + 1)->name, "한강");
//	(p + 1)->age = 35;
//	(p + 1)->height = 163.5f;
//
//	//Person 3명 생성
//	strcpy((p + 2)->name, "박봄");
//	(p + 2)->age = 29;
//	(p + 2)->height = 173.5f;
//
//	//사람의 정보 출력
//	/*printf("이름: %s, 나이: %d, 키: %.1f\n",
//				p->name, p->age, p->height);
//
//	printf("이름: %s, 나이: %d, 키: %.1f\n",
//		(p+1)->name, (p+1)->age, (p+1)->height);*/
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("이름: %s, 나이: %d, 키: %.1f\n",
//			(p + i)->name, (p + i)->age, (p + i)->height);
//	}
//
//	free(p);  //구조체 포인터 해제
//
//	return 0;
//}