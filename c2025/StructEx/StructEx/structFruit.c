//#include <stdio.h>
//
//typedef struct {
//	char name[20];
//	int quantity;
//	char* type;
//}Fruit;
//
//int main()
//{
//	//포인터 배열 선언
//	char* types[] = { "Apple", "Banana", "Orange" };
//
//	Fruit f = { "대구 사과", 100, types[1]}; //변수 할당
//	Fruit* ptr; //구조체 포인터 할당
//
//	printf("===== 변수로 접근 =====\n");
//	printf("과일 이름: %s\n", f.name);
//	printf("수량: %d\n", f.quantity);
//	f.type = "Grape";    //과일 종류 변경
//	printf("과일 종류: %s\n", f.type);
//
//	ptr = &f;  //f의 주소 저장
//
//	printf("===== 포인터로 접근 =====\n");
//	printf("과일 이름: %s\n", ptr->name);
//	printf("수량: %d\n", ptr->quantity);
//	f.type = "Grape";    //과일 종류 변경
//	printf("과일 종류: %s\n", ptr->type);
//
//	return 0;
//}