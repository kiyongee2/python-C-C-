//#include <stdio.h>
//
//int main() {
//
//    FILE* fin, * fout;
//    char line[100];  // ���Ͽ��� �� ���� ������ ����
//
//    if (fopen_s(&fin, "scorelist.txt", "r") != 0) {
//        perror("scorelist1.txt ���� ���⿡ ������");
//        return 1;
//    }
//
//    if (fopen_s(&fout, "scorelist2.txt", "w") != 0) {
//        perror("scorelist2.txt ���� ���⿡ ������");
//        fclose(fin);  // �Է� ���� �ݱ�
//        return 1;
//    }
//
//    // ���� ���� �� �پ� �о �ٸ� ���Ͽ� ����
//    while (fgets(line, sizeof(line), fin) != NULL) {
//        // �ٹٲ� ���ڴ� line�� ���ԵǾ� �����Ƿ� ���� �߰����� ����
//        fprintf(fout, "%s", line); 
//    }
//    fclose(fin);
//    fclose(fout);
//    printf("scorelist1.txt�� ������ scorelist2.txt�� ����Ǿ����ϴ�.\n");
//
//    return 0;
//}
