#define _CRT_SECURE_NO_WARNINGS
#define NAME_LENGTH 10
#include <stdio.h>

typedef struct {
	char name[NAME_LENGTH];
	float height;
}Person;

int main_StructPerson() {
	Person p1, p2;
	
	/*strcpy(p1.name, "����");
	p1.height = 174.9;*/

	//�Է� �ޱ�
	printf("�̸�: ");
	//scanf_s("%s", &p1.name);
	gets_s(p1.name, NAME_LENGTH);

	printf("Ű: ");
	scanf_s("%f", &p1.height);

	while (getchar() != '\n');

	printf("�̸�: ");
	gets_s(p2.name, NAME_LENGTH);

	printf("Ű: ");
	scanf_s("%f", &p2.height);

	printf("%s %.1f\n", p1.name, p1.height);
	printf("%s %.1f\n", p2.name, p2.height);

	return 0;
}