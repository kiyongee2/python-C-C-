//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	char name[20];  //이름
//	int eng, math;  //영어, 수학 점수
//
//	//파일 입력
//	/*printf("이름 입력: ");
//	scanf_s("%s", name, sizeof(name));
//	printf("영어 점수 입력: ");
//	scanf_s("%d", &eng);
//	printf("수학 점수 입력: ");
//	scanf_s("%d", &math);*/
//
//	//콘솔 입력(키보드)
//	printf("이름 입력: ");
//	fscanf_s(stdin, "%s", name, sizeof(name));
//
//	printf("영어 점수 입력: ");
//	fscanf_s(stdin, "%d", &eng);
//
//	printf("수학 점수 입력: ");
//	fscanf_s(stdin, "%d", &math);
//
//	//파일에 쓰기
//	fopen_s(&fp, "score.txt", "w");
//
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//파일에 쓰기
//	fprintf(fp, "%s %d %d\n", name, eng, math);
//
//	//모니터에 쓰기
//	fprintf(stdout, "%s %d %d\n", name, eng, math);
// 
//    fclose(fp);
//
//	return 0; 
//}