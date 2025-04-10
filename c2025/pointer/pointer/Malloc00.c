//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int main() {
//
//	int num1 = 10;
//	int* ptr1;  //스택 영역에 위치함
//	int* ptr2;  //힙 영역에 위치함
//
//	ptr1 = &num1;
//
//	//정수형 배열 3바이트 선언
//	ptr2 = (int*)malloc(sizeof(int) * 3); 
//	if (ptr2 == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);  //강제 종료
//	}
//
//	printf("%p\n", ptr1);
//	printf("%p\n", ptr2);
//
//	free(ptr2);
//
//	return 0;
//}
