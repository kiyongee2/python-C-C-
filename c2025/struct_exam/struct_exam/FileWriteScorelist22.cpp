//#include <stdio.h>
//
//int main() {
//    FILE* fp;
//    int no, eng, math;
//
//    if (fopen_s(&fp, "scorelist1.txt", "w") != 0) {
//        printf("파일 열기에 실패함\n");
//        return 1;
//    }
//
//    fprintf(fp, "번호 영어 수학\n");
//
//    while (1) {
//        printf("번호 입력(0이하 종료): ");
//        if (scanf_s("%d", &no) != 1) {  // 입력 오류 방지
//            printf("잘못된 입력입니다. 숫자를 입력하세요.\n");
//            while (getchar() != '\n');  // 입력 버퍼 비우기
//            continue;
//        }
//        if (no <= 0) break;
//
//        printf("영어점수 입력: ");
//        if (scanf_s("%d", &eng) != 1) {
//            printf("잘못된 입력입니다. 숫자를 입력하세요.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        printf("수학점수 입력: ");
//        if (scanf_s("%d", &math) != 1) {
//            printf("잘못된 입력입니다. 숫자를 입력하세요.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        fprintf(fp, "%d %d %d\n", no, eng, math);
//    }
//
//    fclose(fp);
//    printf("데이터 저장 완료: scorelist3-1.txt\n");
//    return 0;
//}

