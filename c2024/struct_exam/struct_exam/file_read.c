//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	char ch;
//	FILE* fp;
//
//	fp = fopen("out.txt", "r");
//
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 0;
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
//	//char buf[100]; // 한 줄씩 읽을 버퍼
//	//while (fgets(buf, sizeof(buf), fp) != NULL) { // 파일에서 한 줄씩 읽기
//	//	printf("%s", buf);
//	//}
//
//	// 대문자의 개수 세기
//	//int count = 0;
//	//while (1) {
//	//	ch = fgetc(fp);
//	//	if (ch >= 'A' && ch <= 'Z') {
//	//		++count;
//	//	}
//	//	if (ch == EOF)  // EOF(End Of File) = -1
//	//		break;
//	//	printf("%c", ch);
//	//}
//	//printf("대문자의 개수 : %d\n", count);
//
//	fclose(fp);
//	return 0;
//}