//#include <stdio.h>
//#include <math.h>
///*
//   거듭제곱 함수를 직접 만들어서 
//   라이브러리 함수와 비교하기 
//*/
//int MyPow(int x, int y)
//{
//	int num = 1;
//	for (int i = 0; i < y; i++)
//	{
//		num = num * x;
//	}
//	return num;
//
//	/*
//		x = 2, y = 3인 경우
//		     num = num * x
//		i=0,   2 = 1 * 2
//		i=1,   4 = 2 * 2
//		i=2,   8 = 4 * 2
//	*/
//}
//
//int main()
//{
//	int val1, val2;
//
//	val1 = MyPow(2, 3); //MyPow() 호출
//
//	val2 = pow(2, 3); //라이브러리 함수 호출
//
//	printf("%d %d\n", val1, val2);
//
//	return 0;
//}
