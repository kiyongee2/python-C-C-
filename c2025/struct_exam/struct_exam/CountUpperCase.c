//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	FILE* fp;
//	char ch;
//
//	fp = fopen("out.txt", "r");
//
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 0;
//	}
//
//	// �빮���� ���� ����
//	int count = 0;
//	while (1) {
//		ch = fgetc(fp);
//		if (ch >= 'A' && ch <= 'Z') {
//			count++;
//		}
//		if (ch == EOF)  // EOF(End Of File) = -1
//			break;
//		printf("%c", ch);
//	}
//	printf("�빮���� ���� : %d\n", count);
//
//	fclose(fp);
//	return 0;
//}