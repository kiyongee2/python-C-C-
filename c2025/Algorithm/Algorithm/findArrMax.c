//#include <stdio.h>
//
//int findMax(int a[], int len) { //�ִ밪
//	int i, maxVal;
//	maxVal = a[0];
//	for (i = 0; i < len; i++) {
//		if (a[i] > maxVal)
//			maxVal = a[i];
//	}
//	return maxVal;
//}
//
//int findMaxIdx(int a[], int len) { //�ִ밪�� ��ġ
//	int i, maxIdx;
//	maxIdx = 0;
//	for (i = 0; i < len; i++) {
//		if (a[i] > a[maxIdx])
//			maxIdx = i;
//	}
//	return maxIdx;
//}
//
//int main()
//{
//	int arr[] = {53, 11, 65, 36, 29}; 
//	int max, maxIndex;
//
//	max = findMax(arr, 5);
//	maxIndex = findMaxIdx(arr, 5);
//
//	printf("�ִ밪: %d, �ִ밪�� ��ġ: %d\n", max, maxIndex);
//
//	return 0;
//}