//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//
//	fopen_s(&fp, "gugudan.txt", "w");
//	if (fp == NULL) {
//		perror("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	//�ڵ� �ۼ�
//	for (int i = 2; i < 10; i++) {
//		for (int j = 1; j < 10; j++) {
//			fprintf(fp, "%d x %d = %d\n", i, j, (i * j));
//		}
//		fprintf(fp, "\n");
//	}
//
//	fclose(fp);
//
//	return 0;
//}
//
