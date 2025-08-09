#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//학생 구조체
typedef struct
{
	int number; //학번
	char name[20]; //이름
	int kor;   //국어 점수 
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


	printf("=== 1학년의 성적 관리 프로그램 === \n");
	//입력
	for (i = 0; i < 3; i++)
	{
		printf("학번 입력: ");
		scanf("%d", &(s + i)->number);

		printf("%d번째 학생의 이름 입력: ", i + 1);
		scanf("%s", (s + i)->name);

		printf("국어 성적 입력: ");
		scanf("%d", &(s + i)->kor);
	}

	printf("======================================\n");
	//출력
	printf("학번\t이름\t 국어 성적\n");
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