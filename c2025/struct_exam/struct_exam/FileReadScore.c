//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	char name[20];  //이름
//	int eng, math;  //영어, 수학 점수
//
//	fopen_s(&fp, "score.txt", "r");
//
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//파일에서 읽어오기
//	//fscanf_s(fp, "%s", name, sizeof(name));  //이름만 읽기
//	fscanf_s(fp, "%s %d %d", name, sizeof(name), &eng, &math);
//
//	//모니터에 쓰기
//	//fprintf(stdout, "%s\n", name); //이름만 쓰기
//	fprintf(stdout, "%s %d %d\n", name, eng, math); 
//
//	fclose(fp);
//
//	return 0;
//}