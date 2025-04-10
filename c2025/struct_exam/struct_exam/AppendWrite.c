//#define _CRT_SECURE_NO_WARNINGS  //fopen() 사용에 필요
//#include <stdio.h>
//
//int main() {
//
//	FILE* fp;
//	char msg[] = "행운을 빌어요~";
//	
//	//'a' -> 추가 모드
//	fp = fopen("out.txt", "a");
//
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//문자열 쓰기
//	fputs("Good Luck~\n", fp);
//
//	fprintf(fp, "%s\n", msg);
//
//	fclose(fp);
//
//	return 0;
//}
