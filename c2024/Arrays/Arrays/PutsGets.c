#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // strlen(), strcmp() ����� ���� �ʿ�

int main() {

	//getchar() ���, ����-�ӽ� ��� ���
	char c1, c2;

	c1 = getchar();  //��) 'a' �Է� ����(���ۿ��� '\n' ���� ����)
	while (getchar() != '\n');  //'\n'�� �����
	c2 = getchar(); //��) 'b'�� �Է� ����(���ۿ��� '\n' ���� ����)

	printf("%c %c", c1, c2);

	//�̸��� ���� �Է¹ޱ�
	char name[20];
	int age;

	printf("�̸� �Է� :");
	scanf_s("%s", name, sizeof(name));

	while (getchar() != '\n'); 

	printf("���� �Է� :");
	scanf_s("%d", &age);

	printf("�̸�: %s, ����: %d\n", name, age);
   
	//char array1[10];
	//char array2[10] = "Good luck";

	//puts(array2); //���ڿ� ���

	//puts("���ڿ��� �Է��ϼ���.");
	////gets(array1);
	////Ű���� �Է� - stdin, Ű���� ���-stdout
	//fgets(array1, sizeof(array1), stdin); 

	//puts(array1);

   return 0;
}
