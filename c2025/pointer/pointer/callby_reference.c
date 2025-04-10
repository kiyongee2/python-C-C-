//#include <stdio.h>
//
//// 포인터를 사용해야 하는 이유
//void swap(int* x, int* y);
//
//int main() {
//
//	int x, y;
//	x = 1, y = 2;
//
//	printf("(main 함수 내)x = %d, y = %d\n", x, y);
//
//	// 값이 아닌 주소를 매개변수로 전달함
//	swap(&x, &y); 
//	// 값이 교환됨
//	printf("(main 함수 내)x = %d, y = %d\n", x, y);
//
//	return 0;
//}
//
//void swap(int* x, int* y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//
//	printf("(swap 함수 내)x = %d, y = %d\n", *x, *y);
//}