#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_LEN 10

//typedef int integer;

// ����ü
typedef struct person {
	char name[NAME_LEN];
	float weight;
}person;

int main() {

	// 32byte
	//struct person p1, p2;
	person p1, p2;

	//strcpy(a.name, "����");
	printf("�̸� : ");
	gets_s(p1.name, NAME_LEN);

	printf("������ : ");
	scanf_s("%f", &p1.weight);

	// enter ġ�� ��� ��µǹǷ� ���۸� ��� ��.
	while (getchar() != '\n');

	printf("�̸� : ");
	gets_s(p2.name, NAME_LEN);

	printf("������ : ");
	scanf_s("%f", &p2.weight);

	printf("\n===== �л� ����=====\n");
	printf("%-10s %.1f\n", p1.name, p1.weight);
	printf("%-10s %.1f\n", p2.name, p2.weight);

	return 0;
}