//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <string.h>
//
////Subject 구조체
//typedef struct {
//	char subjectName[20];  //과목명
//	int scorePoint;        //점수
//}Subject;
//
////과목 출력 함수
//void printInfo(Subject subject) {
//	printf("과목명: %s, 점수: %d\n",
//		subject.subjectName, subject.scorePoint);
//}
//
//int main()
//{
//	//구조체 변수 국어, 수학, 영어 생성
//	Subject kor, math, eng;
//	int sum;
//	float avg;  
//
//	//과목 입력
//	strcpy(kor.subjectName, "국어");
//	kor.scorePoint = 92;
//
//	strcpy(math.subjectName, "수학");
//	math.scorePoint = 82;
//
//	strcpy(eng.subjectName, "영어");
//	eng.scorePoint = 86;
//
//	//평균 계산
//	sum = kor.scorePoint + math.scorePoint + eng.scorePoint;
//	avg = (float)sum / 3;
//
//	//과목 출력
//	printInfo(kor);
//	printInfo(math);
//	printInfo(eng);
//	printf("평균 점수: %.1f\n", avg);
//
//	return 0;
//}
