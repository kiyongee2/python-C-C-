//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	char name[20];
//	int age;
//	float height;
//}Person;
//
//int main()
//{
//	int size;
//	printf("��� ���� �Է��ϼ���: ");
//	scanf_s("%d", &size);
//
//	Person* p = (Person*)malloc(sizeof(Person) * size);
//
//	for (int i = 0; i < size; i++) {
//		printf("�̸� �Է�: ");
//		scanf_s("%s", (p + i)->name, sizeof((p + i)->name));
//
//		printf("���� �Է�: ");
//		scanf_s("%d", &(p+i)->age);
//
//		printf("Ű �Է�: ");
//		scanf_s("%f", &(p + i)->height);
//	}
//
//	// ���Ͽ� ����
//	FILE* fp = fopen("data.txt", "w");
//
//	for (int i = 0; i < size; i++) {
//		fprintf(fp, "%s %d %.1f\n", (p + i)->name, (p + i)->age, (p + i)->height);
//	}
//	fclose(fp);
//
//	// ���Ͽ��� �ҷ�����
//	fp = fopen("data.txt", "r");
//
//	for (int i = 0; i < size; i++) {
//		fscanf_s(fp, "�̸�: %s, ����: %d, Ű: %f", 
//					(p + i)->name, &(p + i)->age, &(p + i)->height);
//	}
//
//	fclose(fp);
//
//	return 0;
//}