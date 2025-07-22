#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h>

//���� ����ü
typedef struct {
	int math;
	int eng;
	double avg;
}Score;

//�л�
typedef struct {
	int number;
	char name[20];
	Score score;
}Student;

void calcAvg(Score* score) {
	score->avg = (score->math + score->eng) / 2.0;
}

void showStudentInfo(Student* st)
{
	printf("�й�: %d, �̸�: %s\n", st->number, st->name);
	printf("����: %d, ����: %d\n", st->score.math, st->score.eng);
	printf("���: %.1lf\n", st->score.avg);
}

int main()
{
	//����ü ��ü ����
	Student s1;

	s1.number = 101;
	strcpy(s1.name, "���̽�");
	s1.score.math = 95;
	s1.score.eng = 88;

	//������ ���
	calcAvg(&s1.score);

	//�л��� ���� �Լ� ȣ��
	showStudentInfo(&s1); 

	return 0;
}