//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	int no, eng, math;  //학번, 영어, 수학점수
//
//	fopen_s(&fp, "scorelist.txt", "w");
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	//제목행 쓰기
//	fprintf(fp, "번호 영어 수학\n");
//	while (1)
//	{
//		printf("번호 입력(0이하 종료): ");
//		scanf_s("%d", &no);
//		if (no <= 0) break;
//
//		printf("영어점수 입력: ");
//		scanf_s("%d", &eng);
//
//		printf("수학점수 입력: ");
//		scanf_s("%d", &math);
//
//		//파일에 쓰기
//		fprintf(fp, "%d %d %d\n", no, eng, math);
//	}
//	fclose(fp);
//	
//	return 0;
//}
