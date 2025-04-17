//#include <stdio.h>
//
//int main()
//{
//	//묵시적 형변환(자동 형변환)
//	int iNum = 20;
//	float fNum = iNum;  //큰 자료형 = 작은 자료형
//
//	printf("%d\n", iNum);
//	printf("%.1f\n", fNum);
//	printf("%.1f\n", iNum + fNum);
//
//	//명시적 형변환(강제 형변환)
//	double dNum = 2.54;
//	int iNum2 = (int)dNum;  //작은 자료형 = 큰 자료형
//	printf("%d\n", iNum2); //2
//
//	//연산
//	dNum = 1.2;
//	fNum = 0.9F;
//
//	iNum = (int)dNum + (int)fNum;  
//	printf("%d\n", iNum); //1
//
//	iNum = (int)(dNum + fNum);  
//	printf("%d\n", iNum); //2
//
//	return 0;
//}