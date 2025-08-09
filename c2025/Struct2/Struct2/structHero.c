#include <stdio.h>

typedef struct {
	int no;
	char name[20];
	int age;
}Hero;

int main()
{
	Hero p1 = { 1, "고담덕", 39 };

	printf("%d %s %d\n", p1.no, p1.name, p1.age);

	Hero p2 = { 2, "이순신", 54 };
	Hero* ptr = &p2;

	printf("%d %s %d\n", ptr->no, ptr->name, ptr->age);


	return 0;
}