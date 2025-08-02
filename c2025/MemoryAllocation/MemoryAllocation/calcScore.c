//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h> //true/false 사용
//
//int main()
//{
//	bool run = true;   //토글(상태) 변수 - 실행/종료
//	int studentNum, choice;  //학생수, 메뉴 선택
//	int* score = NULL;  //점수 (동적 배열)
//	int sum, max;       //합계, 최고점수
//	float avg;          //평균
//
//	while (run) {
//		printf("------------------------------------------------------\n");
//		printf("1.학생수 | 2.점수입력 | 3.점수리스트 | 4.분석 | 5.종료\n");
//		printf("------------------------------------------------------\n");
//		printf("선택> ");
//		scanf("%d", &choice); //메뉴 입력
//
//		switch (choice) {
//		case 1:
//			printf("학생수 입력: ");
//			scanf("%d", &studentNum);
//			score = (int*)malloc(sizeof(int) * studentNum);
//			if (score == NULL) {
//				printf("동적 메모리 할당에 실패했습니다.\n");
//				return 1;
//			}
//			break;
//		case 2:
//			for (int i = 0; i < studentNum; i++) { //점수 입력
//				printf("score[%d]=", i);
//				scanf("%d", &score[i]);
//			}
//			break;
//		case 3:
//			for (int i = 0; i < studentNum; i++) { //점수 리스트
//				printf("score[%d]=%d\n", i, score[i]);
//			}
//			break;
//		case 4:
//			sum = 0; //합계 초기화
//			max = score[0]; //최대값 설정
//			for (int i = 0; i < studentNum; i++) {
//				sum += score[i];  //합계
//				if (score[i] > max)
//					max = score[i]; //최대값
//			}
//			avg = (float)sum / studentNum;
//			printf("평균 점수: %.1f\n", avg);
//			printf("최고 점수: %d\n", max);
//			break;
//		case 5:
//			printf("프로그램 종료!");
//			run = false;  //실행 종료
//			break;
//		default:
//			printf("잘못된 선택입니다. 다시 선택하세요\n");
//			break;
//		}
//	}
//	free(score); //메모리 반납
//
//	return 0;
//}