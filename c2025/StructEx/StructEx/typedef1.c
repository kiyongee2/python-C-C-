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
//	//����ü ���� ����� �ʱ�ȭ
//	Hero p1 = { 1, "����", 39 };
//
//	//����ü ������ ����
//	Hero* p2;
//	p2 = (Hero*)malloc(sizeof(Hero) * 3);
//	if (p2 == NULL) {
//		printf("�޸� �Ҵ翡 �����߽��ϴ�.\n");
//		return 1;
//	}
//
//	p2->no = 2;
//	strcpy_s(p2->name, sizeof(p2->name), "�̼���");
//	p2->age = 54;
//
//	printf("%d %s %d\n", p1.no, p1.name, p1.age);
//	printf("%d %s %d\n", p2->no, p2->name, p2->age);
//
//	free(p2);  //���� �޸� ����
//
//	return 0;
//}
