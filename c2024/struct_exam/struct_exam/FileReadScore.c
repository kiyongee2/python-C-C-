//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	char name[20];  //�̸�
//	int eng, math;  //����, ���� ����
//
//	fopen_s(&fp, "score.txt", "r");
//
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	//���Ͽ��� �о����
//	//fscanf_s(fp, "%s", name, sizeof(name));  //�̸��� �б�
//	fscanf_s(fp, "%s %d %d", name, sizeof(name), &eng, &math);
//
//	//����Ϳ� ����
//	//fprintf(stdout, "%s\n", name); //�̸��� ����
//	fprintf(stdout, "%s %d %d\n", name, eng, math); 
//
//	fclose(fp);
//
//	return 0;
//}