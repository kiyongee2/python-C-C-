//#include <stdio.h>
//
//int search(int a[], int n, int x) {
//	int i;
//	for (i = 0; i < n; i++) {
//		if (a[i] == x)
//			return i;  //�˻� ����
//	}
//	return -1; //�˻� ����
//}
//
//int main()
//{
//	//���� Ž��
//	int arr[9] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
//	int size;  //�迭�� ũ��
//	int x = 6; //ã�� ��
//
//	size = sizeof(arr) / sizeof(arr[0]);
//
//	//���� Ž�� �Լ� ȣ��
//	int idx = search(arr, size, x);
//	if (idx == -1)
//		puts("�˻��� �����߽��ϴ�.");
//	else
//		printf("%d�� a[%d]�� �ֽ��ϴ�.\n", x, idx);
//
//	return 0;
//}