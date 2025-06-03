//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	FILE *fin, *fout;
//	char line[256];  //읽은 내용 저장
//	char name[20];   //이름
//	int no, eng, math; //번호, 수학, 영어점수
//	float avg;  //평균
//
//	//scorelist.txt 읽기
//	if(fopen_s(&fin, "scorelist.txt", "r") != 0){
//		perror("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//scorelist2.txt에 쓰기
//	if (fopen_s(&fout, "scorelist2.txt", "w") != 0) {
//		perror("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	fprintf(fout, "번호 이름  영어  수학  평균\n");  //제목행
//	fgets(line, sizeof(line), fin); //제목행 읽음(계산에서 제외)
//
//	while (fgets(line, sizeof(line), fin) != NULL ){
//		//sscanf()는 성공적으로 추출한 항목의 개수를 반환함
//		if (sscanf(line, "%d %s %d %d", &no, 
//					name, &eng, &math) == 4) { 
//			//평균 계산
//			avg = (float)(eng + math) / 2; 
//			fprintf(fout, "%2d %7s %3d %5d %6.2f\n", no, name, eng, math, avg);
//		}
//		else {
//			printf("잘못된 형식의 데이터: %s", line);
//		}
//	}
//
//	fclose(fin);
//	fclose(fout);
//
//	//scorelist2.txt 읽기
//	FILE* fp;
//	char str[256];
//
//	if (fopen_s(&fp, "scorelist2.txt", "r") != 0) {
//		perror("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	while (fgets(str, sizeof(str), fp) != NULL) {
//		fprintf(stdout, "%s", str);
//	}
//
//	fclose(fp);
//
//	return 0;
//}