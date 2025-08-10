//#include <stdio.h>
//
//int main()
//{
//	//이분 탐색 
//	int low, high, mid;
//	int x, found; 
//
//	//정렬된 배열
//	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	low = 0;  //첫 인덱스
//	high = 8; //마지막 인덱스
//	x = 8;    //찾을 값
//	found = 0; //상태(찾음/못찾음)
//
//	while (low <= high) {
//		mid = (low + high) / 2;  //중간값의 위치
//		//printf("%d\n", mid); //4 -> 6 -> 7
//
//		if (arr[mid] == x) {
//			printf("%d은 a[%d]에 있습니다.", x, mid);
//			found = 1; //찾음
//			break;
//		}
//		else if (arr[mid] < x) {
//			low = mid + 1;
//		}
//		else { //a[mid] > x
//			high = mid - 1;
//		}
//		/*
//		    mid=4, 5<8, low=5, high=8, mid=6(13/2)
//			mid=6, 7<8, low=7, high=8, mid=7(15/2)
//			mid=7, 8=8, 찾음
//		*/
//	}
//
//	if (!found) //찾지 못함
//		printf("%d은 없습니다.", x);
//
//	return 0;
//}
//
