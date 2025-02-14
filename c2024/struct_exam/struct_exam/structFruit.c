#include <stdio.h>

typedef struct {
	char name[20];
	int quantity;
	char* type;
}Fruit;

int main_Fruit() {
	//2차원 문자열 배열
	//char types[][10] = { "Apple", "Banana", "Orange" };

	//포인터 배열
	char* types[] = { "Apple", "Banana", "Orange" };

	//Fruit 객체 생성
	Fruit f = { "Daegu Apple", 10, types[0] };
	printf("Fruit Name: %s\n", f.name);
	printf("Quantity: %d\n", f.quantity);
	f.type = "Kiwi";
	printf("Fruit Type: %s\n", f.type);

	//포인터 객체 생성
	Fruit* ptr = &f;  //f(객체)를 ptr(포인터)에 대입

	printf("Fruit Name: %s\n", ptr->name);
	printf("Quantity: %d\n", ptr->quantity);

	ptr->type = "Kiwi";
	printf("Fruit Type: %s\n", ptr->type);

	return 0;
}