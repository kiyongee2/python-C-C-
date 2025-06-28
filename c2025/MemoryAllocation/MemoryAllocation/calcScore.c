#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* score = NULL;  //점수 (동적 배열)
	int studentNum; //학생수

	while (1) {
		printf("------------------------------------------------------\n");
		printf("1.학생수 | 2.점수입력 | 3.점수리스트 | 4.분석 | 5.종료\n");
		printf("------------------------------------------------------\n");
		printf("선택> ");

		int choice;  //메뉴 선택
		int sum = 0; //합계
		float avg;   //평균
		int max;     //최고점수

		scanf_s("%d", &choice); //메뉴 입력
		switch (choice) {
		case 1:
			printf("학생수: ");
			scanf_s("%d", &studentNum);
			score = (int*)malloc(sizeof(int) * studentNum);
			break;
		case 2:
			for (int i = 0; i < studentNum; i++) {
				printf("score[%d]=", i);
				scanf_s("%d", &score[i]);
			}
			break;
		case 3:
			for (int i = 0; i < studentNum; i++) {
				printf("score[%d]=%d\n", i, score[i]);
			}
			break;
		case 4:
			max = score[0];
			for (int i = 0; i < studentNum; i++) {
				sum += score[i];  //합계
				if (score[i] > max)
					max = score[i]; //최대값
			}
			avg = (float)sum / studentNum;
			printf("평균 점수: %.2f\n", avg);
			printf("최고 점수: %d\n", max);
			break;
		case 5:
			printf("프로그램 종료!");
			return;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요\n");
			break;
		}
	}
	free(score);

	return 0;
}