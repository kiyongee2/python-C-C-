//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int findMaxIdx(int[], int);
//int findMaxIdx(int*, int);
//int main() {
//
//	//�ִ밪 ã��
//	int arr[] = { 21, 35, 71, 2, 97, 66 };
//
//	int maxIdx = findMaxIdx(arr, 6);
//
//	printf("�ִ밪�� ��ġ(�ε���): %d\n", maxIdx);
//
//	return 0;
//}
//
////�Ű������� �����ͷ� ����
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
////�Ű������� �迭�� ����
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
