//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //파일 포인터 변수 
//	int i;
//
//	fp = fopen("c:/cfile/ascii.txt", "w"); 
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1
//	}
//
//	printf("========== ASCII 테이블 ==========\n");
//	for (i = 32; i < 128; i++) { //32번 공백문자
//		if (i % 10 == 0)
//			fputc('\n', fp); //줄바꿈
//		fputc(i, fp);
//		fputc('\t', fp);
//	}
//	fclose(fp);
//
//	//파일 읽기
//	/*int ch;
//	FILE* file;
//
//	file = fopen("c:/cfile/ascii.txt", "r");
//	if (file == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1
//	}
//
//	//파일 읽기
//	/*while ((ch = fgetc(file)) != EOF) {
//		printf("%c", ch);
//	}*/
//	//fcolse(file);
//
//	return 0;
//}