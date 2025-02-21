//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int findMaxIdx(int[], int);
//int findMaxIdx(int*, int);
//int main() {
//
//	//최대값 찾기
//	int arr[] = { 21, 35, 71, 2, 97, 66 };
//
//	int maxIdx = findMaxIdx(arr, 6);
//
//	printf("최대값의 위치(인덱스): %d\n", maxIdx);
//
//	return 0;
//}
//
////매개변수를 포인터로 전달
//int findMaxIdx(int* arr, int len)
//{
//	int maxIdx = 0;
//
//	for (int i = 1; i < len; i++)
//	{
//		if (*(arr + i) > *(arr + maxIdx))
//		{
//			maxIdx = i;
//		}
//	}
//
//	return maxIdx;
//}
//
////매개변수를 배열로 전달
//int findMaxIdx(int arr[], int len)
//{
//	int maxIdx = 0;
//
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] > arr[maxIdx])
//		{
//			maxIdx = i;
//		}
//	}
//
//	return maxIdx;
//}
