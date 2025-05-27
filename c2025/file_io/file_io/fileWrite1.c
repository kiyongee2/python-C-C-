//#define _CRT_SECURE_NO_WARNINGS //fopen() 처리
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //파일 구조체 포인터 변수 선언
//
//	fp = fopen("c:/cfile/out.txt", "w");  //절대 경로
//
//	if (fp == NULL) { 
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	//문자 1개 쓰기
//	fputc('H', fp);
//	fputc('e', fp);
//	fputc('l', fp);
//	fputc('l', fp);
//	fputc('o', fp);
//
//	//문자열 쓰기
//	fputs("\nApple\n", fp);  //영어
//	fputs("\n좋아요\n", fp); //한글
//
//	fclose(fp); //파일 닫기
//
//	printf("파일 쓰기 완료!");
//	return 0;
//}
