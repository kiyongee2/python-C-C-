//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	char name[20];  //�̸�
//	int eng, math;  //����, ���� ����
//
//	//���� �Է�
//	/*printf("�̸� �Է�: ");
//	scanf_s("%s", name, sizeof(name));
//	printf("���� ���� �Է�: ");
//	scanf_s("%d", &eng);
//	printf("���� ���� �Է�: ");
//	scanf_s("%d", &math);*/
//
//	//�ܼ� �Է�(Ű����)
//	printf("�̸� �Է�: ");
//	fscanf_s(stdin, "%s", name, sizeof(name));
//
//	printf("���� ���� �Է�: ");
//	fscanf_s(stdin, "%d", &eng);
//
//	printf("���� ���� �Է�: ");
//	fscanf_s(stdin, "%d", &math);
//
//	//���Ͽ� ����
//	fopen_s(&fp, "score.txt", "w");
//
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	//���Ͽ� ����
//	fprintf(fp, "%s %d %d\n", name, eng, math);
//
//	//����Ϳ� ����
//	fprintf(stdout, "%s %d %d\n", name, eng, math);
// 
//    fclose(fp);
//
//	return 0; 
//}