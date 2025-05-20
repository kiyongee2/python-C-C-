//#include <stdio.h>
//#include <string.h> //strcpy_s()
//#include <stdlib.h> //malloc(), free()
//
//typedef struct {
//	int no;
//	char name[20];
//	int age;
//}Hero;
//
//int main()
//{
//	//구조체 변수 선언과 초기화
//	Hero p1 = { 1, "고담덕", 39 };
//
//	//구조체 포인터 선언
//	Hero* p2;
//	p2 = (Hero*)malloc(sizeof(Hero) * 3);
//	if (p2 == NULL) {
//		printf("메모리 할당에 실패했습니다.\n");
//		return 1;
//	}
//
//	p2->no = 2;
//	strcpy_s(p2->name, sizeof(p2->name), "이순신");
//	p2->age = 54;
//
//	printf("%d %s %d\n", p1.no, p1.name, p1.age);
//	printf("%d %s %d\n", p2->no, p2->name, p2->age);
//
//	free(p2);  //동적 메모리 해제
//
//	return 0;
//}
