//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int findMax(int[], int);
//int findMax(int*, int);
//int main() {
//
//	//�ִ밪 ã��
//	int arr[] = { 21, 35, 71, 2, 97, 66 };
//
//	int max = findMax(arr, 6);
//	
//	printf("�ִ밪: %d\n", max);
//
//	return 0;
//}
//
////�Ű������� �����ͷ� ����
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
////�Ű������� �迭�� ����
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
