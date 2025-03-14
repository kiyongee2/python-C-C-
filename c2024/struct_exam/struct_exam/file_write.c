//#define _CRT_SECURE_NO_WARNINGS  //fopen() 사용에 필요
//#include <stdio.h>
//
//int main() {
//	//스트림 생성
//	FILE* fp;
//	
//	//모드 - 'r', 'w', 'a'
//	fp = fopen("out.txt", "w");
//
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 0;
//	}
//
//	//한 문자 쓰기
//	fputc('H', fp);
//	fputc('e', fp);
//	fputc('l', fp);
//	fputc('l', fp);
//	fputc('o', fp);
//
//	//문자열 쓰기
//	fputs("\nApple\n", fp);
//	fputs("\n사과\n", fp);  //한글 저장
//
//	fclose(fp);
//	return 0;
//}
