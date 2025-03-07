//#include <stdio.h>
//#include <stdlib.h>  //malloc() 사용
//
//int main()
//{
//	int num1 = 10;
//	int* ptr1;
//	int* ptr2;
//
//	ptr1 = &num1;  //정적 할당(메모리 스택영역)
//	//동적 할당(힙 영역) 
//	ptr2 = (int*)malloc(sizeof(int) * 3);
//	if (ptr2 == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1); //강제 종료
//	}
//	ptr2[0] = 11;
//	ptr2[1] = 12;
//	printf("%d %x\n", *ptr1, ptr1);  
//	printf("%d %x\n", *ptr2, ptr2);  //*(ptr2 + 0)
//
//	free(ptr2);  //메모리 해제 
//
//	return 0;
//}
