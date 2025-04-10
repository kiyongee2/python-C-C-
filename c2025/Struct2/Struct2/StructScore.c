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
	int total[2] = {0, 0};  //수학 총점, 영어 총점
	double avg[2] = { 0.0, 0.0 }; //수학 평균, 영어 평균 

	for (i = 0; i < 3; i++)
	{
		printf("학번 입력: ");
		scanf_s("%d", &s[i].number);

		printf("이름 입력: ");
		scanf_s("%s", s[i].name, sizeof(s[i].name));

		printf("수학점수 입력: ");
		scanf_s("%d", &s[i].score.math);

		printf("영어점수 입력: ");
		scanf_s("%d", &s[i].score.eng);
	}

	printf("학번\t이름\t수학\t영어\n");

	for (i = 0; i < 3; i++)
	{
		total[0] += s[i].score.math; //수학 총점
		total[1] += s[i].score.eng;  //영어 총점 

		showStudentInfo(s[i]);  //학생 정보 출력
	}

	avg[0] = (double)total[0] / 3;;
	avg[1] = (double)total[1] / 3;

	printf("수학 평균: %.1lf, 영어 평균: %.1lf", avg[0], avg[1]);

	return 0;
}

void showStudentInfo(Student st)
{
	printf("%d\t%s\t%d\t%d\n", st.number, st.name, 
		st.score.math, st.score.eng);
}