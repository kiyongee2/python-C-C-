//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	//학생 3명의 국어, 수학 점수
//	int a[3][2] = {
//		{75, 80},
//		{85, 95},
//		{90, 100}
//	};
//
//	printf("a[0][0]=%d\n", a[0][0]);
//	printf("a[0][1]=%d\n", a[0][1]);
//	printf("a[1][0]=%d\n", a[1][0]);
//	printf("a[1][1]=%d\n", a[1][1]);
//	printf("==============\n");
//
//	/*for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 2; j++) {
//			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
//		}
//	}*/
//
//	//합계와 평균
//	int total[2] = { 0, 0 };
//	float avg[2] = { 0.0, 0.0 };
//
//	for (int i = 0; i < 3; i++) {
//		total[0] += a[i][0];
//		total[1] += a[i][1];
//	}
//
//	printf("국어합계=%d\n", total[0]);
//	printf("수학합계=%d\n", total[1]);
//	printf("국어평균=%.1f\n", (float)total[0] / 3);
//	printf("수학평균=%.1f\n", (float)total[1] / 3);
//
//	//최고 점수
//	int maxKor = a[0][0];
//	int maxMath = a[0][1];
//
//	for (int i = 0; i < 5; i++) {
//		if (a[i][0] > a[0][0])
//			maxKor = a[i][0];
//		if (a[i][1] > a[0][1])
//			maxMath = a[i][1];
//	}
//	printf("국어 최고점수=%d\n", maxKor);
//	printf("수학 최고점수=%d\n", maxMath);
//
//	return 0;
//}