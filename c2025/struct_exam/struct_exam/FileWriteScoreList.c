//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	int no, eng, math;  //�й�, ����, ��������
//
//	fopen_s(&fp, "scorelist.txt", "w");
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 1;
//	}
//
//	//������ ����
//	fprintf(fp, "��ȣ ���� ����\n");
//	while (1)
//	{
//		printf("��ȣ �Է�(0���� ����): ");
//		scanf_s("%d", &no);
//		if (no <= 0) break;
//
//		printf("�������� �Է�: ");
//		scanf_s("%d", &eng);
//
//		printf("�������� �Է�: ");
//		scanf_s("%d", &math);
//
//		//���Ͽ� ����
//		fprintf(fp, "%d %d %d\n", no, eng, math);
//	}
//	fclose(fp);
//	
//	return 0;
//}
