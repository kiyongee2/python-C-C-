//성적 구조체
typedef struct{
	int math;
	int eng;
	double avg;
}Score;

//학생
typedef struct{
	int number;
	char name[20];
	Score score;
}Student;

void showStudentInfo(Student st)
{
	printf("학번: %d, 이름: %s\n", st.number, st.name);
	printf("수학: %d, 영어: %d\n", st.score.math, st.score.eng);
	printf("평균: %.1lf\n", st.score.avg);
}
