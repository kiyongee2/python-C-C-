//#include <stdio.h>
//
//int main()
//{
//	//정수형 포인터(변수)
//	int n;
//	int* pn;
//
//	n = 3;
//	pn = &n;
//
//	printf("변수의 값: %d\n", n);
//	printf("변수의 메모리 번지: %x\n", &n);
//	printf("포인터 변수의 값: %x, \n", pn);
//	printf("포인터의 메모리 번지: %x\n", &pn);
//	printf("포인터가 가리키는 메모리의 값: %d\n", *pn);  //역참조
//
//	//자료형의 크기
//	printf("변수의 자료형의 크기: %dByte\n", sizeof(n));
//	printf("포인터의 자료형의 크기: %dByte\n", sizeof(pn));
//
//	return 0;
//}