//#include <stdio.h>
//#include <stdlib.h>  //malloc() 사용
//
//int main()
//{
//	char* pc;
//	int i;
//	pc = (char *)malloc(sizeof(char) * 26);
//
//	if (pc == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);
//	}
//
//	//*pc = 'A';  //*(pc + 0)
//	//*(pc + 1) = 'B';
//	//
//	//printf("%c\n", *pc);
//	//printf("%c\n", *(pc + 1));
//	
//	//저장
//	for (i = 0; i < 26; i++)
//	{
//		*(pc + i) = 'A' + i;
//	}
//
//	//출력
//	for (int i = 0; i < 26; i++)
//	{
//		printf("%2c", *(pc + i));
//	}
//
//	free(pc);  //메모리 해제 
//
//	return 0;
//}
