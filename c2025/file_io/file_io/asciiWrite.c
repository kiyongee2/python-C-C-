//#define _CRT_SECURE_NO_WARNINGS //fopen()
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //파일 포인터 변수 
//	int i;
//
//	fopen_s(&fp, "ascii.txt", "w"); 
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1
//	}
//
//	for (i = 32; i < 128; i++) {
//		if (i % 10 == 0)
//			fputc('\n', fp); //줄바꿈
//		fputc(i, fp);
//		fputc('\t', fp);
//	}
//
//	printf("파일 쓰기 완료!");
//
//	return 0;
//}