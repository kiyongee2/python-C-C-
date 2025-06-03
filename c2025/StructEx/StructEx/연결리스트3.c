//#include <stdio.h>
//
//typedef struct {
//	int age;
//	char* name;
//	struct Person* next; //자기 참조 구조체
//}Person;
//
//int main()
//{
//	//노드 생성 및 초기화
//	Person a = {8, "이강인"};
//	Person b = {6, "이정후"};
//	Person c = {7, "최민정"};
//	Person d = {7, "신유빈"};
//
//	a.next = &b;  //구조체 a 뒤에 구조체 b 연결
//	b.next = &c;
//	c.next = &d;
//	d.next = NULL;
//
//	Person* p;  //구조체 포인터 변수 선언
//	p = &a;     //초기화
//
//	//첫 번째 노드 출력
//	printf("%d %s\n", p->age, p->name); //8 이강인
//
//	//노드 순회 및 출력
//	for (p = &a; p != NULL; p = p->next)
//	{
//		printf("%d ", p->age);
//		printf("%s\n", p->name);
//	}
//
//	printf("= 구조체 c 삭제 후 =\n");
//	b.next = c.next; //b -> d
//	c.next = NULL; 
//
//	for (p = &a; p != NULL; p = p->next)
//	{
//		printf("%d ", p->age);
//		printf("%s\n", p->name);
//	}
//
//	return 0;
//}