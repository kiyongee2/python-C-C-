//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void insertSorting(int a[], int n) {
//	int i, j, tmp;
//
//	for (i = 1; i < n; i++) {
//		tmp = a[i]; 
//		for (j = i; j > 0 && a[j - 1] > tmp; j--) {
//			a[j] = a[j - 1];
//		}
//		a[j] = tmp;
//	}
//}
//
//int main()
//{
//	int size;
//	int* arr; //배열(동적 할당)
//
//	puts("----- 삽입 정렬 -----");
//	printf("요소 개수 입력: ");
//	scanf("%d", &size);
//	arr = (int*)malloc(sizeof(int) * size);
//
//	//사용자 입력
//	for (int i = 0; i < size; i++) {
//		printf("arr[%d]: ", i);
//		scanf("%d", &arr[i]);
//	}
//
//	insertSorting(arr, size); //삽입 정렬 함수 호출
//	puts("오름차순으로 정렬했습니다.");
//	for (int i = 0; i < size; i++) {
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}