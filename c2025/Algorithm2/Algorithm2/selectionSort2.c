//#include <stdio.h>
//
//void selectionSorting(int a[], int n) {
//	int i, j, temp;
//
//	//�񱳿� ��ȯ �ݺ�
//	for (i = 0; i < n - 1; i++) {
//		int minIdx = i;  //���� ��ġ(��)�� �ּҰ����� ����
//		for (j = i + 1; j < n; j++) {
//			if (a[j] < a[minIdx])
//				minIdx = j; //���� �ּҰ� ��ġ ����
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
//	int arr[5] = { 41, 36, 8, 77, 15 };
//	int i, j, temp, size;
//
//	size = sizeof(arr) / sizeof(arr[0]);
//
//	//���� ���� �Լ� ȣ��
//	selectionSorting(arr, size);
//	
//	//���� �� ���
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}