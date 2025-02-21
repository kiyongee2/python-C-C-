//#include <stdio.h>
//
//int main() {
//	//정수형 포인터 배열
//	int a[4] = { 10, 20, 30, 40 };
//	int* pa;
//	int i;
//
//	printf("a[0]의 값은 %d\n", a[0]);
//	printf("a[0]의 주소는 %x\n", &a[0]);  
//	//배열의 이름은 배열의 시작 주소이다.(&a[0]과 같음)
//	printf("배열의 이름 a는 %x\n", a);
//
//	printf("a[1]의 값은 %d\n", a[1]);
//	printf("a[1]의 주소는 %x\n", &a[1]);
//	printf("배열의 이름 a + 1은 %x\n", a + 1);
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d %x %x\n", a[i], &a[i], a + i);
//	}
//
//	// 포인터 주소값 연산
//	pa = a; 
//
//	printf("포인터 pa+0의 값은 %x\n", pa);
//	printf("포인터 *pa+0이 가리키는 메모리의 값은 %d\n", *pa);
//
//	printf("포인터 pa+1의 값은 %x\n", pa + 1);
//	printf("포인터 *pa+1이 가리키는 메모리의 값은 %d\n", *pa + 1);
//
//	for (i = 0; i < 4; i++) {
//		printf("%x %d\n", pa + i, *(pa + i));
//	}
//
//	//정수형 포인터 배열 연산
//	int x = 10, y = 20, z;
//	int total;
//
//	//1. 포인터 배열 선언후 초기화
//	/*int* arr[3];
//	arr[0] = &x;
//	arr[1] = &y;
//	arr[2] = &z;*/
//
//	//2. 포인터 배열 선언과 동시 초기화
//	int* arr[3] = { &x, &y, &z };  
//
//	*arr[2] = *arr[0] + *arr[1];  //역참조로 계산
//
//	printf("결과값 : %d\n", *arr[2]);
//	printf("결과값 : %d\n", z);
//
//	return 0;
//}