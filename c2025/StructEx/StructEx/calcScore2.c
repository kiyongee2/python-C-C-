#include <stdio.h>

typedef struct {
	int math;
	int eng;
	double avg;
}Score;

typedef struct {
	int number;
	char name[20];
	Score score;  //Score ����ü ����
}Student;

void calcAvg(Score* score) { //������ - ������ ���� ����
	score->avg = (score->math + score->eng) / 2.0;
}

void showStudentInfo(Student* st) { //������ - ����� �뷮 ���
	printf("�й�: %d, �̸�: %s\n", st->number, st->name);
	printf("����: %d, ����: %d\n", st->score.math, st->score.eng);
	printf("���: %.1lf\n", st->score.avg);
}

int main()
{
	//����ü �迭 ����� �ʱ�ȭ
	Student students[3] = {
		{101, "�ӽ���", {95, 88, 0.0}},
		{102, "������", {80, 95, 0.0}},
		{103, "������", {85, 90, 0.0}},
	};

	//������ ��հ� ����
	for (int i = 0; i < 3; i++) {
		calcAvg(&students[i].score);
		showStudentInfo(&students[i]);
	}
	
	return 0;
}
