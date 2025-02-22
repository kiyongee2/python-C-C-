//#include <stdio.h>
//
//int main()
//{
//	//문자형 포인터(변수)
//	char c;
//	char* pc;
//
//	c = 'A';
//	pc = &c;
//
//	printf("변수의 값: %c\n", c);
//	printf("변수의 메모리 번지: %x\n", &c);
//	printf("포인터의 값: %x\n", pc);
//	printf("포인터의 메모리 번지: %x\n", &pc);
//	printf("포인터가 가리키는 메모리 값: %c\n", *pc);
//
//	//변수와 포인터의 자료형의 크기
//	printf("변수의 자료형 크기: %dByte\n", sizeof(c));
//	printf("포인터의 자료형 크기: %dByte\n", sizeof(pc));
//
//	return 0;
//}