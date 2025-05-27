//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int num1 = 10;
//	int* ptr1;
//	int* ptr2;
//
//	//정적 할당(메모리 스택영역)
//	ptr1 = &num1;  
//	//동적 할당(메모리 힙영역)
//	ptr2 = (int* )malloc(sizeof(int) * 3); 
//
//	ptr2[0] = 11;
//	ptr2[1] = 12;
//	ptr2[2] = 13;
//
//	//ptr1의 값과 주소
//	printf("%d %p\n", *ptr1, ptr1);
//	printf("\n");
//
//	//ptr2의 값과 주소
//	for (int i = 0; i < 3; i++) {
//		printf("%d %p\n", *(ptr2 + i), ptr2 + i);
//	}
//	free(ptr2);  //메모리 해제
//
//	return 0;
//}
