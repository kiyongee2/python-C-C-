//#define _CRT_SECURE_NO_WARNINGS  //fopen() ��뿡 �ʿ�
//#include <stdio.h>
//
//int main() {
//	//��Ʈ�� ����
//	FILE* fp;
//	
//	//��� - 'r', 'w', 'a'
//	fp = fopen("out.txt", "w");
//
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 0;
//	}
//
//	//�� ���� ����
//	fputc('H', fp);
//	fputc('e', fp);
//	fputc('l', fp);
//	fputc('l', fp);
//	fputc('o', fp);
//
//	//���ڿ� ����
//	fputs("\nApple\n", fp);
//	fputs("\n���\n", fp);  //�ѱ� ����
//
//	fclose(fp);
//	return 0;
//}
