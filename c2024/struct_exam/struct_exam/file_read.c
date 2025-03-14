//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	FILE* fp;  //파일 포인터 객체 생성
//	int ch;
//
//	fp = fopen("out.txt", "r");
//
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1 반환
//	}
//
//	//fgetc(FILE*) 파일에서 한글자 읽어오는 함수
//	/*ch = fgetc(fp);
//	printf("%c", ch);*/
//
//	// 모든 글자 읽기
//	while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF)  // EOF(End Of File) = -1
//			break;
//		printf("%c", ch);
//	}
//
//	/*while ((ch = fgetc(fp)) != EOF)
//	{
//		printf("%c", ch);
//	}*/
//
//	fclose(fp);
//
//	return 0;
//}
