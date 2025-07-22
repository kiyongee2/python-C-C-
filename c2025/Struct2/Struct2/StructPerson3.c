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
//		printf("이름:%s, 나이:%d, 키:%.1f\n",
//			person[i].name, person[i].age, person[i].height);
//	}
//}
//
//int main()
//{
//	//구조체 포인터 배열
//	/*Person* p[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		p[i] = malloc(sizeof(Person));
//		if (p[i] == NULL){
//			printf("동적 메모리 할당에 실패했습니다.\n");
//			exit(1);
//		}
//	}*/
//
//	Person* p;
//	p = (Person*)malloc(sizeof(Person) * 3);
//	if (p == NULL) {
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);
//	}
//
//	strcpy(p[0].name, "이산");
//	p[0].age = 20;
//	p[0].height = 170.5f;
//
//	strcpy(p[1].name, "한강");
//	p[1].age = 35;
//	p[1].height = 170.5f;
//
//	strcpy(p[2].name, "박봄");
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
