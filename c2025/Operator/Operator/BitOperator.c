//#include <stdio.h>
//
//int main()
//{
//	//비트 논리 연산
//	int num1 = 5;    //00000101
//	int num2 = 10;   //00001010
//	int result;
//
//	result = num1 & num2;
//	printf("result = %d\n", result);  //00000000
//
//	result = num1 | num2;
//	printf("result = %d\n", result);  //00001111
//	printf("======================\n");
//
//	//비트 이동 연산
//	int num3 = 2;   //00000010
//
//	printf("result = %d\n", num3 << 1);  //00000100
//	printf("result = %d\n", num3 << 2);  //00000100
//	printf("result = %d\n", num3);  //00000010
//	printf("result = %d\n", num3 >> 1);  //00000001
//
//	return 0;
//}