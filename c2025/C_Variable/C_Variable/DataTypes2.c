//#include <stdio.h>
//
//int main()
//{
//	/*
//	  'A' - 아스키 코드값(65), char형 1Byte = 8bit
//	  int : -128 ~ 127
//	  unsigned int : 0 ~ 255
//	  unsigned 형은 음수를 저장할 수 없고 양수 범위가 2배로 늘어남
//	*/
//	printf("===== char 자료형 =====\n");
//	char ch = 'A';
//	printf("%c %d\n", ch, ch);
//
//	char value1 = -128;
//	printf("%d\n", value1);
//
//	char value2 = 128;  //범위를 초과하여 overflow 발생
//	printf("%d\n", value2);
//
//	unsigned char value3 = -128; 
//	printf("%d\n", value3);
//
//	/*
//		int형 4B = 32bit
//		-21억 ~ 21억 
//		더 큰 정수
//		long 4B(windows), 8B(macOS)
//		long long 8B
//	*/
//	printf("===== int 자료형 =====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//
//	int iNum2 = 2200000000; //범위를 초과하여 overflow 발생
//	printf("%d\n", iNum2);
//
//	printf("===== long 자료형 =====\n");
//	long lNum = 2200000000L; //overflow 발생
//	printf("%ld\n", lNum);
//
//	long long llNum = 2200000000L; 
//	printf("%lld\n", llNum);
//
//	/*
//		float - 4B, 소수 6자리 표현
//		double - 8B, 소수 15자리 표현
//		정밀도를 표현
//	*/
//	printf("=== float와 double 자료형 ===\n");
//	float fNum = 0.1234567F;  //오류
//	printf("%.6f\n", fNum);
//
//	double dNum = 0.1234567890123456;  //오류
//	printf("%.15lf\n", dNum);
//
//	return 0;
//}