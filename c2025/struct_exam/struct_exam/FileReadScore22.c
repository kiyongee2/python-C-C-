//#include <stdio.h>
//
//int main() {
//    FILE* fin;
//    FILE* fout;
//    int no, eng, math;
//
//    if (fopen_s(&fin, "scorelist3-1.txt", "r") != 0) {
//        printf("���� ���⿡ ������: scorelist3-1.txt\n");
//        return 1;
//    }
//
//    if (fopen_s(&fout, "scorelist3-2.txt", "w") != 0) {
//        printf("���� ���⿡ ������: scorelist3-2.txt\n");
//        fclose(fin);
//        return 1;
//    }
//
//    fprintf(fout, "��ȣ ���� ����\n");
//
//    while (fscanf_s(fin, "%d %d %d", &no, &eng, &math) == 3) {
//        fprintf(fout, "%d %d %d\n", no, eng, math);
//    }
//
//    fclose(fin);
//    fclose(fout);
//
//    printf("���� ���� �Ϸ�: scorelist3-2.txt\n");
//    return 0;
//}

