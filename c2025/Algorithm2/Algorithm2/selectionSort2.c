//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
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
//	int size;  //�迭�� ũ��
//	int* arr;  //�迭(���� �Ҵ�)
//	int i;
//
//	puts("===== ���� ���� =====");
//	printf("����� ���� �Է�: ");
//	scanf("%d", &size);
//	arr = (int*)malloc(sizeof(int) * size);
//
//	for (i = 0; i < size; i++) {
//		printf("arr[%d]: ", i);
//		scanf("%d", &arr[i]);
//	}
//
//	selectionSorting(arr, size); //���� ���� �Լ� ȣ��
//
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}