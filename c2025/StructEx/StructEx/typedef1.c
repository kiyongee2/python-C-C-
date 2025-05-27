#include <stdio.h>

typedef struct {
	int no;
	char name[20];
	int age;
}Hero;

int main()
{
	//구조체 변수 선언과 초기화
	Hero p1 = { 1, "고담덕", 39 };

	//점(.) 연산자로 속성에 접근함
	printf("번호: %d, 이름: %s, 나이: %d\n", 
				p1.no, p1.name, p1.age);

	//구조체 포인터 선언과 초기화
	Hero p2 = { 2, "이순신", 54 };
	Hero* ptr = &p2;

	//화살표(->) 연산자로 속성에 접근함
	printf("번호: %d, 이름: %s, 나이: %d\n",
		ptr->no, ptr->name, ptr->age);
	
	return 0;
}
