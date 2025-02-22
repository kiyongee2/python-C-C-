//#include <stdio.h>
//
//int main()
//{
//	//배열과 포인터
//	int a[4] = { 10, 20, 30, 40 };
//	int* pa;
//	int i;
//
//	printf("a[0]의 값은 %d\n", a[0]);
//	printf("a[0]의 메모리 번지는 %x\n", &a[0]);
//	printf("배열의 이름 a는 %x\n", a);
//
//	printf("a[1]의 값은 %d\n", a[1]);
//	printf("a[1]의 메모리 번지는 %x\n", &a[1]);
//	printf("배열의 이름 a + 1는 %x\n", a + 1);
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d %x %x\n", a[i], &a[i], a + i);
//	}
//
//	printf("==============================\n");
//
//	//포인터 주소값 연산
//	pa = a;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d %x %x\n", pa[i], &pa[i], pa + i);
//	}
//
//	printf("==============================\n");
//
//	printf("포인터 pa의 값은 %x\n", pa);
//	printf("포인터 *pa이 가리키는 메모리의 값은 %d\n", *pa);
//
//	printf("포인터 pa + 1의 값은 %x\n", pa + 1);
//	printf("포인터 *pa + 1이 가리키는 메모리의 값은 %d\n", *pa + 1);
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%x %d\n", pa + i, *(pa + i));
//	}
//
//	return 0;
//}