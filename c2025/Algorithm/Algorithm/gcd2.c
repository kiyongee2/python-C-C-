//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdbool.h>
//
////최대 공약수 찾기 함수
//int gcd(int a, int b) {
//	if (b == 0)
//		return a;
//	else
//		return gcd(b, a % b);
//}
//
///*
//   - 유클리드 알고리즘
//     a=60, b=24
//	 gcd(60, 24) = gcd(24, 60%24) = gcd(12, 24%12) = gcd(12, 0) = 12
//	 a=81, b=27
//	 gcd(81, 27) = gcd(27, 81%27) = gcd(27, 0) = 27
//	
//*/
//
//int main()
//{
//	/*printf("%d\n", gcd(1, 5)); //1
//	printf("%d\n", gcd(4, 6)); //2
//	printf("%d\n", gcd(60, 24)); //12
//	printf("%d\n", gcd(81, 27)); //27*/
//
//	int x, y;
//	puts("두 수의 최대공약수를 구합니다.");
//	printf("정수를 입력하세요: ");
//	scanf("%d", &x);
//	printf("정수를 입력하세요: ");
//	scanf("%d", &y);
//	printf("최대공약수는 %d입니다.\n", gcd(x, y));
//
//	return 0;
//}
