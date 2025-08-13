//#include <stdio.h>
//
//int search(int a[], int n, int x) {
//	int i;
//	for (i = 0; i < n; i++) {
//		if (a[i] == x)
//			return i;  //검색 성공
//	}
//	return -1; //검색 실패
//}
//
//int main()
//{
//	//순차 탐색
//	int arr[9] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
//	int size;  //배열의 크기
//	int x = 6; //찾을 값
//
//	size = sizeof(arr) / sizeof(arr[0]);
//
//	//순차 탐색 함수 호출
//	int idx = search(arr, size, x);
//	if (idx == -1)
//		puts("검색에 실패했습니다.");
//	else
//		printf("%d은 a[%d]에 있습니다.\n", x, idx);
//
//	return 0;
//}