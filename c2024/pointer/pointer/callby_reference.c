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
//	// ���� �ƴ� �ּҸ� �Ű������� ������
//	swap(&x, &y);  //swap() ȣ�� - swap�� x, y���� ������
//	// ���� ��ȯ��
//	printf("x = %d, y = %d\n", x, y);
//
//	return 0;
//}
//
//void swap(int* x, int* y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}