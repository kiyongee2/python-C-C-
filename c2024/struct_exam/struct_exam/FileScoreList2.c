//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	char name[20];
//	int no, eng, math;
//
//	//파일에 쓰기
//	fopen_s(&fp, "scorelist2.txt", "w");
//
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 0;
//	}
//
//	while (1)
//	{
//		printf("번호 입력(0이하 종료): ");
//		scanf_s("%d", &no);
//		if (no <= 0) break;
//
//		//파일 입력
//		printf("이름 입력: ");
//		scanf_s("%s", name, sizeof(name));
//
//		printf("영어 점수 입력: ");
//		scanf_s("%d", &eng);
//
//		printf("수학 점수 입력: ");
//		scanf_s("%d", &math);
//
//		//파일에 쓰기
//		fprintf(fp, "%d %s %d %d\n", no, name, eng, math);
//	}
//	
//    fclose(fp);
//
//	return 0; 
//}