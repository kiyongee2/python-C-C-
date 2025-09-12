//#include <iostream>
//using namespace std;
//
//void bubbleSort(int a[], int n) {
//	int i, j, temp;
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n - 1 - i; j++) {
//			if (a[j] > a[j + 1]) {
//				//교환
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 41, 8, 36, 77, 15 };
//	int i;
//
//	//배열의 크기
//	//cout << size(arr) << endl; //5
//
//	bubbleSort(arr, size(arr)); //버블 정렬 함수 호출
//
//	//출력
//	for (i = 0; i < 5; i++) {
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}
//
