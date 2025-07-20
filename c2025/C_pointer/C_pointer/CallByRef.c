//#include <stdio.h>
//
//void callByVal(int);
//void callByRef(int* );
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
//void callByVal(int n)
//{
//	n++; //n = n + 1;
//	printf("%d\n", n);
//}
//
////참조 호출 함수 정의
//void callByRef(int* p)
//{
//	*p += 1; //*p = *p + 1;
//	printf("%d\n", *p);
//}
//
