//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//   
//	int arr[] = { 1, 2, 3, 4 };
//
//	//배열의 이름은 배열의 시작 주소
//	printf("%x %x %x\n", &arr[0], &arr[1], &arr[2]);
//	printf("%x %x %x\n", arr, arr+1, arr+2);
//
//	//요소 접근(조회)
//	printf("%d\n", arr[0]);
//
//	//요소 수정
//	arr[1] = 5;
//
//	//요소 전체 조회
//	for (int i = 0; i < 4; i++) {
//		printf("%d\n", arr[i]);
//	}
//
//	//요소의 합계
//	int sum = 0;
//	for (int i = 0; i < 4; i++) {
//		sum += arr[i];
//	}
//	printf("합계: %d\n", sum);
//
//	//요소의 평균
//	double avg = 0.0;
//	avg = (double)sum / 4;  //실수형 형변환
//	printf("평균: %.1lf\n", avg);
//
//	//요소의 최대값
//	int max = arr[0];
//	for (int i = 1; i < 4; i++) {
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("최대값: %d\n", max);
//
//	//최대값의 위치
//	int maxIdx = 0;
//	for (int i = 1; i < 4; i++) {
//		if (arr[i] > arr[maxIdx])
//			maxIdx = i;
//	}
//	printf("최대값의 위치: %d\n", maxIdx);
// 
//   return 0;
//}