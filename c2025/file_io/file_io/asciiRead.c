//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; //���� ������ ���� 
//	int ch;   //�ƽ�Ű �ڵ带 ������ ����
//
//	fopen_s(&fp, "ascii.txt", "r");
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;  //������ 1 or -1
//	}
//
//	//���� �б�
//	while ((ch = fgetc(fp)) != EOF) {
//		printf("%c", ch);
//	}
//
//	fcolse(fp);
//
//	return 0;
//}
