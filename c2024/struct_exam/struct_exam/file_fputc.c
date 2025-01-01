//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	FILE* fp;
//	//스트림 생성
//	//모두 - 'r', 'w', 'a'
//	fp = fopen("ascii.txt", "w");
//
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 0;
//	}
//
//	printf("ASCII 테이블을 작성합니다.");
//	for (int i = 1; i < 128;i++) {
//		if (i % 10 == 0)
//			fputc('\n', fp);
//		fputc(i, fp);
//		fputc('\t', fp);
//	}
//
//	fclose(fp);
//	return 0;
//}