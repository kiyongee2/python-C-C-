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
//	//������ �迭 ����
//	char* types[] = { "Apple", "Banana", "Orange" };
//
//	Fruit f = { "�뱸 ���", 100, types[1]}; //���� �Ҵ�
//	Fruit* ptr; //����ü ������ �Ҵ�
//
//	printf("===== ������ ���� =====\n");
//	printf("���� �̸�: %s\n", f.name);
//	printf("����: %d\n", f.quantity);
//	f.type = "Grape";    //���� ���� ����
//	printf("���� ����: %s\n", f.type);
//
//	ptr = &f;  //f�� �ּ� ����
//
//	printf("===== �����ͷ� ���� =====\n");
//	printf("���� �̸�: %s\n", ptr->name);
//	printf("����: %d\n", ptr->quantity);
//	f.type = "Grape";    //���� ���� ����
//	printf("���� ����: %s\n", ptr->type);
//
//	return 0;
//}