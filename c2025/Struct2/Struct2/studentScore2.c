#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h>

//성적 구조체
typedef struct {
	int math;
	int eng;
	double avg;
}Score;

//학생
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
	printf("학번: %d, 이름: %s\n", st->number, st->name);
	printf("수학: %d, 영어: %d\n", st->score.math, st->score.eng);
	printf("평균: %.1lf\n", st->score.avg);
}

int main()
{
	//구조체 객체 선언
	Student s1;

	s1.number = 101;
	strcpy(s1.name, "이이슬");
	s1.score.math = 95;
	s1.score.eng = 88;

	//성적의 평균
	calcAvg(&s1.score);

	//학생의 정보 함수 호출
	showStudentInfo(&s1); 

	return 0;
}