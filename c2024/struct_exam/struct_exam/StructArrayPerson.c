//#include <stdio.h>
//#include <string.h>
//
//struct Person {
//	//이름, 나이, 키
//	char name[20];
//	int age;
//	float height;
//};
//
//int main()
//{
//	//구조체 배열 선언
//	struct Person p[3] = {
//		{"이산", 15, 171.9f},
//		{"한강", 35, 163.3f},
//		{"박봄", 22, 178.4f},
//	};
//	int i;
//
//	//p[0]의 정보
//	/*printf("이름: %s\n", p[0].name);
//	printf("나이: %d\n", p[0].age);
//	printf("키: %.1f\n", p[0].height);*/
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("이름: %s, 나이: %d, 키: %.1f\n", 
//			p[i].name, p[i].age, p[i].height);
//	}
//
//	return 0;
//}