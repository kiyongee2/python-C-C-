//#include <stdio.h>
//
//void func1(int, int);
//void func2(int* i, int* j);
//
//int main()
//{
//	int a = 3, b = 12;
//
//	printf("--- main()내 func1 호출 ---\n");
//	func1(a, b);
//	printf("%d %d\n", a, b);
//
//	printf("--- main()내 func2 호출 ---\n");
//	func2(&a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}
//
////매개변수가 일반 변수인 함수
//void func1(int i, int j)
//{
//	i *= 3;
//	j /= 3;
//
//	printf("%d %d\n", i, j);
//}
//
////매개변수가 포인터인 함수 
//void func2(int* i, int* j)
//{
//	*i *= 3;
//	*j /= 3;
//
//	printf("%d %d\n", *i, *j);
//}
