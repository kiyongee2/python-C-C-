//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	char name[20];
//	int eng, math;
//	char line[256]; //�� ���� ������ ����
//
//	fopen_s(&fp, "score.txt", "r");
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	//������ ���� �� ���� ���
//	printf("�̸� ���� ����\n");
//	while (fgets(line, sizeof(line), fp) != NULL) {
//		fprintf(stdout, "%s", line);
//	}
//
//	fclose(fp);
//
//	return 0;
//}