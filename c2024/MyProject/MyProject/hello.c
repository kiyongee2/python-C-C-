#include <stdio.h>

int main_Hello() {
	//printf("Hello World!!\n");
	/*int age = 12;
	printf("%d\n", age);

	age = 13;
	printf("%d\n", age);

	float height = 169.9;
	printf("%.1f\n", height);

	double weight = 55.5;
	printf("%.2lf\n", weight);*/

	// ���
	const int YEAR = 2000;
	//YEAR = 2001;

	// �Է� - scanf()
	
	/*int input;
	printf("�� �Է�: ");
	scanf_s("%d", &input);
	printf("�Է°�: %d\n", input);*/

	// ����, ���ڿ�
	char ch = 'A';
	printf("%c\n", ch);

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// �����ϱ�
	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���̰� �� ���̿���?");
	scanf_s("%d", &age);

	// ����ϱ�
	printf("*** ���� ���� ***\n");
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);




	

	return 0;
}