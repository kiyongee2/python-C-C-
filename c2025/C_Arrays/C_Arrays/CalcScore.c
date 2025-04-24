//#include <stdio.h>
//
//int main()
//{
//	int score[5] = { 85, 75, 90, 75, 80 };
//	int sum = 0;   //총점
//	double avg;    //평균
//	int min, max;  //최소, 최대
//
//	int size = sizeof(score) / sizeof(score[0]);
//	printf("배열의 크기: %d\n", size);
//
//	for (int i = 0; i < size; i++) {
//		sum += score[i];
//		printf("score[%d]=%d, sum=%d\n", i, score[i], sum);
//	}
//	avg = (double)sum / 4;
//	printf("합계: %d, 평균: %.1lf\n", sum, avg);
//
//	//최소값
//	min = score[0]; //첫번째 요소를 최소값으로 설정
//	for (int i = 0; i < 4; i++) {
//		if (score[i] < min)  //요소값이 최소값보다 작으면
//			min = score[i];  //요소값을 최소값에 저장
//	}
//
//	//최대값
//	max = score[0];
//	for (int i = 0; i < 4; i++) {
//		if (score[i] > max)
//			max = score[i];
//	}
//	printf("최소값: %d, 최대값:  %d\n", min, max);
//
//	return 0;
//}