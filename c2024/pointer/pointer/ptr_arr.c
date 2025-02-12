#include <stdio.h>

int main_PointerArray()
{
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;

	// arr�� ptr�� �Ȱ��� �ּҸ� ����Ű�� �ִ�.
	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d]�� ��: %d\n", i, arr[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("������ ptr[%d]�� ��: %d\n", i, ptr[i]);
	}

	//arr �迭�� �ּҿ� arr �迭�� ù��° �ּҰ� ����.
	printf("arr �迭�� �ּ�: %d\n", arr);
	printf("arr[0]�� �ּ�: %d\n", &arr[0]);

	ptr[0] = 50;
	ptr[1] = 100;
	ptr[2] = 150;

	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d]�� ��: %d\n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("������ ptr[%d]�� ��: %d\n", i, ptr[i]);
	}

	//arr �迭�� ���� arr �迭�� ù��° �ε��� ��
	printf("arr �迭�� �ּ�: %d\n", *arr); 
	printf("arr �迭�� �ּ�: %d\n", *(arr + 0)); 
	printf("arr[0]�� �ּ�: %d\n", *&arr[0]);  //arr[0]

	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d]�� ��: %d\n", i, *(arr + i));
	}

	for (int i = 0; i < 3; i++) {
		printf("������ ptr[%d]�� ��: %d\n", i, *(ptr + i));
	}

	return 0;
}