//#include <stdio.h>
//
//void func1(int, int);
//void func2(int* i, int* j);
//
//int main()
//{
//	int a = 3, b = 12;
//
//	printf("--- main()�� func1 ȣ�� ---\n");
//	func1(a, b);
//	printf("%d %d\n", a, b);
//
//	printf("--- main()�� func2 ȣ�� ---\n");
//	func2(&a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}
//
////�Ű������� �Ϲ� ������ �Լ�
//void func1(int i, int j)
//{
//	i *= 3;
//	j /= 3;
//
//	printf("%d %d\n", i, j);
//}
//
////�Ű������� �������� �Լ� 
//void func2(int* i, int* j)
//{
//	*i *= 3;
//	*j /= 3;
//
//	printf("%d %d\n", *i, *j);
//}
