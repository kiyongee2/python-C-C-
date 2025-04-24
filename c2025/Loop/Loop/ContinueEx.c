//#include <stdio.h>
//
//int main()
//{
//	//1~10까지의 자연수 중 5와 8을 제외하고 출력하기
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5 || i == 8)
//			continue;
//		printf("%d ", i);
//	}
//	printf("\n");
//
//	//1~10까지의 자연수 중 짝수의 합 구하기
//	int n, sum;
//	for (n = 1, sum = 0; n <= 10; n++)
//	{
//		if (n % 2 == 1)
//			continue;
//		sum += n;
//		printf("%d ", n);
//	}
//	printf("\n1부터 10까지의 짝수의 합: %d\n", sum);
//
//	//1~10까지의 자연수 중 4의 배수를 제외한 합계 
//	int i = 0, hap = 0;
//	while (1)
//	{
//		i++;
//		if (i > 10)
//			break;
//		if (i % 4 == 0)
//			continue;
//		hap += i;
//		printf("%d ", i);
//	}
//	printf("\n");
//	printf("I = %d\n", i);
//	printf("HAP = %d\n", hap);
//
//	return 0;
//}
