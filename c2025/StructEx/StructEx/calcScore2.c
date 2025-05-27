#include <stdio.h>

typedef struct {
	int math;
	int eng;
	double avg;
}Score;

typedef struct {
	int number;
	char name[20];
	Score score;  //Score 구조체 포함
}Student;

void calcAvg(Score* score) { //포인터 - 참조에 의한 전달
	score->avg = (score->math + score->eng) / 2.0;
}

void showStudentInfo(Student* st) { //포인터 - 복사시 용량 축소
	printf("학번: %d, 이름: %s\n", st->number, st->name);
	printf("수학: %d, 영어: %d\n", st->score.math, st->score.eng);
	printf("평균: %.1lf\n", st->score.avg);
}

int main()
{
	//구조체 배열 선언과 초기화
	Student students[3] = {
		{101, "임시현", {95, 88, 0.0}},
		{102, "이정후", {80, 95, 0.0}},
		{103, "신유빈", {85, 90, 0.0}},
	};

	//성적의 평균과 정보
	for (int i = 0; i < 3; i++) {
		calcAvg(&students[i].score);
		showStudentInfo(&students[i]);
	}
	
	return 0;
}
