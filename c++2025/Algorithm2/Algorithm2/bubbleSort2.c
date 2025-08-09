//#include <stdio.h>
//
//void bubbleSorting(int a[], int n) {
//	int i, j, temp;
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n - 1; j++) {
//			if (a[j] > a[j + 1]) { 
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		} 
//	}
//}
//
//int main()
//{
//
//	int arr[5] = {41, 8, 36, 77, 15};
//	int size, i;
//
//	size = sizeof(arr) / sizeof(arr[0]);
//
//	//버블 정렬 함수 호출
//	bubbleSorting(arr, size);
//
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
