//#define _CRT_SECURE_NO_WARNINGS //fopen() ó��
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //���� ����ü ������ ���� ����
//
//	fp = fopen("c:/cfile/out.txt", "w");  //���� ���
//
//	if (fp == NULL) { 
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	//���� 1�� ����
//	fputc('H', fp);
//	fputc('e', fp);
//	fputc('l', fp);
//	fputc('l', fp);
//	fputc('o', fp);
//
//	//���ڿ� ����
//	fputs("\nApple\n", fp);  //����
//	fputs("\n���ƿ�\n", fp); //�ѱ�
//
//	fclose(fp); //���� �ݱ�
//
//	printf("���� ���� �Ϸ�!");
//	return 0;
//}
