#include <stdio.h>

//binarySearch(배열, 배열의 크기, 찾을값)
void binarySearch(int a[], int n, int x) {
	int low, high, mid;
	int found = 0;

	low = 0;  //배열의 첫 인덱스
	high = n - 1; //배열의 마지막 인덱스

	while (low <= high) {
		mid = (low + high) / 2;  //중간값의 위치
		//printf("%d\n", mid); //4 -> 6 -> 7

		if (a[mid] == x) {
			printf("%d은 a[%d]에 있습니다.", x, mid);
			found = 1;
			break;
		}
		else if (a[mid] < x) {
			low = mid + 1;
		}
		else { //a[mid] > x
			high = mid - 1;
		}
	}

	if (!found)
		printf("%d은 없습니다.", x);
}

int main()
{
	//이분 탐색
	
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size;   //배열의 크기
	int x = 8;  //찾을 값

	size = sizeof(arr) / sizeof(arr[0]);

	//이분 탐색 함수 호출 
	binarySearch(arr, size, x); 

	return 0;
}