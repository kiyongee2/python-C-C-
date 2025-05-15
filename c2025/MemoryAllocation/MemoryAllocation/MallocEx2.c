//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	//배열 - 동적 할당(메모리 - 힙 영역)
//	int* ip = (int*)malloc(sizeof(int) * 4);
//	int i;
//
//	if (ip == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1); //강제 종료
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		ip[i] = (i + 1) * 10;
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", ip[i]);
//	}
//	printf("\n");
//
//	//역참조로 출력
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(ip + i));
//	}
//	printf("\n");
//
//	//값 변경
//	*ip = 50;
//	*(ip + 1) = 60;
//	*(ip + 2) = 70;
//	*(ip + 3) = 80;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d %d\n", ip[i], *(ip + i));
//	}
//	
//	free(ip); //메모리 해제
//
//	return 0;
//}