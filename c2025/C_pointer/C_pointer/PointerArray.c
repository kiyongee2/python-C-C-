//#include <stdio.h>
//
//int main()
//{
//	int a[4] = { 10, 20, 30, 40 };
//	int* pa;
//	int i;
//
//	//a는 배열의 시작 주소이다.
//	/*printf("%d %x %x\n", a[0], &a[0], a);  //a -> a + 0
//	printf("%d %x %x\n", a[1], &a[1], a + 1);
//	printf("%d %x %x\n", a[2], &a[2], a + 2);
//	printf("%d %x %x\n", a[3], &a[3], a + 3);*/
//
//	//배열 요소의 값과 주소 출력
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d %x %x\n", a[i], &a[i], a + i);
//	}
//	printf("=========================================\n");
//
//	pa = a;  //pa포인터에 a의 주소 저장
//	printf("포인터 pa의 값: %x\n", pa);
//	printf("포인터 *pa가 가리키는 메모리의 값: %d\n", *pa);
//
//	/*printf("%x %d\n", pa + 1, *(pa + 1));
//	printf("%x %d\n", pa + 2, *(pa + 2));
//	printf("%x %d\n", pa + 3, *(pa + 3));*/
//
//	//포인터 요소의 값과 주소 출력
//	for (i = 0; i < 4; i++)
//	{
//		printf("%x %d\n", pa + i, *(pa + i));
//	}
//
//	//배열과 포인터의 크기
//	printf("a의 크기: %dbyte, pa의 크기: %dbyte\n", sizeof(a), sizeof(pa));
//
//	return 0;
//}