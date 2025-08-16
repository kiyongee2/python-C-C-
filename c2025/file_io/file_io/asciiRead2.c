//#define _CRT_SECURE_NO_WARNINGS //fopen()
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //파일 포인터 변수 
//	int ch;   //읽은 문자 변수(코드값이므로 int형)
//
//	fp = fopen("c:/cfile/ascii.txt", "r"); 
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1
//	}
//
//	while ((ch = fgetc(fp)) != EOF) {
//		printf("%c", ch);
//	}
//
//	fclose(fp);
//
//	return 0;
//}
