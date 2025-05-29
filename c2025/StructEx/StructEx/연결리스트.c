#include <stdio.h>

struct abc {
	int data;
	struct abc* next; //자기 참조를 위한 포인터 변수 선언
};

int main()
{
	struct abc x;
	struct abc y;
	struct abc z;

	x.data = 10;
	y.data = 20;
	z.data = 30;

	//구조체 연결
	x.next = &y;
	y.next = &z;
	z.next = NULL;

	struct abc* p;
	for (p = &x; p != NULL; p = p->next) {
		printf("%d\n", p->data);
	}

	printf("구조체 y 삭제 후\n");
	x.next = y.next;
	y.next = NULL;  //y 삭제

	for (p = &x; p != NULL; p = p->next) {
		printf("%d\n", p->data);
	}

	return 0;
}