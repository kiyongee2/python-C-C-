//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	FILE* fp;
//
//	//fp = fopen("ascii.txt", "w");
//	fopen_s(&fp, "ascii.txt", "w"); //_CRT_SECURE_NO_WARNINGS ���ʿ�.
//
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 0;
//	}
//
//	printf("=== ASCII ���̺��� �ۼ��մϴ�. ===");
//	//�ƽ�Ű �ڵ� - 31������ �����, 32-���鹮��
//	for (int i = 32; i < 128;i++) {
//		if (i % 10 == 0)
//			fputc('\n', fp);
//		fputc(i, fp);
//		fputc('\t', fp);
//	}
//
//	fclose(fp);
//
//	return 0;
//}