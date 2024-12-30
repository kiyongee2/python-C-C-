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
//	// 값이 아닌 주소를 매개변수로 전달함
//	swap(&x, &y);  //swap() 호출 - swap의 x, y값은 유지됨
//	// 값이 교환됨
//	printf("x = %d, y = %d\n", x, y);
//
//	return 0;
//}
//
//void swap(int* x, int* y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}