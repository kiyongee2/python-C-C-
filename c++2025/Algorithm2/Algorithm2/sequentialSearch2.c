#include <stdio.h>

void sequentialSearch(int a[], int n, int x) {
	int i, found = 0;

	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			printf("%d�� a[%d]�� �ֽ��ϴ�.\n", x, i);
			found = 1; //ã��
			break;  //�� �̻� ã�� �ʿ� ����!!
		}
	}

	if (!found) {
		printf("%d�� �����ϴ�.\n");
	}
}

int main()
{
	//���� Ž��
	int arr[9] = { 5, 9, 2, 4, 8, 6, 7, 1, 3 };
	int size;  //�迭�� ũ��
	int x = 6; //ã�� ��

	size = sizeof(arr) / sizeof(arr[0]);

	//���� Ž�� �Լ� ȣ��
	sequentialSearch(arr, size, x);

	return 0;
}