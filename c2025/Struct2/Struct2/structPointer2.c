//#include <stdio.h>
//
//typedef struct {
//	char name[20];  //���ϸ�
//	int quantity;   //����
//	char* brand;    //�귣��
//}Fruit;
//
//int main()
//{
//	char *brand[] = { "û�ۻ��", "���ֻ��", "�������" };
//
//	Fruit f = { "���", 100, brand[0]};
//	Fruit* p;
//
//	puts("--- ����ü ������ ���� ---");
//	printf("�귣��: %s\n", f.name);
//	printf("����: %d\n", f.quantity);
//	f.brand = "���ֻ��";
//	printf("���� ����: %s\n", f.brand);
//
//	p = &f;  //����ü �ּ� ����
//	puts("\n--- ����ü �����ͷ� ���� ---");
//	printf("�귣��: %s\n", p->name);
//	printf("����: %d\n", p->quantity);
//	f.brand = "���ֻ��";
//	printf("���� ����: %s\n", p->brand);
//
//	return 0;
//}
