//#include <stdio.h>
//
//void func(int n)
//{
//	//방법 2
//	if (n <= 0) { //종료 조건
//		return;
//	}
//	else {
//		printf("Help Me!\n");
//		func(n - 1);
//	}
//
//	//방법 1
//	/*printf("Help Me!\n");
//	n--;
//	if (n <= 0)
//		return; //종료 조건
//	else
//		func(n);
//	*/
//
//	/*
//	  func(4), Help Me!
//	  func(3), Help Me!
//	  func(2), Help Me!
//	  func(1), Help Me!
//	  func(0), 반복 종료
//	*/
//}
//
//int main()
//{
//	int count = 4;
//
//	func(count);
//
//	return 0;
//}
