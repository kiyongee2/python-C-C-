//#include <stdio.h>
//
//int main() {
//
//	int a[4] = { 1, 2, 3, 4 };
//	int i;
//	int* b;
//
//	printf("a[0]�� ���� %d\n", a[0]);
//	//&a[0] - symbolic address, ������ �ּҰ�(1760886024) - physical address
//	printf("a[0]�� �ּҴ� %d\n", &a[0]);  
//
//	for (i = 0; i < 4; i++)
//		printf("�迭 a[%d]��° ���� �ּҴ� %d\n", i, &a[i]);
//	 
//	printf("�迭�� �̸� a�� %d\n", a);  //�迭�� �̸��� �ּ��̴�.(&a[0]�� ����)
//
//	// ������ �ּҰ� ����
//	b = a;  //&a[0]�� �����ϴ� �Ͱ� ������
//
//	/*printf("a[0]�� �ּҴ� %d\n", &a[0]);
//	printf("������ b+0�� ���� %d\n", b);
//
//	b = b + 1;
//	printf("a[1]�� �ּҴ� %d\n", &a[1]);
//	printf("������ b+1�� ���� %d\n", b);*/
//
//	for (i = 0; i < 4; i++) {
//		printf("a[%d]�� �ּҴ� %d\n", i, &a[i]);
//		printf("������ b+%d�� ���� %d\n", i, b++);
//	}
//
//	//������ ������ �迭 ����
//	int x = 10;
//	int y = 20;
//	int z;
//
//	int* arr[3];
//
//	arr[0] = &x;
//	arr[1] = &y;
//	arr[2] = &z;
//
//	*arr[2] = *arr[0] + *arr[1];
//
//	printf("����� : %d\n", z);
//
//	return 0;
//}