#ifndef STUDENT_H  //조건부 컴파일 블럭
#define STUDENT_H  //매크로 이름 정의(구조체 중복 오류 막는 용도)

#include <stdio.h>
#define NAME_LEN 20  //이름의 크기
#define SIZE 3       //사람 수

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

void printInfo(Student* st);  //학생의 정보 출력 함수 선언
#endif 

