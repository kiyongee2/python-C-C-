//#define _CRT_SECURE_NO_WARNINGS //fopen()
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //���� ������ ���� 
//	int i;
//
//	fopen_s(&fp, "ascii.txt", "w"); 
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;  //������ 1 or -1
//	}
//
//	for (i = 32; i < 128; i++) {
//		if (i % 10 == 0)
//			fputc('\n', fp); //�ٹٲ�
//		fputc(i, fp);
//		fputc('\t', fp);
//	}
//
//	printf("���� ���� �Ϸ�!");
//
//	return 0;
//}