#include <stdio.h>

int main_age() {

	int age = 15;
	
	/*if (age >= 20)
		printf("�Ϲ��� �Դϴ�.");
	else
		printf("�л��Դϴ�.");*/

	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�.\n");
	}

	return 0;
}