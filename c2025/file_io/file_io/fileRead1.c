//#define _CRT_SECURE_NO_WARNINGS //fopen()
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //파일 포인터 변수 
//	int ch;  //읽은 문자 변수(코드값이므로 int형)
//	char str[256];
//
//	fp = fopen("c:/cfile/out.txt", "r"); //읽기 모드 - "r"
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;  //에러시 1 or -1
//	}
//
//	//문자 1개 읽기
//	/*ch = fgetc(fp);
//	printf("%c", ch);*/ //'H'
//	
//	//모든 글자 읽기
//	//방법 1
//	/*while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF) break;
//		//if ((ch = fgetc(fp)) == EOF) break;
//		printf("%c", ch);
//	}*/
//
//	//방법 2
//	while ((ch = fgetc(fp)) != EOF) {
//		printf("%c", ch);
//	}
//
//	fclose(fp);
//
//	/*while (1) {
//		if (fgets(str, sizeof(str), fp) == NULL) 
//			break;
//		printf("%s", str);
//	}*/
//
//	/*while (fgets(str, sizeof(str), fp) != NULL) {
//		printf("%s", str);
//	}*/
//
//	return 0;
//}