//#include <stdio.h>
//
//int main()
//{
//	//char-1Byte, int-4Byte
//	//float-4Byte(단정도 실수형), double-8byte(배정도 실수형)
//	//정도 - 정밀도(precision)
//	char c1 = 'a', c2;
//	int n1 = 65, n2;
//	float f1 = 3.14f, f2;  
//	double d1 = 3.14, d2;
//
//	c2 = (char)n1;
//	n2 = (int)f1;
//	f2 = (float)d1;
//	d2 = (double)c1;
//
//	printf("%c\n", c2);
//	printf("%d\n", n2);
//	printf("%f\n", f2);
//	printf("%lf\n", d2);
//
//	//int형 최대값(10의 31승-1) - 21,4748,3647
//	//float형(10의 38승) - 유효숫자 7개, 
//	//double형(10의 64승-1) - 유효숫자 16개
//	//유효숫자의 개수 차이에 따른 형변환 오류
//	int n = 2147483647;
//	float f = (float)n;
//	double d = (double)n;
//
//	printf("%d\n", n);
//	printf("%f\n", f);
//	printf("%f\n", d);
//
//	return 0;
//}