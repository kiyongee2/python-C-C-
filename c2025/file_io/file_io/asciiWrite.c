//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //파일 포인터 변수 
//	int i;
//
//	//fopen_s(파일포인터, 파일이름, 쓰기모드)
//	//상대 경로(프로젝트 폴더 안에 저장됨)
//	fopen_s(&fp, "ascii.txt", "w"); 
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
//
//	fclose(fp);
//
//	return 0;
//}