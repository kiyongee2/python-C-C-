//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; 
//	char name[20];
//	int eng, math;
//
//	//ǥ�� �Է� ��Ʈ�� ����(stdin)
//	printf("�̸� �Է�: ");
//	//scanf("%s", name);
//	fscanf(stdin, "%s", name);
//
//	printf("�������� �Է�: ");
//	//scanf("%d", &eng);
//	fscanf(stdin, "%d", &eng);
//
//	printf("�������� �Է�: ");
//	//scanf("%d", &math);
//	fscanf(stdin, "%d", &math);
//
//	//���� ����(�߰� ���� ���)
//	fopen_s(&fp, "score.txt", "w");
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	//���Ͽ� ����
//	fprintf(fp, "%s %d %d\n", name, eng, math);
//
//	//ǥ�� ��� ��Ʈ�� ����(stdout)
//	printf("%s %d %d\n", name, eng, math);
//	//fprintf(stdout, "%s %d %d\n", name, eng, math);
//	
//	fclose(fp);
//
//	return 0;
//}