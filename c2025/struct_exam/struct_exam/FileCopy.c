//#include <stdio.h>
//
//int main() 
//{
//	FILE* fin;   //�б� ���� ������ ����
//	FILE* fout;  //���� ���� ������ ����
//	int input = 0;  //���� �ڵ尪
//
//	fopen_s(&fin, "gugudan.txt", "r"); //�������� �б�
//	fopen_s(&fout, "gugudan2.txt", "w"); //���纻�� ����
//
//	if (fin == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	if (fout == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	puts("=== ���Ͽ� ������ ����(����) ===");
//	while (input != EOF) {
//		input = fgetc(fin);    //�������� �о�ͼ�
//		fputc(input, fout);    //���纻�� ����
//	}
//
//	fclose(fin);
//	fclose(fout);
//
//	return 0;
//}