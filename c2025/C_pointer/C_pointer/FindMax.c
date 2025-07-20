//#include <stdio.h>
//
//int findMax(int[], int);
//int findMax2(int*, int);
//int main()
//{
//	int arr[] = { 21, 35, 71, 2, 97, 66 };
//	int max1, max2;
//
//	max1 = findMax(arr, 6);
//	max2 = findMax2(arr, 6);
//
//	printf("�ִ밪: %d %d\n", max1, max2);
//
//	return 0;
//}
//
//int findMax(int arr[], int len)
//{
//	int maxVal, i;
//	maxVal = arr[0];
//	for (i = 1; i < len; i++)
//	{
//		if (arr[i] > maxVal)
//			maxVal = arr[i];
//	}
//
//	return maxVal;
//}
//
//int findMax2(int* arr, int len)
//{
//	int maxVal, i;
//	maxVal = *arr;
//	//printf("%d\n", maxVal);
//
//	for (i = 0; i < len; i++)
//	{
//		if (*(arr + i) > maxVal)
//		{
//			maxVal = *(arr + i);
//		}
//	}
//	return maxVal;
//}
//
