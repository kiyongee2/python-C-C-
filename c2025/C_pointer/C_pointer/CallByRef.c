//#include <stdio.h>
//
//int callByVal(int);
//int callByRef(int* );
//
//int main()
//{
//	int num = 10;
//
//	puts("=== 값에 의한 호출 ===");
//	callByVal(num);
//	printf("%d\n", num);
//
//	puts("=== 참조에 의한 호출 ===");
//	callByRef(&num);
//	printf("%d\n", num);
//
//	return 0;
//}
//
////값 호출 함수 정의
//int callByVal(int n)
//{
//	n++; //n = n + 1;
//	return n;
//}
//
////참조 호출 함수 정의
//int callByRef(int* p)
//{
//	*p = *p + 1;
//	return *p;
//}
//
