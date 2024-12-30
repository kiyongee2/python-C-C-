#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_LEN 10

//typedef int integer;

// 구조체
typedef struct person {
	char name[NAME_LEN];
	float weight;
}person;

int main() {

	// 32byte
	//struct person p1, p2;
	person p1, p2;

	//strcpy(a.name, "김기용");
	printf("이름 : ");
	gets_s(p1.name, NAME_LEN);

	printf("몸무게 : ");
	scanf_s("%f", &p1.weight);

	// enter 치면 모두 출력되므로 버퍼를 비워 줌.
	while (getchar() != '\n');

	printf("이름 : ");
	gets_s(p2.name, NAME_LEN);

	printf("몸무게 : ");
	scanf_s("%f", &p2.weight);

	printf("\n===== 학생 정보=====\n");
	printf("%-10s %.1f\n", p1.name, p1.weight);
	printf("%-10s %.1f\n", p2.name, p2.weight);

	return 0;
}