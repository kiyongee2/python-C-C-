//#include <iostream>
//using namespace std;
//
//int findMin(int[], int);
//int findMinIdx(int[], int);
//int main()
//{
//	//������ �迭 ���� �� �ʱ�ȭ
//	int arr[] = { 3, 8, 1, 6, 2 };
//	//cout << size(arr) << endl;
//
//	//�ּҰ� ã��
//	int minVal = findMin(arr, size(arr));
//	cout << "�ּҰ�: " << minVal << endl;
//
//	//�ּҰ��� ��ġ ã��
//	int minIdxVal = findMinIdx(arr, size(arr));
//	cout << "�ּҰ��� ��ġ: " << minIdxVal << endl;
//
//	return 0;
//}
////�ּҰ� ã�� �Լ�
//int findMin(int a[], int size) {
//	int min = a[0];
//	for (int i = 0; i < size; i++) {
//		if (a[i] < min)
//			min = a[i];
//	}
//	return min;
//}
//
////�ּҰ� ��ġ ã�� �Լ�
//int findMinIdx(int a[], int size) {
//	int minIdx = 0;
//	for (int i = 0; i < size; i++) {
//		if (a[i] < a[minIdx])
//			minIdx = i;
//	}
//	return minIdx;
//}
