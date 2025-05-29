#include <stdio.h>

struct abc {
	int data;
	struct abc* next; //�ڱ� ������ ���� ������ ���� ����
};

int main()
{
	struct abc x;
	struct abc y;
	struct abc z;

	x.data = 10;
	y.data = 20;
	z.data = 30;

	//����ü ����
	x.next = &y;
	y.next = &z;
	z.next = NULL;

	struct abc* p;
	for (p = &x; p != NULL; p = p->next) {
		printf("%d\n", p->data);
	}

	printf("����ü y ���� ��\n");
	x.next = y.next;
	y.next = NULL;  //y ����

	for (p = &x; p != NULL; p = p->next) {
		printf("%d\n", p->data);
	}

	return 0;
}