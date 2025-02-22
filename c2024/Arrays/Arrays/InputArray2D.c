#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int score[5][2];
	int total[2] = { 0, 0 };
	int i;

	printf("각 학생의 영어와 수학점수 입력\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d번 학생의 영어 점수: ", i + 1);
		scanf("%d", &score[i][0]);
		printf("%d번 학생의 수학 점수: ", i + 1);
		scanf("%d", &score[i][1]);
	}
	
	for (i = 0; i < 5; i++) {
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	
	printf("영어 합계=%d\n", total[0]);
	printf("수학 합계=%d\n", total[1]);
	printf("영어 평균=%.1f\n", (float)total[0] / 5);
	printf("수학 평균=%.1f\n", (float)total[1] / 5);

	return 0;
}