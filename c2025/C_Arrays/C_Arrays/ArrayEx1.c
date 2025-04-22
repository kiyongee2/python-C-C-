//#include <stdio.h>
//
//int main()
//{
//	int arr[4] = { 1, 2, 3, 4 };
//
//	/*arr[0] = 1;
//	arr[1] = 2;
//	arr[2] = 3;
//	arr[3] = 4;*/
//
//	printf("%x %x %x\n", &arr[0], &arr[1], &arr[2]);
//	printf("%x %x %x\n", arr, arr+1, arr+2);
//
//	//수정
//	arr[1] = 10;
//
//	//삭제
//	arr[1] = 0;
//
//	for (int i = 1; i < 3; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//
//	//출력
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%-3d", arr[i]);
//	}
//
//	int sum = 0;
//	double avg;
//	int min, max;
//	for (int i = 0; i < 4; i++) {
//		sum += arr[i];
//		printf("arr[%d]=%d, sum=%d\n", i, arr[i], sum);
//	}
//	avg = (double)sum / 4;
//	printf("합계: %d, 평균: %.1lf\n", sum, avg);
//
//	//최소값
//	min = arr[0];
//	for (int i = 0; i < 4; i++) {
//		if (arr[i] < min)
//			min = arr[i];
//	}
//
//	//최대값
//	max = arr[0];
//	for (int i = 0; i < 4; i++) {
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("최소값: %d, 최대값:  %d\n", min, max);
//
//	return 0;
//}