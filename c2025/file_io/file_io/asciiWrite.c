//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //���� ������ ���� 
//	int i;
//
//	//fopen_s(����������, �����̸�, ������)
//	//��� ���(������Ʈ ���� �ȿ� �����)
//	fopen_s(&fp, "ascii.txt", "w"); 
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
//
//	fclose(fp);
//
//	return 0;
//}