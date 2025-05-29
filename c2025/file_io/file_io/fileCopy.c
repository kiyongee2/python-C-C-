//#include <stdio.h>
//
//int main()
//{
//	FILE* fin;     //읽기 파일 포인터 변수
//	FILE* fout;    //쓰기 파일 포인터 변수
//	int input = 0; //문자 코드값 저장
//
//	fopen_s(&fin, "ascii.txt", "r");
//	fopen_s(&fout, "ascii2.txt", "w");
//
//	if (fin == NULL || fout == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	puts("===== 파일에 데이터 쓰기(저장) =====\n");
//	while (input != EOF) {
//		input = fgetc(fin);  //문자 코드값 저장
//		fputc(input, fout);  //파일에 쓰기
//	}
//
//	fclose(fin);
//	fclose(fout);
//
//	return 0;
//}
