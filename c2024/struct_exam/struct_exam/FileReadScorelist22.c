//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE* fp;
//    char line[100];  // ���Ͽ��� �� ���� ������ ����
//
//    // ���� ����
//    if (fopen_s(&fp, "scorelist1.txt", "r") != 0) {
//        perror("���� ���⿡ ������");
//        return 1;
//    }
//
//    // ���� ���� �� �پ� �о ���
//    while (fgets(line, sizeof(line), fp) != NULL) {
//        printf("%s", line);  // �ٹٲ� ���ڴ� line�� ���ԵǾ� �����Ƿ� ���� �߰����� ����
//    }
//
//    // ���� �ݱ�
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
//    // ���� ����
//    if (fopen_s(&fp, "scorelist1.txt", "r") != 0) {
//        perror("���� ���⿡ ������");
//        return 1;
//    }
//
//    // ù ��° ��(������)�� ����
//    fgets(line, sizeof(line), fp);
//
//    // ���� ���� �� �پ� �о �Ľ�
//    while (fgets(line, sizeof(line), fp) != NULL) {
//        if (sscanf_s(line, "%d %d %d", &no, &eng, &math) == 3) {
//            printf("�й�: %d, ����: %d, ����: %d, ���: %.2f\n", no, eng, math, (eng + math) / 2.0);
//        }
//        else {
//            printf("�߸��� ������ ������: %s", line);
//        }
//    }
//
//    // ���� �ݱ�
//    fclose(fp);
//
//    return 0;
//}
