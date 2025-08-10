//#include <stdio.h>
//
//typedef struct {
//	char name[20];  //과일명
//	int quantity;   //수량
//	char* brand;    //브랜드
//}Fruit;
//
//int main()
//{
//	char *brand[] = { "청송사과", "상주사과", "음성사과" };
//
//	Fruit f = { "사과", 100, brand[0]};
//	Fruit* p;
//
//	puts("--- 구조체 변수로 접근 ---");
//	printf("브랜드: %s\n", f.name);
//	printf("수량: %d\n", f.quantity);
//	f.brand = "상주사과";
//	printf("과일 종류: %s\n", f.brand);
//
//	p = &f;  //구조체 주소 저장
//	puts("\n--- 구조체 포인터로 접근 ---");
//	printf("브랜드: %s\n", p->name);
//	printf("수량: %d\n", p->quantity);
//	f.brand = "상주사과";
//	printf("과일 종류: %s\n", p->brand);
//
//	return 0;
//}
