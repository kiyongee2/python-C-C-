//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    FILE* fin;
//    FILE* fout;
//    char name[20];  // 이름
//    int no, eng, math;  // 학번, 영어점수, 수학점수
//    int total = 0; // 총점
//    double avg = 0.0; // 평균
//
//    // 입력 파일 열기
//    fopen_s(&fin, "scorelist.txt", "r");
//    if (fin == NULL) {
//        printf("입력 파일 열기에 실패함\n");
//        return 1;
//    }
//
//    // 출력 파일 열기
//    fopen_s(&fout, "scorelist2.txt", "w");
//    if (fout == NULL) {
//        printf("출력 파일 열기에 실패함\n");
//        fclose(fin);  // 입력 파일 닫기
//        return 1;
//    }
//
//    // 제목 행 쓰기
//    fprintf(fout, "번호 이름 영어 수학 총점 평균\n");
//    fprintf(stdout, "번호 이름 영어 수학 총점 평균\n");
//
//    // 파일에서 데이터 읽기
//    while (fscanf_s(fin, "%d %s %d %d", &no, name, (unsigned)_countof(name), &eng, &math) != EOF) {
//        total = eng + math;  // 총점 계산
//        avg = (double)total / 2;  // 평균 계산 (과목이 2개이므로)
//
//        // 파일에 쓰기
//        fprintf(fout, "%3d %s %3d %3d %4d %.1lf\n", no, name, eng, math, total, avg);
//
//        // 모니터에 출력
//        fprintf(stdout, "%3d %s %3d %3d %4d %.1lf\n", no, name, eng, math, total, avg);
//    }
//
//    // 파일 닫기
//    fclose(fin);
//    fclose(fout);
//
//    return 0;
//}
