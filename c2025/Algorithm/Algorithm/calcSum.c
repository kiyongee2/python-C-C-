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
//	//��ȯ - �������� ������
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
//	//ù°���� ��°������ ū ���
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
//	printf("%d���� %d������ ���� %d\n", x, y, sum); 
//}
