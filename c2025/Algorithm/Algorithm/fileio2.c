//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//���� ����
//	FILE* fp;
//	char a[] = "abcdefg\nhijklmn\nopqrstu\nvwxyz";
//	
//	fp = fopen("data.txt", "w");
//	if (fp == NULL)
//		return;
//	fprintf(fp, "%s", a);
//	fclose(fp);
//
//	//���� �б�
//	char s[256];
//	int i = 1;
//
//	fp = fopen("data.txt", "r");
//	if (fp == NULL)
//		return;
//
//	//������ ������ �б�
//	while (feof(fp) == 0) {
//		fgets(s, 255, fp);
//		printf("%04d: %s", i, s);
//		i++;
//	}
//
//	return 0;
//}