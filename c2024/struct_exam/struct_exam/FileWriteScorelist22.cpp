//#include <stdio.h>
//
//int main() {
//    FILE* fp;
//    int no, eng, math;
//
//    if (fopen_s(&fp, "scorelist1.txt", "w") != 0) {
//        printf("���� ���⿡ ������\n");
//        return 1;
//    }
//
//    fprintf(fp, "��ȣ ���� ����\n");
//
//    while (1) {
//        printf("��ȣ �Է�(0���� ����): ");
//        if (scanf_s("%d", &no) != 1) {  // �Է� ���� ����
//            printf("�߸��� �Է��Դϴ�. ���ڸ� �Է��ϼ���.\n");
//            while (getchar() != '\n');  // �Է� ���� ����
//            continue;
//        }
//        if (no <= 0) break;
//
//        printf("�������� �Է�: ");
//        if (scanf_s("%d", &eng) != 1) {
//            printf("�߸��� �Է��Դϴ�. ���ڸ� �Է��ϼ���.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        printf("�������� �Է�: ");
//        if (scanf_s("%d", &math) != 1) {
//            printf("�߸��� �Է��Դϴ�. ���ڸ� �Է��ϼ���.\n");
//            while (getchar() != '\n');
//            continue;
//        }
//
//        fprintf(fp, "%d %d %d\n", no, eng, math);
//    }
//
//    fclose(fp);
//    printf("������ ���� �Ϸ�: scorelist3-1.txt\n");
//    return 0;
//}

