//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	char name[20];
//	int no, eng, math;
//
//	//���Ͽ� ����
//	fopen_s(&fp, "scorelist2.txt", "w");
//
//	if (fp == NULL) {
//		printf("���� ���⿡ ������\n");
//		return 0;
//	}
//
//	while (1)
//	{
//		printf("��ȣ �Է�(0���� ����): ");
//		scanf_s("%d", &no);
//		if (no <= 0) break;
//
//		//���� �Է�
//		printf("�̸� �Է�: ");
//		scanf_s("%s", name, sizeof(name));
//
//		printf("���� ���� �Է�: ");
//		scanf_s("%d", &eng);
//
//		printf("���� ���� �Է�: ");
//		scanf_s("%d", &math);
//
//		//���Ͽ� ����
//		fprintf(fp, "%d %s %d %d\n", no, name, eng, math);
//	}
//	
//    fclose(fp);
//
//	return 0; 
//}