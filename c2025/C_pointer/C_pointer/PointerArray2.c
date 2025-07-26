//#include <stdio.h>
//
//int main()
//{
//	int x = 10, y = 20, z;
//	int* arr[3]; //정수형 포인터 배열 선언
//
//	// 배열에 주소 저장 
//	arr[0] = &x;
//	arr[1] = &y;
//	arr[2] = &z;
//
//	//배열 선언과 동시에 초기화
//	//int* arr[3] = { &x, &y, &z };
//
//	*arr[2] = *arr[0] + *arr[1];
//
//	printf("arr[2]의 값: %d\n", *arr[2]); //30
//	printf("z의 값: %d\n", z); //30
//
//	//배열의 포인터 연산2
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* b;
//	int i;
//
//	printf("기존 배열 a의 값 출력\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//
//	printf("\n배열 a의 각 요소에 10을 더하여 변경\n");
//	b = a;
//
//	for (i = 0; i < 5; i++) {
//		*(b + i) += 10;
//	}
//
//	printf("\n변경된 배열 a의 값 출력 1\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//
//	printf("\n변경된 배열 a의 값 출력 2\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", *(b + i));
//
//	return 0;
//}