//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fout;
//	char name[20];
//	int no, eng, math; //��ȣ, ����, ��������
//
//	fopen_s(&fout, "scorelist.txt", "w");
//	if (fout == NULL) {
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	fprintf(fout, "��ȣ �̸�  ����  ����\n");  //������
//	while (1) {
//		printf("��ȣ �Է�(0���� ����): ");
//		scanf("%d", &no);
//		if (no <= 0) break;
//
//		printf("�̸� �Է�: ");
//		scanf("%s", name);
//
//		printf("�������� �Է�: ");
//		scanf("%d", &eng);
//
//		printf("�������� �Է�: ");
//		scanf("%d", &math);
//
//		//���Ͽ� ����
//		fprintf(fout, "%3d %7s %3d %3d\n", no, name, eng, math);
//	}
//	fclose(fout);
//
//	//scorelist.txt �б�
//	FILE* fin;
//	char line[256];
//
//	fopen_s(&fin, "scorelist.txt", "r");
//	if (fin == NULL) {
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//	printf("\n\n===== ��  ��  ǥ =====\n");
//	while (fgets(line, sizeof(line), fin) != NULL) {
//		fprintf(stdout, "%s", line);
//	}
//	fclose(fin);
//
//	return 0;
//}