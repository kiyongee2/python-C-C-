//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////성적 구조체
//typedef struct
//{
//	int math;
//	int eng;
//}Score;
//
////학생 구조체
//typedef struct
//{
//	int number;    //학번
//	char name[20]; //이름
//	Score score;   //성적
//}Student;
//
//void showStudentInfo(Student student);
//int main()
//{
//	Student s[3];
//	int i;
//	int total[2] = { 0, 0 };
//	double avg[2] = { 0.0, 0.0 };
//
//	printf("===== 성적 관리 프로그램 ===== \n");
//	//입력
//	for (i = 0; i < 3; i++)
//	{
//		printf("학번 입력: ");
//		scanf("%d", &s[i].number);
//
//		printf("%d번째 학생의 이름 입력: ", i+1);
//		scanf("%s", s[i].name);
//
//		printf("수학점수 입력: ");
//		scanf("%d", &s[i].score.math);
//
//		printf("영어점수 입력: ");
//		scanf("%d", &s[i].score.eng);
//	}
//
//	printf("======================================\n");
//	//출력
//	printf("학번\t이름\t 수학\t영어\n");
//	for (i = 0; i < 3; i++)
//	{
//		total[0] += s[i].score.math;   //수학 합계
//		total[1] += s[i].score.eng;    //영어 합계
//
//		showStudentInfo(s[i]); //학생 정보 호출
//	}
//	//평균 계산
//	avg[0] = (double)total[0] / 3;  //수학 평균
//	avg[1] = (double)total[1] / 3;  //국어 평균
// 	printf("======================================\n");
//
//	printf("수학 평균: %.1f, 영어 평균: %.1f\n", avg[0], avg[1]);
//
//	return 0;
//}
//
//void showStudentInfo(Student student)
//{
//	printf("%d\t%s\t%d\t%d\n", 
//		student.number, student.name, student.score.math, student.score.eng);
//}