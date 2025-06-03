//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE* fout;
//	char name[20];
//	int no, eng, math; //번호, 수학, 영어점수
//
//	fopen_s(&fout, "scorelist.txt", "w");
//	if (fout == NULL) {
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	fprintf(fout, "번호 이름  영어  수학\n");  //제목행
//	while (1) {
//		printf("번호 입력(0이하 종료): ");
//		scanf("%d", &no);
//		if (no <= 0) break;
//
//		printf("이름 입력: ");
//		scanf("%s", name);
//
//		printf("영어점수 입력: ");
//		scanf("%d", &eng);
//
//		printf("수학점수 입력: ");
//		scanf("%d", &math);
//
//		//파일에 쓰기
//		fprintf(fout, "%3d %7s %3d %3d\n", no, name, eng, math);
//	}
//	fclose(fout);
//
//	//scorelist.txt 읽기
//	FILE* fin;
//	char line[256];
//
//	fopen_s(&fin, "scorelist.txt", "r");
//	if (fin == NULL) {
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//	printf("\n\n===== 성  적  표 =====\n");
//	while (fgets(line, sizeof(line), fin) != NULL) {
//		fprintf(stdout, "%s", line);
//	}
//	fclose(fin);
//
//	return 0;
//}