#include <stdio.h>

typedef struct {
	char name[20];
	int quantity;
	char* type;
}Fruit;

int main() {
	char types[][10] = { "Apple", "Banana", "Orange" };
	Fruit f = { "Fuji Apple", 10, types[0] };
	Fruit* ptr = &f;

	printf("Fruit Name: %s\n", ptr->name);
	printf("Quantity: %d\n", ptr->quantity);

	ptr->type = "Kiwi";
	printf("Fruit Type: %s\n", ptr->type);

	return 0;
}