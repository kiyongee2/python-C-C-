//#define _CRT_SECURE_NO_WARNINGS //fopen() ó��
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; 
//	char msg[] = "����� �����~";
//
//	fp = fopen("c:/cfile/out.txt", "a");  //�߰� ��� - "a"
//	if (fp == NULL) { 
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	//���ڿ� ����
//	fputs("Good Luck~\n", fp); 
//	fprintf(fp, "%s\n", msg); //���� ���� ���
//
//	fclose(fp);
//
//	printf("���� �߰� ���� �Ϸ�!");
//
//	//���� �б�
//	int ch;
//
//	fp = fopen("c:/cfile/out.txt", "r"); 
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF) break;
//		printf("%c", ch);
//	}
//
//	fclose(fp);
//
//	return 0;
//}
