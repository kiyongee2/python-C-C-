//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	FILE* fp;  //���� ������ ��ü ����
//	int ch;
//
//	fp = fopen("out.txt", "r");
//
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;  //������ 1 or -1 ��ȯ
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
//	/*while ((ch = fgetc(fp)) != EOF)
//	{
//		printf("%c", ch);
//	}*/
//
//	fclose(fp);
//
//	return 0;
//}
