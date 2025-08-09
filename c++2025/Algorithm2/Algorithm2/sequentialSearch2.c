#include <stdio.h>

void sequentialSearch(int a[], int n, int x) {
	int i, found = 0;

	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			printf("%d은 a[%d]에 있습니다.\n", x, i);
			found = 1; //찾음
			break;  //더 이상 찾을 필요 없음!!
		}
	}

	if (!found) {
		printf("%d은 없습니다.\n");
	}
}

int main()
{
	//순차 탐색
	int arr[9] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int size;  //배열의 크기
	int x = 6; //찾을 값

	size = sizeof(arr) / sizeof(arr[0]);

	//순차 탐색 함수 호출
	sequentialSearch(arr, size, x);

	return 0;
}