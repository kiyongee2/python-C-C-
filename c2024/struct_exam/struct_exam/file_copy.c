//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(int argc, char* argv[]) {
//	FILE* fin, * fout;
//
//	if (argc < 3) {
//		printf("���� �������� �Է��ϼ���. file_copy out.txt out2.txt");
//		return -1;
//	}
//
//	// ���� ���� �б������ ����
//	fin = fopen(argv[1], "r");
//	if (fin == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 0;
//	}
//
//	// ���� ���� ��������� ����
//	fout = fopen(argv[2], "w");
//	if (fin == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 0;
//	}
//
//	// ���� ������ ������ �о ���� ���Ͽ� ����
//	while (!feof(fin)) {
//		fputc(fgetc(fin), fout);
//	}
//
//	fclose(fin);
//	fclose(fout);
//	return 0;
//}