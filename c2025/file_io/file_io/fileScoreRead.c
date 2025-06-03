//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	char name[20];
//	int eng, math;
//	char line[256]; //한 줄을 저장할 버퍼
//
//	fopen_s(&fp, "score.txt", "r");
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//파일을 읽은 후 내용 출력
//	printf("이름 영어 수학\n");
//	while (fgets(line, sizeof(line), fp) != NULL) {
//		fprintf(stdout, "%s", line);
//	}
//
//	fclose(fp);
//
//	return 0;
//}