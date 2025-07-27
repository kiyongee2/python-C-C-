//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int len;
//	int* p;
//	int i, sum = 0;
//	float avg;
//	
//	printf("*** 점수의 평균 계산 ***\n");
//	printf("입력할 정수의 개수: ");
//	scanf("%d", &len);
//	
//	p = (int*)malloc(sizeof(int) * len); //동적 할당
//
//	//점수 입력
//	for (i = 0; i < len; i++) {
//		printf("%d번째 점수: ", i + 1);
//		scanf("%d", &p[i]);
//	}
//
//	//합계 계산
//	for (i = 0; i < len; i++) {
//		sum += p[i];
//	}
//	//printf("%d\n", sum); //합계
//
//	//평균 계산
//	avg = (float)sum / len;
//	printf("평균 점수: %.1f\n", avg);
//
//	free(p);  //메모리 반납
//
//	return 0;
//}
