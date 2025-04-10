//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int main() {
//	// 정수형 배열 10개 선언 - 정적 할당
//	//int pn[10];
//
//	// 정수형 배열 10개 선언 - 동적 할당
//	int* pn = (int *)malloc(sizeof(int) * 10);
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		pn[i] = i * 2;
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d %p\n", pn[i], pn[i]);
//	}
//
//	free(pn);  //할당된 메모리 해제(반납)
//
//	return 0;
//}
