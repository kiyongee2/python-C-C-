//#include <stdio.h>
//
//void CallByReference(int *p)
//{
//	printf("함수 내에서 값 변경전: %d\n", *p);
//	(*p)++;
//	//*p = *p + 1;
//	printf("함수 내에서 값 변경후: %d\n", *p);
//}
//
//int main()
//{
//	int num = 10;
//	int* pn = &num;
//
//	printf("main 함수 내에서 함수 호출전: %d\n", num);
//	CallByReference(pn);
//	printf("main 함수 내에서 함수 호출후: %d\n", num);
//	return 0;
//}
