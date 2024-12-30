//#include <stdio.h>
//
//// 포인터를 사용해야 하는 이유
//void swap(int x, int y);
//
//int main() {
//
//	int x, y;
//	x = 1, y = 2;
//
//	swap(x, y);  //swap() 호출 - swap의 x, y는 소멸됨
//  //값이 교환되지 않음
//	printf("x = %d, y = %d\n", x, y);
//
//	return 0;
//}
//
//void swap(int x, int y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}