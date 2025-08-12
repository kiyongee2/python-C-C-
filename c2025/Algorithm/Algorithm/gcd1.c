//#include <stdio.h>
//#include <stdbool.h>
//
////두 수중 최소값 찾기 함수
//int min(int x, int y) {
//	return (x < y) ? x : y;
//}
//
////최대 공약수 찾기 함수
//int gcd(int a, int b) {
//	int i;
//	i = min(a, b);  
//	//printf("%d\n", i);  
//
//	while (true) {
//		if (a % i == 0 && b % i == 0)
//			return i;
//		i--;
//	}
//}
//
///*
//	a=4, b=6 인 경우
//	i=4
//	4%4==0 && 6%4==0, false
//	i=3
//	4%3==0 && 6%3==0, false
//	i=2(최대 공약수)
//	4%2==0 && 6%2==0, true
//*/
//
//int main()
//{
//	printf("%d\n", gcd(1, 5)); //1
//	printf("%d\n", gcd(4, 6)); //2
//	printf("%d\n", gcd(24, 60)); //12
//	printf("%d\n", gcd(81, 27)); //27
//
//	return 0;
//}
