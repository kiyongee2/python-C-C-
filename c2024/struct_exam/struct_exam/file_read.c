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
//		printf("���� ���⿡ ������\n");
//		return 0;
//	}
//
//	//fgetc(FILE*) ���Ͽ��� �ѱ��� �о���� �Լ�
//	/*ch = fgetc(fp);
//	printf("%c", ch);*/
//
//	// ��� ���� �б�
//	while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF)  // EOF(End Of File) = -1
//			break;
//		printf("%c", ch);
//	}
//
//	//char buf[100]; // �� �پ� ���� ����
//	//while (fgets(buf, sizeof(buf), fp) != NULL) { // ���Ͽ��� �� �پ� �б�
//	//	printf("%s", buf);
//	//}
//
//	// �빮���� ���� ����
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
//	//printf("�빮���� ���� : %d\n", count);
//
//	fclose(fp);
//	return 0;
//}