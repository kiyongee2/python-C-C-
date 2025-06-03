//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; 
//	char name[20];
//	int eng, math;
//
//	//표준 입력 스트림 지정(stdin)
//	printf("이름 입력: ");
//	//scanf("%s", name);
//	fscanf(stdin, "%s", name);
//
//	printf("영어점수 입력: ");
//	//scanf("%d", &eng);
//	fscanf(stdin, "%d", &eng);
//
//	printf("수학점수 입력: ");
//	//scanf("%d", &math);
//	fscanf(stdin, "%d", &math);
//
//	//파일 열기(추가 쓰기 모드)
//	fopen_s(&fp, "score.txt", "w");
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//파일에 쓰기
//	fprintf(fp, "%s %d %d\n", name, eng, math);
//
//	//표준 출력 스트림 지정(stdout)
//	printf("%s %d %d\n", name, eng, math);
//	//fprintf(stdout, "%s %d %d\n", name, eng, math);
//	
//	fclose(fp);
//
//	return 0;
//}