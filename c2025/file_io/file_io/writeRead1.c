//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//파일 쓰기
//	FILE* fp;
//	char a[] = "Cats and dogs";
//	char s[30];
//
//	fp = fopen("abc.txt", "w");
//	if (fp == NULL)
//		return;
//	fprintf(fp, "%s", a);
//	fclose(fp);
//
//	//파일 읽기
//	fp = fopen("abc.txt", "r");
//	if (fp == NULL)
//		return;
//	fgets(s, sizeof(s), fp);
//	printf("%s\n", s);
//	fclose(fp);
//
//	return 0;
//}