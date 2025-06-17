//#include <iostream>
//using namespace std;
//
//int findMin(int[], int);
//int findMinIdx(int[], int);
//int main()
//{
//	//정수형 배열 선언 및 초기화
//	int arr[] = { 3, 8, 1, 6, 2 };
//	//cout << size(arr) << endl;
//
//	//최소값 찾기
//	int minVal = findMin(arr, size(arr));
//	cout << "최소값: " << minVal << endl;
//
//	//최소값의 위치 찾기
//	int minIdxVal = findMinIdx(arr, size(arr));
//	cout << "최소값의 위치: " << minIdxVal << endl;
//
//	return 0;
//}
////최소값 찾기 함수
//int findMin(int a[], int size) {
//	int min = a[0];
//	for (int i = 0; i < size; i++) {
//		if (a[i] < min)
//			min = a[i];
//	}
//	return min;
//}
//
////최소값 위치 찾기 함수
//int findMinIdx(int a[], int size) {
//	int minIdx = 0;
//	for (int i = 0; i < size; i++) {
//		if (a[i] < a[minIdx])
//			minIdx = i;
//	}
//	return minIdx;
//}
