//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE *fin, *fout;
//	char line[256];  //���� ���� ����
//	char name[20];   //�̸�
//	int no, eng, math; //��ȣ, ����, ��������
//	float avg;  //���
//
//	//scorelist.txt �б�
//	if(fopen_s(&fin, "scorelist.txt", "r") != 0){
//		perror("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	//scorelist2.txt�� ����
//	if (fopen_s(&fout, "scorelist2.txt", "w") != 0) {
//		perror("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	fprintf(fout, "��ȣ �̸�  ����  ����  ���\n");  //������
//	fgets(line, sizeof(line), fin); //������ ����(��꿡�� ����)
//
//	while (fgets(line, sizeof(line), fin) != NULL ){
//		//sscanf()�� ���������� ������ �׸��� ������ ��ȯ��
//		if (sscanf(line, "%d %s %d %d", &no, 
//					name, &eng, &math) == 4) { 
//			//��� ���
//			avg = (float)(eng + math) / 2; 
//			fprintf(fout, "%2d %7s %3d %5d %6.2f\n", no, name, eng, math, avg);
//		}
//		else {
//			printf("�߸��� ������ ������: %s", line);
//		}
//	}
//
//	fclose(fin);
//	fclose(fout);
//
//	//scorelist2.txt �б�
//	FILE* fp;
//	char str[256];
//
//	if (fopen_s(&fp, "scorelist2.txt", "r") != 0) {
//		perror("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	while (fgets(str, sizeof(str), fp) != NULL) {
//		fprintf(stdout, "%s", str);
//	}
//
//	fclose(fp);
//
//	return 0;
//}