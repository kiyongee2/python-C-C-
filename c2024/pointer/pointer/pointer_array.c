//#include <stdio.h>
//
//int main() {
//
//	int a[4] = { 1, 2, 3, 4 };
//	int i;
//	int* b;
//
//	printf("a[0]의 값은 %d\n", a[0]);
//	//&a[0] - symbolic address, 물리적 주소값(1760886024) - physical address
//	printf("a[0]의 주소는 %d\n", &a[0]);  
//
//	for (i = 0; i < 4; i++)
//		printf("배열 a[%d]번째 방의 주소는 %d\n", i, &a[i]);
//	 
//	printf("배열의 이름 a는 %d\n", a);  //배열의 이름은 주소이다.(&a[0]과 같음)
//
//	// 포인터 주소값 연산
//	b = a;  //&a[0]을 저장하는 것과 동일함
//
//	/*printf("a[0]의 주소는 %d\n", &a[0]);
//	printf("포인터 b+0의 값은 %d\n", b);
//
//	b = b + 1;
//	printf("a[1]의 주소는 %d\n", &a[1]);
//	printf("포인터 b+1의 값은 %d\n", b);*/
//
//	for (i = 0; i < 4; i++) {
//		printf("a[%d]의 주소는 %d\n", i, &a[i]);
//		printf("포인터 b+%d의 값은 %d\n", i, b++);
//	}
//
//	//정수형 포인터 배열 연산
//	int x = 10;
//	int y = 20;
//	int z;
//
//	int* arr[3];
//
//	arr[0] = &x;
//	arr[1] = &y;
//	arr[2] = &z;
//
//	*arr[2] = *arr[0] + *arr[1];
//
//	printf("결과값 : %d\n", z);
//
//	return 0;
//}