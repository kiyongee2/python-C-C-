//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //파일 포인터 변수 
//	int ch;   //아스키 코드를 저장할 변수
//
//	fopen_s(&fp, "ascii.txt", "r");
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1
//	}
//
//	//파일 읽기
//	while ((ch = fgetc(fp)) != EOF) {
//		printf("%c", ch);
//	}
//
//	fcolse(fp);
//
//	return 0;
//}
