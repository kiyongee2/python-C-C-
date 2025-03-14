//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE* fp;
//    char line[100];  // 파일에서 한 줄을 저장할 버퍼
//
//    // 파일 열기
//    if (fopen_s(&fp, "scorelist1.txt", "r") != 0) {
//        perror("파일 열기에 실패함");
//        return 1;
//    }
//
//    // 파일 내용 한 줄씩 읽어서 출력
//    while (fgets(line, sizeof(line), fp) != NULL) {
//        printf("%s", line);  // 줄바꿈 문자는 line에 포함되어 있으므로 따로 추가하지 않음
//    }
//
//    // 파일 닫기
//    fclose(fp);
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE* fp;
//    char line[100];
//    int no, eng, math;
//
//    // 파일 열기
//    if (fopen_s(&fp, "scorelist1.txt", "r") != 0) {
//        perror("파일 열기에 실패함");
//        return 1;
//    }
//
//    // 첫 번째 줄(제목행)은 무시
//    fgets(line, sizeof(line), fp);
//
//    // 파일 내용 한 줄씩 읽어서 파싱
//    while (fgets(line, sizeof(line), fp) != NULL) {
//        if (sscanf_s(line, "%d %d %d", &no, &eng, &math) == 3) {
//            printf("학번: %d, 영어: %d, 수학: %d, 평균: %.2f\n", no, eng, math, (eng + math) / 2.0);
//        }
//        else {
//            printf("잘못된 형식의 데이터: %s", line);
//        }
//    }
//
//    // 파일 닫기
//    fclose(fp);
//
//    return 0;
//}
