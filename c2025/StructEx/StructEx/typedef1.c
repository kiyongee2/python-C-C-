#include <stdio.h>

typedef struct {
	int no;
	char name[20];
	int age;
}Hero;

int main()
{
	//����ü ���� ����� �ʱ�ȭ
	Hero p1 = { 1, "����", 39 };

	//��(.) �����ڷ� �Ӽ��� ������
	printf("��ȣ: %d, �̸�: %s, ����: %d\n", 
				p1.no, p1.name, p1.age);

	//����ü ������ ����� �ʱ�ȭ
	Hero p2 = { 2, "�̼���", 54 };
	Hero* ptr = &p2;

	//ȭ��ǥ(->) �����ڷ� �Ӽ��� ������
	printf("��ȣ: %d, �̸�: %s, ����: %d\n",
		ptr->no, ptr->name, ptr->age);
	
	return 0;
}
