//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//bool run = true;  //상태 변수
//int* score;  //점수 (포인터)
//int studentNum, choice; //학생수, 메뉴 선택
//int sum, max; //합계, 최고점수
//float avg;   //평균
//
////학생수
//void getStudentNum() {
//	if (score != NULL) {
//		free(score); //메모리 해제
//		score = NULL;
//	}
//
//	printf("학생수: ");
//	scanf("%d", &studentNum);
//	score = (int*)malloc(sizeof(int) * studentNum); //동적 생성
//}
//
////점수 입력
//void inputScore() {
//	if (score == NULL) {
//		puts("학생수를 먼저 입력하세요.");
//		return;
//	}
//	for (int i = 0; i < studentNum; i++) {
//		printf("score[%d]=", i);
//		scanf("%d", &score[i]);
//	}
//}
//
////점수 리스트
//void getScoreList() {
//	if (score == NULL) {
//		puts("학생수를 먼저 입력하세요.");
//		return;
//	}
//	for (int i = 0; i < studentNum; i++) {
//		printf("score[%d]=%d\n", i, score[i]);
//	}
//}
//
////분석
//void calculate() {
//	if (score == NULL) {
//		puts("학생수를 먼저 입력하세요.");
//		return;
//	}
//
//	sum = 0; //합계 초기화
//	max = score[0]; //최대값 설정
//	for (int i = 0; i < studentNum; i++) {
//		sum += score[i];  //합계
//		if (score[i] > max)
//			max = score[i]; //최대값
//	}
//	avg = (float)sum / studentNum;
//	printf("평균 점수: %.2f\n", avg);
//	printf("최고 점수: %d\n", max);
//}
//
//int main()
//{
//	while (run) {
//		printf("------------------------------------------------------\n");
//		printf("1.학생수 | 2.점수입력 | 3.점수리스트 | 4.분석 | 5.종료\n");
//		printf("------------------------------------------------------\n");
//		printf("선택> ");
//
//		scanf_s("%d", &choice); //메뉴 입력
//		switch (choice) {
//		case 1:
//			getStudentNum();
//			break;
//		case 2:
//			inputScore();
//			break;
//		case 3:
//			getScoreList();
//			break;
//		case 4:
//			calculate();
//			break;
//		case 5:
//			printf("프로그램 종료!");
//			run = false;
//			break;
//		default:
//			printf("잘못된 선택입니다. 다시 선택하세요\n");
//			break;
//		}
//	}
//
//	return 0;
//}