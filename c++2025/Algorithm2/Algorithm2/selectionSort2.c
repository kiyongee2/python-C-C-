//#include <stdio.h>
//
//void selectionSorting(int a[], int n) {
//	int i, j, temp;
//
//	//비교와 교환 반복
//	for (i = 0; i < n - 1; i++) {
//		int minIdx = i;  //현재 위치(행)를 최소값으로 설정
//		for (j = i + 1; j < n; j++) {
//			if (a[j] < a[minIdx])
//				minIdx = j; //비교후 최소값 위치 변경
//		}
//
//		temp = a[i];
//		a[i] = a[minIdx];
//		a[minIdx] = temp;
//	}
//}
//
//int main()
//{
//	int arr[5] = { 41, 36, 8, 77, 15 };
//	int i, j, temp, size;
//
//	size = sizeof(arr) / sizeof(arr[0]);
//
//	//선택 정렬 함수 호출
//	selectionSorting(arr, size);
//	
//	//정렬 후 출력
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}