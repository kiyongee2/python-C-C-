//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void insertSorting(int a[], int n) {
//	int i, j, tmp;
//
//	for (i = 1; i < n; i++) {
//		tmp = a[i]; 
//		for (j = i; j > 0 && a[j - 1] > tmp; j--) {
//			a[j] = a[j - 1];
//		}
//		a[j] = tmp;
//	}
//}
//
//int main()
//{
//	int size;
//	int* arr; //�迭(���� �Ҵ�)
//
//	puts("----- ���� ���� -----");
//	printf("��� ���� �Է�: ");
//	scanf("%d", &size);
//	arr = (int*)malloc(sizeof(int) * size);
//
//	//����� �Է�
//	for (int i = 0; i < size; i++) {
//		printf("arr[%d]: ", i);
//		scanf("%d", &arr[i]);
//	}
//
//	insertSorting(arr, size); //���� ���� �Լ� ȣ��
//	puts("������������ �����߽��ϴ�.");
//	for (int i = 0; i < size; i++) {
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//	free(arr);
//
//	return 0;
//}