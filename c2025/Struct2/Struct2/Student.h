//���� ����ü
typedef struct{
	int math;
	int eng;
	double avg;
}Score;

//�л�
typedef struct{
	int number;
	char name[20];
	Score score;
}Student;

void showStudentInfo(Student st)
{
	printf("�й�: %d, �̸�: %s\n", st.number, st.name);
	printf("����: %d, ����: %d\n", st.score.math, st.score.eng);
	printf("���: %.1lf\n", st.score.avg);
}
