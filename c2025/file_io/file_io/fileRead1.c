//#define _CRT_SECURE_NO_WARNINGS //fopen()
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //���� ������ ���� 
//	int ch;  //���� ���� ����(�ڵ尪�̹Ƿ� int��)
//
//	fp = fopen("c:/cfile/out.txt", "r"); //�б� ��� - "r"
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;  //������ 1 or -1
//	}
//
//	//���� 1�� �б�
//	/*ch = fgetc(fp);
//	printf("%c", ch);*/ //'H'
//
//	//��� ���� �б�
//	//��� 1
//	while (1) {
//		ch = fgetc(fp);
//		if (ch == EOF) break;
//		printf("%c", ch);
//	}
//
//	//��� 2
//	/*while ((ch = fgetc(fp)) != -1) {
//		printf("%c", ch);
//	}*/
//
//	return 0;
//}