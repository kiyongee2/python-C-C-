//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 3       //구조체 배열의 크기
//#define NAME_LEN 20  //이름의 크기
//
//typedef struct {
//	char subjectName[20];  //과목명
//	int scorePoint;        //점수
//}Subject;
//
//void printInfo(Subject subject) {
//		printf("과목명: %s, 점수: %d\n",
//			subject.subjectName, subject.scorePoint);
//}
//
//int main()
//{
//	//구조체 배열 생성
//	Subject subjects[SIZE] = {
//		{"국어", 92},
//		{"수학", 82},
//		{"영어", 86}
//	};
//	int i, sum = 0;
//	float avg;
//
//	//구조체 배열 검색(1번 위치)
//	printf("%s, %d\n", subjects[1].subjectName, 
//				subjects[1].scorePoint);
//	printf("-----------------------------\n");
//
//	//평균 계산
//	for (int i = 0; i < SIZE; i++) {
//		sum += subjects[i].scorePoint;
//	}
//	avg = (float)sum / SIZE;
//
//	//과목 출력
//	for (i = 0; i < SIZE; i++) {
//		printInfo(subjects[i]);
//	}
//	printf("평균 점수: %.1f\n", avg);
//
//	return 0;
//}