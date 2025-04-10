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
//	printf("사람 수를 입력하세요: ");
//	scanf_s("%d", &size);
//
//	Person* p = (Person*)malloc(sizeof(Person) * size);
//
//	for (int i = 0; i < size; i++) {
//		printf("이름 입력: ");
//		scanf_s("%s", (p + i)->name, sizeof((p + i)->name));
//
//		printf("나이 입력: ");
//		scanf_s("%d", &(p+i)->age);
//
//		printf("키 입력: ");
//		scanf_s("%f", &(p + i)->height);
//	}
//
//	// 파일에 저장
//	FILE* fp = fopen("data.txt", "w");
//
//	for (int i = 0; i < size; i++) {
//		fprintf(fp, "%s %d %.1f\n", (p + i)->name, (p + i)->age, (p + i)->height);
//	}
//	fclose(fp);
//
//	// 파일에서 불러오기
//	fp = fopen("data.txt", "r");
//
//	for (int i = 0; i < size; i++) {
//		fscanf_s(fp, "이름: %s, 나이: %d, 키: %f", 
//					(p + i)->name, &(p + i)->age, &(p + i)->height);
//	}
//
//	fclose(fp);
//
//	return 0;
//}