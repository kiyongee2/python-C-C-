//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(int argc, char* argv[]) {
//	FILE* fin, * fout;
//
//	if (argc < 3) {
//		printf("다음 형식으로 입력하세요. file_copy out.txt out2.txt");
//		return -1;
//	}
//
//	// 원본 파일 읽기용으로 열기
//	fin = fopen(argv[1], "r");
//	if (fin == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 0;
//	}
//
//	// 복사 파일 쓰기용으로 열기
//	fout = fopen(argv[2], "w");
//	if (fin == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 0;
//	}
//
//	// 원본 파일을 끝까지 읽어서 복사 파일에 쓰기
//	while (!feof(fin)) {
//		fputc(fgetc(fin), fout);
//	}
//
//	fclose(fin);
//	fclose(fout);
//	return 0;
//}