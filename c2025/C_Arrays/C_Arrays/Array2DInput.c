//#include <stdio.h>
//
//int main()
//{
//	int score[4][2];
//	int total[2] = { 0, 0 }; //영어, 수학 총점
//
//	printf("*** 영어, 수학의 총점과 평균 ***\n");
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d번 학생의 영어 점수: ", i + 1);
//		scanf_s("%d", &score[i][0]);
//		printf("%d번 학생의 수학 점수: ", i + 1);
//		scanf_s("%d", &score[i][1]);
//	}
//
//	//총점 계산
//	for (int i = 0; i < 4; i++)
//	{
//		total[0] += score[i][0];
//		total[1] += score[i][1];
//	}
//
//	printf("영어 평균: %d\n", total[0]);
//	printf("수학 평균: %d\n", total[1]);
//
//	/*printf("영어 평균: %.1f\n", total[0] / 4.0);
//	printf("수학 평균: %.1f\n", total[1] / 4.0);*/
//
//	printf("영어 평균: %.1f\n", (float)total[0] / 4);
//	printf("수학 평균: %.1f\n", (float)total[1] / 4);
//
//	return 0;
//}