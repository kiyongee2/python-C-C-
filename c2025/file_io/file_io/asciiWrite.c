//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //���� ������ ���� 
//	int i;
//
//	fp = fopen("c:/cfile/ascii.txt", "w"); 
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;  //������ 1 or -1
//	}
//
//	printf("========== ASCII ���̺� ==========\n");
//	for (i = 32; i < 128; i++) { //32�� ���鹮��
//		if (i % 10 == 0)
//			fputc('\n', fp); //�ٹٲ�
//		fputc(i, fp);
//		fputc('\t', fp);
//	}
//	fclose(fp);
//
//	//���� �б�
//	/*int ch;
//	FILE* file;
//
//	file = fopen("c:/cfile/ascii.txt", "r");
//	if (file == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;  //������ 1 or -1
//	}
//
//	//���� �б�
//	/*while ((ch = fgetc(file)) != EOF) {
//		printf("%c", ch);
//	}*/
//	//fcolse(file);
//
//	return 0;
//}