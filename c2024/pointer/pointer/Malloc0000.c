//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//int main() {
//
//	char* pc;
//	int i;
//	pc = (char *)malloc(sizeof(char) * 30);
//	if (pc == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);
//	}
//
//	for (i = 0; i < 26; i++)
//	{
//		*(pc + i) = 'a' + i;
//	}
//	*(pc + i) = '\0';  //맨 뒤에 NULL 추가
//
//	printf("%s", pc);
//
//	free(pc);
//
//	return 0;
//}