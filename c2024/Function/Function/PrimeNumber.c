//#include <stdio.h>
//
//int isPrimeNumber(int);
//
//int main()
//{
//	//소수(1과 자신만으로 나누어 떨어지는 정수) 판별하기 
//	int n;
//
//	for (n = 2; n <= 30; n++)
//	{
//		if (isPrimeNumber(n))  //isPrimeNumber(n) == 1이면 소수
//		{
//			printf("%-3d", n);
//		}
//	}
//
//	return 0;
//}
//
//int isPrimeNumber(int n)
//{
//	int i, prime = 1;     //소수 선언(1이면 소수임)
//
//	for (i = 2; i <= n - 1; i++)
//	{
//		//2 ~ n-1 사이 정수로 나누어 떨어지면 소수가 아님
//		if (n % i == 0)
//		{
//			prime = 0;
//		}
//	}
//
//	return prime;
//}