//#include <stdio.h>
//
//int main()
//{
//	//5의 배수가 아니면 합계 구하기
//	int sum, n;
//	for (sum = 0, n = 1; n <= 10; n++)
//	{
//		if (n % 5 != 0)  //5, 10 제외
//		{
//			sum += n;
//		}
//	}
//	printf("sum1 = %d\n", sum);
//
//	//continue문 사용
//	for (sum = 0, n = 1; n <= 10; n++)
//	{
//		if (n % 5 == 0)  //5, 10 제외
//		{
//			continue;
//		}
//		sum += n;
//	}
//	printf("sum2 = %d\n", sum);
//
//	return 0;
//}