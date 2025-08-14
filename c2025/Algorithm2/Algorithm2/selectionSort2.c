//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
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
//	int size;  //배열의 크기
//	int* arr;  //배열(동적 할당)
//	int i;
//
//	puts("===== 선택 정렬 =====");
//	printf("요소의 개수 입력: ");
//	scanf("%d", &size);
//	arr = (int*)malloc(sizeof(int) * size);
//
//	for (i = 0; i < size; i++) {
//		printf("arr[%d]: ", i);
//		scanf("%d", &arr[i]);
//	}
//
//	selectionSorting(arr, size); //선택 정렬 함수 호출
//
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}