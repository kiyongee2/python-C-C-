//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	FILE* fp;
//
//	//fp = fopen("ascii.txt", "w");
//	fopen_s(&fp, "ascii.txt", "w"); //_CRT_SECURE_NO_WARNINGS 불필요.
//
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 0;
//	}
//
//	printf("=== ASCII 테이블을 작성합니다. ===");
//	//아스키 코드 - 31번까지 제어문자, 32-공백문자
//	for (int i = 32; i < 128;i++) {
//		if (i % 10 == 0)
//			fputc('\n', fp);
//		fputc(i, fp);
//		fputc('\t', fp);
//	}
//
//	fclose(fp);
//
//	return 0;
//}