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
//	printf("���� �߰� ���� �Ϸ�!\n");
//
//	//���� �б�
//	char str[128];  //�迭�� ����
//
//	fp = fopen("c:/cfile/out.txt", "r"); 
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	//�� �� �б�
//	fgets(str, sizeof(str), fp);  
//	printf("%s", str);
//
//	//��� ���� �б�
//	while ((fgets(str, sizeof(str), fp)) != NULL) {
//		printf("%s", str);
//	}
//
//	fclose(fp);
//
//	return 0;
//}
