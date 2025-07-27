//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	//배열 - 동적 할당(메모리 - 힙 영역)
//	char* pc;
//	int i;
//
//	pc = (char*)malloc(sizeof(char) * 26);
//	if (pc == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1); //강제 종료
//	}
//	
//	//*pc = 'A';
//	*(pc + 0) = 'A';
//	printf("%c\n", *(pc + 0)); //A
//
//	*(pc + 1) = 'A' + 1;
//	printf("%c\n", *(pc + 1)); //B
//
//	*(pc + 2) = 'A' + 2;
//	printf("%c\n", *(pc + 2)); //C
// 
//
//	//저장
//	for (i = 0; i < 26; i++)
//	{
//		*(pc + i) = 'A' + i;
//	}
//
//	//출력
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c ", *(pc + i));
//	}
//
//	free(pc); //메모리 해제
//
//	return 0;
//}