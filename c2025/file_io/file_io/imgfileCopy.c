//#include <stdio.h>
//
//int main()
//{
//	FILE* fin;     //�б� ���� ������ ����
//	FILE* fout;    //���� ���� ������ ����
//	int input = 0; //���� �ڵ尪 ����
//
//	fopen_s(&fin, "c:/cfile/boat.jpg", "rb");
//	fopen_s(&fout, "c:/cfile/boat2.jpg", "wb");
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
