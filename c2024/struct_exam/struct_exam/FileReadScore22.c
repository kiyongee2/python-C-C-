//#include <stdio.h>
//
//int main() {
//    FILE* fin;
//    FILE* fout;
//    int no, eng, math;
//
//    if (fopen_s(&fin, "scorelist3-1.txt", "r") != 0) {
//        printf("파일 열기에 실패함: scorelist3-1.txt\n");
//        return 1;
//    }
//
//    if (fopen_s(&fout, "scorelist3-2.txt", "w") != 0) {
//        printf("파일 열기에 실패함: scorelist3-2.txt\n");
//        fclose(fin);
//        return 1;
//    }
//
//    fprintf(fout, "번호 영어 수학\n");
//
//    while (fscanf_s(fin, "%d %d %d", &no, &eng, &math) == 3) {
//        fprintf(fout, "%d %d %d\n", no, eng, math);
//    }
//
//    fclose(fin);
//    fclose(fout);
//
//    printf("파일 복사 완료: scorelist3-2.txt\n");
//    return 0;
//}

