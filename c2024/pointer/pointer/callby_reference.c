//#include <stdio.h>
//
//// �����͸� ����ؾ� �ϴ� ����
//void swap(int* x, int* y);
//
//int main() {
//
//	int x, y;
//	x = 1, y = 2;
//
//	printf("(main �Լ� ��)x = %d, y = %d\n", x, y);
//
//	// ���� �ƴ� �ּҸ� �Ű������� ������
//	swap(&x, &y); 
//	// ���� ��ȯ��
//	printf("(main �Լ� ��)x = %d, y = %d\n", x, y);
//
//	return 0;
//}
//
//void swap(int* x, int* y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//
//	printf("(swap �Լ� ��)x = %d, y = %d\n", *x, *y);
//}