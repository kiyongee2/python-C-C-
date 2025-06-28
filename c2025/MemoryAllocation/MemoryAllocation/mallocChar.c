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
//	for (i = 0; i < 26; i++) {
//		pc[i] = 'A' + i;
//	}
//
//	for (i = 0; i < 26; i++) {
//		printf("%c ", pc[i]);
//	}
//
//	/*
//	*pc = 'A';
//	printf("%c\n", *pc);
//
//	*(pc + 1) = 'A' + 1;
//	printf("%c\n", *(pc + 1));
//
//	//저장
//	for (i = 0; i < 26; i++) {
//		*(pc + i) = 'A' + i;
//	}
//
//	for (i = 0; i < 26; i++) {
//		printf("%c ", *(pc + i));
//	}*/
//
//	free(pc);
//
//	return 0;
//}