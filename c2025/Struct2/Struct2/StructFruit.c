//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//typedef struct{
//	char name[20];
//	int quantity;
//	char* type;
//}Fruit;
//
//int main()
//{
//	//������ �迭
//	char* types[] = { "Apple", "Banana", "Orange" };
//
//	//����ü ���� �Ҵ�
//	Fruit f = { "Daegu Apple", 100, types[0] };
//
//	printf("Fruit Name: %s\n", f.name);
//	printf("Quantity: %d\n", f.quantity);
//	f.type = "Kiwi";
//	printf("Fruit Type: %s\n", f.type);
//	printf("========================\n");
//
//	//������ ����ü ���� �Ҵ�
//	Fruit* ptr = &f;
//
//	printf("Fruit Name: %s\n", ptr->name);
//	printf("Quantity: %d\n", ptr->quantity);
//	ptr->type = "Kiwi";
//	printf("Fruit Type: %s\n", ptr->type);
//
//	return 0;
//}
