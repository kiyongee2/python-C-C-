//#include <stdio.h>
//
//typedef struct {
//	int math;
//	int eng;
//	double avg;
//}Score;
//
//typedef struct {
//	int number;
//	char name[20];
//	Score score;  //Score ����ü ����
//}Student;
//
//void calcAvg(Score* score) { //������ - ������ ���� ����
//	score->avg = (score->math + score->eng) / 2.0;
//}
//
//void showStudentInfo(Student* st) { //������ - ����� �뷮 ���
//	printf("�й�: %d, �̸�: %s\n", st->number, st->name);
//	printf("����: %d, ����: %d\n", st->score.math, st->score.eng);
//	printf("���: %.1lf\n", st->score.avg);
//}
//
//int main()
//{
//	//����ü ���� ����� �ʱ�ȭ
//	Student s1 = {
//		.number = 101,
//		.name = "�ӽ���",
//		.score = {95, 88, 0.0}
//	};
//
//	Student s2 = {
//		.number = 102,
//		.name = "������",
//		.score = {80, 95, 0.0}
//	};
//
//	//������ ���
//	calcAvg(&s1.score);
//	calcAvg(&s2.score);
//
//
//	//�л��� ����
//	showStudentInfo(&s1);
//	showStudentInfo(&s2);
//
//	return 0;
//}
