//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE *fin, *fout;
//    char line[100];  // ���Ͽ��� �� ���� ������ ����
//    char name[20];  // �̸�
//    int no, eng, math;  // ��ȣ, ���� ����, ���� ����
//    
//
//    // �Է� ���� ����
//    if (fopen_s(&fin, "scorelist.txt", "r") != 0) {
//        perror("scorelist.txt ���� ���⿡ ������");
//        return 1;
//    }
//
//    // ��� ���� ����
//    if (fopen_s(&fout, "scorelist2.txt", "w") != 0) {
//        perror("scorelist2.txt ���� ���⿡ ������");
//        fclose(fin);  // �Է� ���� �ݱ�
//        return 1;
//    }
//
//    // ������ ���� (��� ���Ͽ� �߰�)
//    fprintf(fout, "��ȣ �̸� ���� ����\n");
//
//    // ù ��° ��(������)�� ����
//    fgets(line, sizeof(line), fin);
//
//    // ���� ���� �� �پ� �о ����
//    while (fgets(line, sizeof(line), fin) != NULL) {
//        if (sscanf_s(line, "%d %s %d %d", &no, name, sizeof(name), &eng, &math) == 4) {
//            // ��� ���Ͽ� ����
//            fprintf(fout, "%3d %7s %3d %4d\n", no, name, eng, math);
//        } else {
//            printf("�߸��� ������ ������: %s", line);  // ���� �޽��� ���
//        }
//    }
//
//    // ���� �ݱ�
//    fclose(fin);
//    fclose(fout);
//
//    printf("scorelist.txt�� ������ scorelist2.txt�� ����Ǿ����ϴ�.\n");
//
//    return 0;
//}