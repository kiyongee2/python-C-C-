//#include <stdio.h>
//#include <stdbool.h>
//
////�� ���� �ּҰ� ã�� �Լ�
//int min(int x, int y) {
//	return (x < y) ? x : y;
//}
//
////�ִ� ����� ã�� �Լ�
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
//	a=4, b=6 �� ���
//	i=4
//	4%4==0 && 6%4==0, false
//	i=3
//	4%3==0 && 6%3==0, false
//	i=2(�ִ� �����)
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
