//#define _CRT_SECURE_NO_WARNINGS //fopen() 처리
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; 
//	char msg[] = "행운을 빌어요~";
//
//	fp = fopen("c:/cfile/out.txt", "a");  //추가 모드 - "a"
//	if (fp == NULL) { 
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	//문자열 쓰기
//	fputs("Good Luck~\n", fp); 
//	fprintf(fp, "%s\n", msg); //서식 문자 사용
//
//	fclose(fp);
//
//	printf("파일 추가 쓰기 완료!");
//	return 0;
//}
