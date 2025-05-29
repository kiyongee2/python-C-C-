//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//
//	fopen_s(&fp, "gugudan.txt", "w");
//	if (fp == NULL) {
//		perror("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	//코드 작성
//	for (int i = 2; i < 10; i++) {
//		for (int j = 1; j < 10; j++) {
//			fprintf(fp, "%d x %d = %d\n", i, j, (i * j));
//		}
//		fprintf(fp, "\n");
//	}
//
//	fclose(fp);
//
//	return 0;
//}
//
