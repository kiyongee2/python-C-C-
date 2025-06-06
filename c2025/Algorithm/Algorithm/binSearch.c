//#include <stdio.h>
///*
//	이분 검색
//	- 먼저 정렬이 되어있어야 함
//*/
//
//int main()
//{
//	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int i; //인덱스
//	int x = 8;  //찾을 값
//	int found = 0;  //상태 변수(찾음, 못찾음)
//
//	printf("===== 순차 검색 =====\n");
//	for (i = 0; i < 9; i++) {
//		if (a[i] == x) {
//			printf("%d은 a[%d]에 있습니다.\n", x, i);
//			found = 1;  //찾음
//			break;
//		}
//	}
//	if (!found) { //못찾음
//		printf("%d는 없습니다.\n", x);
//	}
//
//	printf("===== 이분 검색 =====\n");
//	int low, high, mid;
//	int x;  //검색할 값
//	int found; //상태 플래그
//
//	int a[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	low = 0;  //첫 인덱스
//	high = 8; //마지막 인덱스
//	x = 8;  
//	found = 0;
//	
//	while (low <= high) {
//		mid = (low + high) / 2; //중간값
//		if (a[mid] == x) {
//			found = 1;
//			break;
//		}
//		else if (a[mid] < x) {
//			low = mid + 1;
//		}
//		else {
//			high = mid - 1;
//		}
//		/*
//			a[4] < 8, low=5, mid=6
//			a[6] < 8, low=7, mid=7
//			a[7] = 8  찾음
//		*/
//	}
//	if (a[mid] == x) {
//		printf("%d은 a[%d]에 있습니다.\n", x, mid);
//	}
//	else {
//		printf("%d는 없습니다.\n", x);
//	}
//
//	return 0;
//}
