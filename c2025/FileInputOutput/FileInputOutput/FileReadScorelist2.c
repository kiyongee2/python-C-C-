//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE *fin, *fout;
//    char line[100];  // 파일에서 한 줄을 저장할 버퍼
//    char name[20];  // 이름
//    int no, eng, math;  // 번호, 영어 점수, 수학 점수
//    
//
//    // 입력 파일 열기
//    if (fopen_s(&fin, "scorelist.txt", "r") != 0) {
//        perror("scorelist.txt 파일 열기에 실패함");
//        return 1;
//    }
//
//    // 출력 파일 열기
//    if (fopen_s(&fout, "scorelist2.txt", "w") != 0) {
//        perror("scorelist2.txt 파일 열기에 실패함");
//        fclose(fin);  // 입력 파일 닫기
//        return 1;
//    }
//
//    // 제목행 쓰기 (출력 파일에 추가)
//    fprintf(fout, "번호 이름 영어 수학\n");
//
//    // 첫 번째 줄(제목행)은 무시
//    fgets(line, sizeof(line), fin);
//
//    // 파일 내용 한 줄씩 읽어서 저장
//    while (fgets(line, sizeof(line), fin) != NULL) {
//        if (sscanf_s(line, "%d %s %d %d", &no, name, sizeof(name), &eng, &math) == 4) {
//            // 출력 파일에 쓰기
//            fprintf(fout, "%3d %7s %3d %4d\n", no, name, eng, math);
//        } else {
//            printf("잘못된 형식의 데이터: %s", line);  // 오류 메시지 출력
//        }
//    }
//
//    // 파일 닫기
//    fclose(fin);
//    fclose(fout);
//
//    printf("scorelist.txt의 내용이 scorelist2.txt에 저장되었습니다.\n");
//
//    return 0;
//}