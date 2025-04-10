#include <stdio.h>

typedef struct
{
	int math;
	int eng;
}Score;

typedef struct
{
	int number;
	char name[20];
	Score score;
}Student;

void showStudentInfo(Student);

int main()
{
	Student s[3];
	int i;
	int total[2] = {0, 0};  //���� ����, ���� ����
	double avg[2] = { 0.0, 0.0 }; //���� ���, ���� ��� 

	for (i = 0; i < 3; i++)
	{
		printf("�й� �Է�: ");
		scanf_s("%d", &s[i].number);

		printf("�̸� �Է�: ");
		scanf_s("%s", s[i].name, sizeof(s[i].name));

		printf("�������� �Է�: ");
		scanf_s("%d", &s[i].score.math);

		printf("�������� �Է�: ");
		scanf_s("%d", &s[i].score.eng);
	}

	printf("�й�\t�̸�\t����\t����\n");

	for (i = 0; i < 3; i++)
	{
		total[0] += s[i].score.math; //���� ����
		total[1] += s[i].score.eng;  //���� ���� 

		showStudentInfo(s[i]);  //�л� ���� ���
	}

	avg[0] = (double)total[0] / 3;;
	avg[1] = (double)total[1] / 3;

	printf("���� ���: %.1lf, ���� ���: %.1lf", avg[0], avg[1]);

	return 0;
}

void showStudentInfo(Student st)
{
	printf("%d\t%s\t%d\t%d\n", st.number, st.name, 
		st.score.math, st.score.eng);
}