//#include <stdio.h>
//
//int main()
//{
//	FILE* fin;     //�б� ���� ������ ����
//	FILE* fout;    //���� ���� ������ ����
//	int input = 0; //���� �ڵ尪 ����
//
//	fopen_s(&fin, "ascii.txt", "r");
//	fopen_s(&fout, "ascii2.txt", "w");
//
//	if (fin == NULL || fout == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	puts("===== ���Ͽ� ������ ����(����) =====\n");
//	while (input != EOF) {
//		input = fgetc(fin);  //���� �ڵ尪 ����
//		fputc(input, fout);  //���Ͽ� ����
//	}
//
//	fclose(fin);
//	fclose(fout);
//
//	return 0;
//}
