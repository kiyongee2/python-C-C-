//#include <stdio.h>
//
//// �迭�� �� ���� ��ȯ
//void swap(int* x, int* y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
////�迭(a)�� �ǹ�(pivot)�� �������� ����
//void partition(int a[], int n) {
//	int pl = 0;     //���� Ŀ��
//	int pr = n - 1; //������ Ŀ��
//	int pivot = a[n / 2]; //�ǹ��� ��� ���
//	int temp;  //��ȯ�� ���� �ӽ� ����
//
//	while (pl <= pr){
//		while (a[pl] < pivot) 
//			pl++;  //�ǹ����� ū �� ���� ������ �̵�
//		while (a[pr] > pivot)
//			pr--;  //�ǹ����� ���� �� ���� ������ �̵�
//		if (pl <= pr) {
//			//��ȯ
//			swap(&a[pl], &a[pr]);
//			pl++;
//			pr--;
//		}
//	}
//	printf("�ǹ��� ���� %d�Դϴ�.\n", pivot);
//	printf("�ǹ� ������ �׷�\n");
//	for (int i = 0; i <= pl - 1; i++)
//		printf("%d ", a[i]); //a[0]~a[pl-1]
//	putchar('\n');
//	printf("�ǹ� �̻��� �׷�\n");
//	for (int i = pr + 1; i < n; i++)
//		printf("%d ", a[i]); //a[pr+1]~a[n-1]
//	putchar('\n');
//}
//
//int main()
//{
//	int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	partition(arr, size);
//
//	return 0;
//}