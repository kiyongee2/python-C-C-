//#include <stdio.h>
//
//int main() 
//{
//	FILE* fin;   //읽기 파일 포인터 선언
//	FILE* fout;  //쓰기 파일 포인터 선언
//	int input = 0;  //문자 코드값
//
//	fopen_s(&fin, "ascii.txt", "r"); //원본에서 읽기
//	fopen_s(&fout, "ascii_copy.txt", "w"); //복사본에 쓰기
//
//	if (fin == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	if (fout == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	puts("=== 파일에 데이터 쓰기(저장) ===");
//	while (input != EOF) {
//		input = fgetc(fin);    //원본에서 읽어와서
//		fputc(input, fout);    //복사본에 쓰기
//	}
//
//	fclose(fin);
//	fclose(fout);
//
//	return 0;
//}