#include <stdio.h>

int main_PointerArray()
{
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;

	// arr과 ptr이 똑같은 주소를 가리키고 있다.
	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("포인터 ptr[%d]의 값: %d\n", i, ptr[i]);
	}

	//arr 배열의 주소와 arr 배열의 첫번째 주소가 같음.
	printf("arr 배열의 주소: %d\n", arr);
	printf("arr[0]의 주소: %d\n", &arr[0]);

	ptr[0] = 50;
	ptr[1] = 100;
	ptr[2] = 150;

	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("포인터 ptr[%d]의 값: %d\n", i, ptr[i]);
	}

	//arr 배열의 값과 arr 배열의 첫번째 인덱스 값
	printf("arr 배열의 주소: %d\n", *arr); 
	printf("arr 배열의 주소: %d\n", *(arr + 0)); 
	printf("arr[0]의 주소: %d\n", *&arr[0]);  //arr[0]

	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값: %d\n", i, *(arr + i));
	}

	for (int i = 0; i < 3; i++) {
		printf("포인터 ptr[%d]의 값: %d\n", i, *(ptr + i));
	}

	return 0;
}