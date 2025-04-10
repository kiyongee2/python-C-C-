//#include <stdio.h>
//
//int main()
//{
//	FILE* fin;
//	FILE* fout;
//	char name[20];  //이름
//	int no, eng, math;  //학번, 영어점수, 수학점수
//
//	fopen_s(&fin, "scorelist.txt", "r");
//	if (fin == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	fopen_s(&fout, "scorelist2.txt", "w");
//	if (fout == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	//제목행 쓰기
//	fprintf(fout, "번호 영어 수학\n");
//	fprintf(stdout, "번호 영어 수학\n");
//
//	while (fscanf_s(fin, "%d %d %d", &no, &eng, &math) != EOF) {
//
//		//파일에 쓰기
//		fprintf(fout, "%d %d %d\n", no, eng, math);
//
//		//모니터에 출력
//		fprintf(stdout, "%d %d %d\n", no, eng, math);
//	}
//
//	fclose(fin);
//	fclose(fout);
//
//	return 0;
//}