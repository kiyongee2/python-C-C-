//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int findMax(int[], int);
//int findMax(int*, int);
//int main() {
//
//	//최대값 찾기
//	int arr[] = { 21, 35, 71, 2, 97, 66 };
//
//	int max = findMax(arr, 6);
//	
//	printf("최대값: %d\n", max);
//
//	return 0;
//}
//
////매개변수를 포인터로 전달
//int findMax(int* arr, int len)
//{
//	int maxVal = *(arr + 1);
//
//	//printf("%d\n", maxVal);
//
//	for (int i = 1; i < len; i++)
//	{
//		if (*(arr + i) > maxVal)
//		{
//			maxVal = *(arr + i);
//		}
//	}
//
//	return maxVal;
//}
//
////매개변수를 배열로 전달
//int findMax(int arr[], int len)
//{
//	int maxVal = arr[0];
//
//	//printf("%d\n", maxVal);
//
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] > maxVal)
//		{
//			maxVal = arr[i];
//		}
//	}
//
//	return maxVal;
//}
