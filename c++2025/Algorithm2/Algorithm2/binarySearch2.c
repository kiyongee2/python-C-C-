#include <stdio.h>

//binarySearch(�迭, �迭�� ũ��, ã����)
void binarySearch(int a[], int n, int x) {
	int low, high, mid;
	int found = 0;

	low = 0;  //�迭�� ù �ε���
	high = n - 1; //�迭�� ������ �ε���

	while (low <= high) {
		mid = (low + high) / 2;  //�߰����� ��ġ
		//printf("%d\n", mid); //4 -> 6 -> 7

		if (a[mid] == x) {
			printf("%d�� a[%d]�� �ֽ��ϴ�.", x, mid);
			found = 1;
			break;
		}
		else if (a[mid] < x) {
			low = mid + 1;
		}
		else { //a[mid] > x
			high = mid - 1;
		}
	}

	if (!found)
		printf("%d�� �����ϴ�.", x);
}

int main()
{
	//�̺� Ž��
	
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size;   //�迭�� ũ��
	int x = 8;  //ã�� ��

	size = sizeof(arr) / sizeof(arr[0]);

	//�̺� Ž�� �Լ� ȣ�� 
	binarySearch(arr, size, x); 

	return 0;
}