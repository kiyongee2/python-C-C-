#include <stdio.h>

typedef struct {
	char name[20];
	int quantity;
	char* type;
}Fruit;

int main_Fruit() {
	//2���� ���ڿ� �迭
	//char types[][10] = { "Apple", "Banana", "Orange" };

	//������ �迭
	char* types[] = { "Apple", "Banana", "Orange" };

	//Fruit ��ü ����
	Fruit f = { "Daegu Apple", 10, types[0] };
	printf("Fruit Name: %s\n", f.name);
	printf("Quantity: %d\n", f.quantity);
	f.type = "Kiwi";
	printf("Fruit Type: %s\n", f.type);

	//������ ��ü ����
	Fruit* ptr = &f;  //f(��ü)�� ptr(������)�� ����

	printf("Fruit Name: %s\n", ptr->name);
	printf("Quantity: %d\n", ptr->quantity);

	ptr->type = "Kiwi";
	printf("Fruit Type: %s\n", ptr->type);

	return 0;
}