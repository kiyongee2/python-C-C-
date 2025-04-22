//#include <stdio.h>
//
//int main()
//{
//	/*
//		어떤 수가 10보다 큰지 작은지 구분하고,
//		10보다 큰 경우 짝수와 홀수를 구분하고,
//		10보다 작은 경우 짝수와 홀수를 구분하는 프로그램
//	*/
//
//	int num;
//	printf("수를 입력하세요: ");
//	scanf_s("%d", &num);
//
//	/*if (num > 10) {
//		if (num % 2 == 0) {
//			printf("%d는(은) 10보다 큰 짝수입니다.\n", num);
//		}
//		else {
//			printf("%d는(은) 10보다 큰 홀수입니다.\n", num);
//		}
//	}
//	else {
//		if (num % 2 == 0) {
//			printf("%d는(은) 10보다 작은 짝수입니다.\n", num);
//		}
//		else {
//			printf("%d는(은) 10보다 작은 홀수입니다.\n", num);
//		}
//	}*/
//
//	//if ~ else if ~ else
//	if ((num > 10) && (num % 2 == 0))
//	{
//		printf("%d는(은) 10보다 큰 짝수입니다.\n", num);
//	}
//	else if ((num > 10) && (num % 2 != 0))
//	{
//		printf("%d는(은) 10보다 큰 홀수입니다.\n", num);
//	}
//	else if ((num < 10) && (num % 2 == 0))
//	{
//		printf("%d는(은) 10보다 작은 짝수입니다.\n", num);
//	}
//	else {
//		printf("%d는(은) 10보다 작은 홀수입니다.\n", num);
//	}
//	
//	return 0;
//}
