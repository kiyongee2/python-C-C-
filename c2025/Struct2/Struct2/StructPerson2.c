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
//	//구조체 변수 선언
//	Person p1;
//
//	//p1.name = "알파고";
//	strcpy(p1.name, "알파고");
//	p1.age = 11;
//	p1.height = 170.5f;
//
//	//구조체 변수 선언과 초기화
//	//Person p1 = { "알파고", 11, 165.5f };
//
//	printf("이름: %s\n", p1.name);
//	printf("나이: %d\n", p1.age);
//	printf("키: %.1f\n", p1.height);
//
//	//구조체 배열 선언
//	Person person[3] = {
//		{"이산", 15, 171.9f},
//		{"한강", 34, 163.9f},
//		{"박봄", 22, 178.4f}
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("이름: %s, 나이: %d, 키: %.1f\n",
//			person[i].name, person[i].age, person[i].height);
//	}
//
//	return 0;
//}