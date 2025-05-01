//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char* pc;
//	int i;
//	pc = (char *)malloc(sizeof(char) * 26);
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
//		printf("%c %d\n", *(pc + i), *(pc + i));
//	}
//
//	free(pc);
//
//	return 0;
//}