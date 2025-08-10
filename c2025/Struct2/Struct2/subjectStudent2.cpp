#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#define SIZE 3       //구조체 배열의 크기
#define NAME_LEN 20  //이름의 크기

typedef struct {
	int kor;   //국어
	int math;  //수학
	int eng;   //영어
	float avg;  //평균
}Subject;

typedef struct {
	int number;      //학번
	char name[NAME_LEN];   //이름
	Subject subject; //과목 구조체 변수(참조)
}Student;

//학생의 정보
void printInfo(Student* st) {
	printf("%d\t%s\t%d\t%d\t%d\t%.1f\n", st->number, st->name, st->subject.kor, 
		st->subject.math, st->subject.eng, st->subject.avg);
}

int main()
{
	Student students[SIZE]; //구조체 배열 생성
	int i, j;
	int subject_sum[3] = { 0, 0, 0 };  //국어, 수학, 영어 총점
	double subject_avg[3]; //국어, 수학, 영어 평균 
	const char* subjects[3] = { "국어", "수학", "영어" };

	//사용자 입력
	for (i = 0; i < SIZE; i++) {

		printf("학번 입력: ");
		scanf("%d", &students[i].number);

		printf("이름 입력: ");
		scanf("%s", students[i].name);

		//과목 점수 포인터 배열
		int* scores[3] = { &students[i].subject.kor,
			&students[i].subject.math,&students[i].subject.eng };

		for (j = 0; j < SIZE; j++) {
			printf("%s점수 입력: ", subjects[j]);
			scanf("%d", scores[j]);
		}

		//개인별 평균 계산
		students[i].subject.avg = (float)(students[i].subject.kor +
			students[i].subject.math + students[i].subject.eng) / 3;
	}

	//과목별 총점 계산
	for (i = 0; i < SIZE; i++) {
		subject_sum[0] += students[i].subject.kor;  //국어 총점
		subject_sum[1] += students[i].subject.math; //수학 총점 
		subject_sum[2] += students[i].subject.eng;  //영어 총점 
	}

	//과목별 평균 계산
	for (i = 0; i < SIZE; i++) {
		subject_avg[i] = (double)subject_sum[i] / SIZE; 
	}

	//학생 정보 출력
	printf("\n================= 성 적 표 =================\n");
	printf("학번\t이름\t국어\t수학\t영어\t평균\n");
	for (i = 0; i < SIZE; i++) {
		printInfo(&students[i]);
	}

	printf("\n========== 과목별 평균 점수 ==========\n");
	for (i = 0; i < SIZE; i++) {
		printf("%s 평균: %.1lf\n", subjects[i], subject_avg[i]);
	}
	
	return 0;
}
