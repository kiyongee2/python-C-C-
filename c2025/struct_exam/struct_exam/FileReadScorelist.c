//#include <stdio.h>
//
//int main()
//{
//	FILE* fin;
//	FILE* fout;
//	char name[20];  //�̸�
//	int no, eng, math;  //�й�, ��������, ��������
//
//	fopen_s(&fin, "scorelist.txt", "r");
//	if (fin == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	fopen_s(&fout, "scorelist2.txt", "w");
//	if (fout == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	//������ ����
//	fprintf(fout, "��ȣ ���� ����\n");
//	fprintf(stdout, "��ȣ ���� ����\n");
//
//	while (fscanf_s(fin, "%d %d %d", &no, &eng, &math) != EOF) {
//
//		//���Ͽ� ����
//		fprintf(fout, "%d %d %d\n", no, eng, math);
//
//		//����Ϳ� ���
//		fprintf(stdout, "%d %d %d\n", no, eng, math);
//	}
//
//	fclose(fin);
//	fclose(fout);
//
//	return 0;
//}