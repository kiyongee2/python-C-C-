//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	FILE* fp;
//	int i, j;
//
//	fp = fopen("gugudan.txt", "w");
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	printf("=== Gugudan ���̺��� �ۼ��մϴ�. ===");
//	for (i = 2; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			fprintf(fp, "%d x %d = %d\n", i, j, (i * j));
//		}
//		fprintf(fp, "\n");
//	}
//	fclose(fp);
//
//	return 0;
//}