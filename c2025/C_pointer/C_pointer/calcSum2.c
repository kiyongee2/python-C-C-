//#include <stdio.h>
//
//void swap(int*, int*);
//void calcSum(int, int);
//
//int main()
//{
//	calcSum(1, 5);
//	calcSum(5, 1);
//	calcSum(4, 4);
//
//	return 0;
//}
//
//void swap(int* x, int* y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//void calcSum(int min, int max)
//{
//	int i, sum;
//
//	//ù��° ���ڰ� �ι�° ���ں��� ũ��
//	if (min > max)
//		swap(&min, &max);
//
//	printf("%d", min); //1
//	sum = min;
//	for (i = min + 1; i <= max; i++) {
//		printf("+%d", i); //1+2+3+4+5
//		sum += i;
//	}
//	printf("=%d\n", sum);
//	printf("%d���� %d������ ���� %d\n", min, max, sum);
//}
//
//
