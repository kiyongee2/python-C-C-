//#include <stdio.h>
//
//void CallByValue(int);
//void CallByReference(int*);
//int main()
//{
//	int num = 10;
//	int* pn = &num;
//
//	puts("\n========= ���� ���� ȣ�� =============\n");
//	printf("main �Լ� ������ ȣ����: %d\n", num);
//	CallByValue(num);
//	printf("main �Լ� ������ ȣ����: %d\n", num);
//
//	puts("\n========= ������ ���� ȣ�� =============\n");
//	printf("main �Լ� ������ ȣ����: %d\n", num);
//	CallByReference(pn);
//	printf("main �Լ� ������ ȣ����: %d\n", num);
//
//	return 0;
//}
//
//void CallByValue(int n) 
//{
//	printf("�Լ� ������ �� ������: %d\n", n);
//	n++;
//	printf("�Լ� ������ �� ������: %d\n", n);
//}
//
//void CallByReference(int *p)
//{
//	printf("�Լ� ������ �� ������: %d\n", *p);
//	//*p = *p + 1;
//	(*p)++;
//	printf("�Լ� ������ �� ������: %d\n", *p);
//}
