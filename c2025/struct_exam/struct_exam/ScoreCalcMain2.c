#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�л� ����ü
typedef struct
{
	int number; //�й�
	char name[20]; //�̸�
	int kor;   //���� ���� 
}Student;

void showStudentInfo(Student* );
int main()
{
	Student* s = (Student *)malloc(sizeof(Student) * 3);
	int i;

	//s->number = 11;
	//strcpy(s->name, "haha");
	//s->kor = 85;

	//printf("%d\t%s\t%d\n", s->number, s->name, s->kor);


	printf("=== 1�г��� ���� ���� ���α׷� === \n");
	//�Է�
	for (i = 0; i < 3; i++)
	{
		printf("�й� �Է�: ");
		scanf("%d", &(s + i)->number);

		printf("%d��° �л��� �̸� �Է�: ", i + 1);
		scanf("%s", (s + i)->name);

		printf("���� ���� �Է�: ");
		scanf("%d", &(s + i)->kor);
	}

	printf("======================================\n");
	//���
	printf("�й�\t�̸�\t ���� ����\n");
	for (i = 0; i < 3; i++)
	{
		showStudentInfo((s + i));
	}
	printf("======================================\n");

	return 0;
}

void showStudentInfo(Student* s)
{
	printf("%d\t%s\t%d\n", s->number, s->name, s->kor);
}