//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	FILE* fp;
//	//��Ʈ�� ����
//	//��� - 'r', 'w', 'a'
//	fp = fopen("ascii.txt", "w");
//
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 0;
//	}
//
//	printf("ASCII ���̺��� �ۼ��մϴ�.");
//	for (int i = 1; i < 128;i++) {
//		if (i % 10 == 0)
//			fputc('\n', fp);
//		fputc(i, fp);
//		fputc('\t', fp);
//	}
//
//	fclose(fp);
//	return 0;
//}