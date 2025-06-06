//#include <stdio.h>
//
//void swap(int*, int*);
//void calcSum(int x, int y);
//int main()
//{
//	calcSum(1, 5);
//	calcSum(5, 1);
//	calcSum(1, 10);
//
//	return 0;
//}
//
//void swap(int* x, int* y)
//{
//	//교환 - 포인터의 역참조
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//void calcSum(int x, int y)
//{
//	int sum, i;
//
//	//첫째수가 둘째수보다 큰 경우
//	if (x > y)
//		swap(&x, &y);
//
//	printf("%d", x);
//	sum = x;
//	for (i = x + 1; i <= y; i++) {
//		printf("+%d", i);
//		sum += i;
//	}
//	printf("=%d\n", sum);  //1+2+3+4+5=15
//	printf("%d에서 %d까지의 합은 %d\n", x, y, sum); 
//}
