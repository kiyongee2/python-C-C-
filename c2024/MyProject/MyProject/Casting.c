//#include <stdio.h>
//
//int main()
//{
//	//char-1Byte, int-4Byte
//	//float-4Byte(������ �Ǽ���), double-8byte(������ �Ǽ���)
//	//���� - ���е�(precision)
//	char c1 = 'a', c2;
//	int n1 = 65, n2;
//	float f1 = 3.14f, f2;  
//	double d1 = 3.14, d2;
//
//	c2 = (char)n1;
//	n2 = (int)f1;
//	f2 = (float)d1;
//	d2 = (double)c1;
//
//	printf("%c\n", c2);
//	printf("%d\n", n2);
//	printf("%f\n", f2);
//	printf("%lf\n", d2);
//
//	//int�� �ִ밪(10�� 31��-1) - 21,4748,3647
//	//float��(10�� 38��) - ��ȿ���� 7��, 
//	//double��(10�� 64��-1) - ��ȿ���� 16��
//	//��ȿ������ ���� ���̿� ���� ����ȯ ����
//	int n = 2147483647;
//	float f = (float)n;
//	double d = (double)n;
//
//	printf("%d\n", n);
//	printf("%f\n", f);
//	printf("%f\n", d);
//
//	return 0;
//}